%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "symbols.h"

    extern char *yytext;  // Dernier token lu par Flex

    int nb_ligne = 1;
%}

%union{
int integer;
char* str;
}



/* Déclaration des tokens (correspond à lex.l) */
%token BOOLEAN CHAR CLASS
%token DOUBLE FLOAT FINAL
%token INT STRING LONG PRIVATE PROTECTED VOID
%token PUBLIC SHORT RETURN NEW THIS STATIC
%token ASSIGN ASSIGNPLUS ASSIGNMINUS ASSIGNMULT ASSIGNMOD ASSIGNDIV INC DEC EQ NEQ LT GT LTE GTE AND OR NOT
%token PLUS MINUS MULTIPLY DIVIDE MOD 
%token <str>STRING_LITERAL
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET ARRAYBRACKETS SEMICOLON COMMA DOT COLON
%token <str>IDENT
%token <integer>NUM 
%token ERR
%token SYSTEM OUT PRINTLN PRINT
%token TRY CATCH FINALLY
%token IF WHILE FOR SWITCH CASE DEFAULT ELSE BREAK
%start program

%nonassoc LOWER_THAN_ELSE
%right ELSE
%left ASSIGN ASSIGNPLUS ASSIGNMINUS ASSIGNMULT ASSIGNMOD ASSIGNDIV
%left OR
%left AND
%left EQ NEQ
%left LT GT LTE GTE
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
%left CAST
%right NOT
%right UMINUS
%nonassoc INC DEC
%%

program:
    class_declaration_list
;

class_declaration_list:
    class_declaration | class_declaration_list class_declaration
    ;

class_declaration:
    modificator CLASS IDENT LBRACE class_body RBRACE
    ;

modificator:
    PRIVATE |
    PUBLIC |
    PROTECTED |
    ;

object_modificators:
    PRIVATE |
    PUBLIC |
    PROTECTED |
    PRIVATE STATIC |
    PUBLIC STATIC |
    PROTECTED STATIC |
    STATIC
;

class_body:
    /* Vide */
    | core_body_sequence  // Changé: permet une séquence de core_body
    ;

core_body_sequence:
    core_body
    | core_body_sequence core_body  // Permet plusieurs éléments consécutifs
    ;

core_body:
    statement
    | method_declaration 
    | object_modificators method_declaration 
    | constructor_declaration
    | object_modificators constructor_declaration
    | LBRACE RBRACE  // Accepte {} seul
    | LBRACE core_body_sequence RBRACE  // Accepte { ... } avec contenu permise a l'interieur du block
    ;

block_body_sequence:
    block_body_sequence block_body
    | block_body
;

block_body:
    statement
    | block_statement
    | LBRACE RBRACE //block imbrique
    | LBRACE block_body_sequence RBRACE //block imbrique
;

instanciation_list:
    instanciation_list COMMA instanciation
    | instanciation
;

instanciation:
    IDENT ASSIGN creation_object
    ;

creation_object:
    NEW IDENT LPAREN args RPAREN
    ;

constructor_declaration:
    IDENT LPAREN params RPAREN LBRACE constructor_body RBRACE
    ;

constructor_body:
    /* Vide */
    | block_body_sequence
    ;


method_declaration:
    premitive_type IDENT LPAREN params RPAREN LBRACE block_body_sequence RBRACE
    | array_type IDENT LPAREN params RPAREN LBRACE block_body_sequence RBRACE
    | VOID IDENT LPAREN params RPAREN LBRACE block_body_sequence RBRACE
    | type_abstract IDENT LPAREN params RPAREN LBRACE block_body_sequence RBRACE
    | premitive_type IDENT LPAREN params RPAREN LBRACE RBRACE //pas de corps
    | array_type IDENT LPAREN params RPAREN LBRACE RBRACE //pas de corps
    | VOID IDENT LPAREN params RPAREN LBRACE RBRACE //pas de corps
    | type_abstract IDENT LPAREN params RPAREN LBRACE RBRACE //pas de corps
    ;

params:
    /* Vide */
    | param_list
    ;

param_list:
    param_def | param_list COMMA param_def
    ;

param_def:
    premitive_type IDENT
    | array_type IDENT
    | type_abstract IDENT
    ;

assignment:
    IDENT ASSIGN expression
    ;

assignment_statement:
    array_access assign_statement expression
    | qualified_access assign_statement expression
    | simple_access assign_statement expression
    | inc_dec_statement
;

assign_statement:
    ASSIGN | ASSIGNPLUS | ASSIGNMINUS | ASSIGNMULT | ASSIGNMOD | ASSIGNDIV
;

variables_declaration:
    type_abstract instanciation_list
    | premitive_type variables_init
    ;


constantes_declaration:
    FINAL type_abstract constantes_init
    | FINAL premitive_type constantes_init
    ;

/* variable_declaration_for:
    premitive_type variable_init                  //mal compris !
    ; */

variables_init:
    variables_init COMMA variable_init
    | variable_init
    ;

constantes_init:
    constantes_init COMMA assignment
    | assignment
;

variable_init:
    IDENT | assignment
    ;

block_statement:
    print_statement SEMICOLON
    | method_call SEMICOLON    
    | return_statement SEMICOLON
    | exception_statement
    | if_statement
    | while_statement
    | for_statement
    | foreach_statement
    | switch_statement
;

statement:
    assignment_statement SEMICOLON
    | array_declaration SEMICOLON
    | object_modificators array_declaration SEMICOLON
    | variables_declaration SEMICOLON
    | object_modificators variables_declaration SEMICOLON
    | constantes_declaration SEMICOLON
    | object_modificators constantes_declaration SEMICOLON
    ;

print_statement:
    SYSTEM DOT OUT DOT PRINTLN LPAREN expression RPAREN
    | SYSTEM DOT OUT DOT PRINT LPAREN expression RPAREN
    | SYSTEM DOT OUT DOT PRINTLN LPAREN  RPAREN
    | SYSTEM DOT OUT DOT PRINT LPAREN  RPAREN
    ;


method_prefix:
    THIS DOT
    ;


sufix_methode_list:
    IDENT DOT  // obj.method
    | sufix_methode_list IDENT DOT   // obj.method.subMethod
;

qualified_method_call:
    method_prefix IDENT LPAREN args RPAREN          // this.meth()
    | sufix_methode_list IDENT LPAREN args RPAREN  // obj.meth()
    ;

    simple_method_call:
    IDENT LPAREN args RPAREN                   // meth()
    ;

method_call:
    qualified_method_call    // obj.meth() ou this.meth()
    | simple_method_call     // meth()
    ;                                                 // pour eviter le conflit avec la declaration des constructeurs


args:
    /* Vide */
    | arg_list
    ;

arg_list:
    arg_type | arg_list COMMA arg_type
    ;

arg_type:
    expression
    | creation_object
;

//------------------------------------ LES BOUCLES ET LES BLOCKS DE CONTROLES ---------------------------------
//IN JAVA IT'S IMPOSSIBLE TO ALLOW ONLY A DECLARATION STATEMENT INSIDE AN IF OR A WHILE ... OUTSIDE THE BLOCK !
//THIS WHAT I DID

if_statement:
        IF LPAREN expression RPAREN control_body %prec LOWER_THAN_ELSE
        | IF LPAREN expression RPAREN control_body ELSE else_body       
        | IF LPAREN expression RPAREN control_body ELSE if_statement
    ;

control_body:   //utilise pour traite tous les cas d'un corps d'une instructions de boucle ou des conditions
    LBRACE RBRACE
    | LBRACE block_body_sequence RBRACE       /* cas du bloc if (qui peut être vide ou non) */
    | assignment_statement SEMICOLON         /* cas d'une instruction simple sans accolades */
    | block_statement                        /* cas d'un statement déjà défini (qui n'est pas un if) */
;


else_body:
    LBRACE RBRACE
    | LBRACE block_body_sequence RBRACE     /* cas du bloc else (qui peut être vide ou non) */
    | assignment_statement SEMICOLON       /* cas d'une instruction simple sans accolades */
    | block_statement_without_if                    /* cas d'un statement déjà défini (qui n'est pas un if) */
;


block_statement_without_if:
    print_statement SEMICOLON
    | method_call SEMICOLON    
    | return_statement SEMICOLON
    | exception_statement
    | while_statement
    | for_statement
    | foreach_statement
    | switch_statement                       /* cas d'un statement déjà défini (qui n'est pas un if) */
;


while_statement:  //l'expressionn est obligatoire , initialise la a 1 si elle est boucle infinie
    WHILE LPAREN expression RPAREN control_body
;

for_statement:  //l'expressionn est obligatoire , initialise la a 1 si elle est boucle infinie
      FOR LPAREN for_init SEMICOLON expression SEMICOLON for_update RPAREN control_body
;

for_init:
      assignment
    | variables_declaration
    | /* Vide */
    ;

for_update:  
      assignment
    | /* Vide */
    ;

/* --- foreach statement --- */
foreach_statement:
    FOR LPAREN premitive_type IDENT COLON IDENT RPAREN control_body
    | FOR LPAREN type_abstract IDENT COLON IDENT RPAREN control_body
    | FOR LPAREN array_type IDENT COLON IDENT RPAREN control_body
;

switch_statement:
      SWITCH LPAREN expression RPAREN LBRACE case_clauses default_clause_opt RBRACE
    ;

case_clauses:
      /* Vide */
    | case_clauses case_clause
    ;

case_clause:
      CASE expression COLON block_body_sequence break_opt
    ;

break_opt:
    // vide
    | BREAK SEMICOLON
;

    default_clause_opt:
      /* Vide */
    | DEFAULT COLON block_body_sequence
    ;


return_statement:   //si a l'interieur d'une fonction il doit etre la valeur de retour de cette fonction
                    //si n'est pas dans une fonction alors il act comme un exit()
    RETURN //sortir sans aucun retour (danger a cause de type de retour)
    | RETURN expression
    | RETURN creation_object
    ;

expression:
    expression PLUS simple_expression
    | expression MINUS simple_expression
    | expression MULTIPLY simple_expression
    | expression DIVIDE simple_expression
    | expression MOD simple_expression
    | expression EQ simple_expression
    | expression NEQ simple_expression
    | expression LT simple_expression
    | expression GT simple_expression
    | expression LTE simple_expression
    | expression GTE simple_expression
    | expression AND simple_expression
    | expression OR simple_expression
    | MINUS expression %prec UMINUS
    | LPAREN premitive_type RPAREN expression %prec CAST
    | LPAREN array_type RPAREN expression %prec CAST  //pas le casting de type abstract psq y a pas de abstraction ou heritage
    | simple_expression
;


simple_expression:
    NOT simple_expression
    | LPAREN expression RPAREN
    | qualified_access        // obj.meth
    | simple_access
    | array_access
    | inc_dec_statement
    | method_call
    | NUM
    | STRING_LITERAL
    ;

inc_dec_statement:
    qualified_access INC       // obj.meth
    | INC qualified_access       // obj.meth
    | qualified_access DEC       // obj.meth
    | DEC qualified_access       // obj.meth
    | simple_access INC
    | simple_access DEC
    | INC simple_access
    | DEC simple_access
    | INC array_access
    | DEC array_access
    | array_access INC
    | array_access DEC
;

premitive_type:
    INT | FLOAT | BOOLEAN | CHAR | DOUBLE | STRING | LONG | SHORT
;

array_type:
    premitive_type ARRAYBRACKETS
    | IDENT /*type abstract , je l'ai pas mentionne pour eviter le conflit !*/ ARRAYBRACKETS
;

type_abstract:
    IDENT
;



array_declaration:
    array_type IDENT /* Déclaration sans initialisation */
    | array_type IDENT ASSIGN array_initialization
    ;

array_initialization:
    NEW type_abstract array_dimensions
    | NEW premitive_type array_dimensions
    | LBRACE array_elements RBRACE
    ;

array_dimensions:
    LBRACKET expression RBRACKET
    | array_dimensions LBRACKET expression RBRACKET
    ;

array_elements:
    expression
    | array_elements COMMA expression
    ;

array_access:
    qualified_access array_indices
    | simple_access array_indices
    ;

qualified_access:
    sufix_methode_list IDENT  // obj.arr
    | method_prefix IDENT           // this.arr
    ;

simple_access:
    IDENT                     // arr
    ;

array_indices:
    LBRACKET expression RBRACKET
    | array_indices LBRACKET expression RBRACKET
    ;

    //EXCEPTIONS

exception_statement:
    TRY LBRACE block_body_sequence RBRACE catch_clauses finally_clause_opt
    | TRY LBRACE block_body_sequence RBRACE finally_clause            /* Permet try ... finally sans catch */
    |TRY LBRACE RBRACE catch_clauses finally_clause_opt   //sans corps !
    | TRY LBRACE RBRACE finally_clause            /* Permet try ... finally sans catch */
    ;

catch_clauses:
    catch_clause
    | catch_clauses catch_clause
;

catch_clause:
      CATCH LPAREN exception_declaration RPAREN LBRACE block_body_sequence RBRACE
      | CATCH LPAREN exception_declaration RPAREN LBRACE RBRACE
    ;

exception_declaration:
      type_abstract IDENT
    ;

finally_clause:
      FINALLY LBRACE block_body_sequence RBRACE
      | FINALLY LBRACE RBRACE
    ;

finally_clause_opt:
      /* Vide */
    | finally_clause
    ;

%%

int main() {
    if (yyparse() == 0) {
        printf("Syntaxe correcte !\n");
    }
    return 0;
}
int yywrap()
{
    return 1;
}
int yyerror(char *msg)
{ 
    printf("Erreur syntaxique à la ligne %d : %s\n", nb_ligne,yytext);
    exit(1);
}