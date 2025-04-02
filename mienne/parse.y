%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "ts.h"
    elt_idf_cst ts_idf_cst[1000];
    elt_kw_sep ts_kw[50], ts_sep[50];
    int count_idf_cst = 0, count_kw = 0, count_sep = 0;
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
%token ASSIGN EQ NEQ LT GT LTE GTE AND OR NOT
%token PLUS MINUS MULTIPLY DIVIDE MOD STRING_LITERAL
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET ARRAYBRACKETS SEMICOLON COMMA DOT
%token IDENT NUM
%token SYSTEM OUT PRINTLN
%start program

/* %left ELSE */
%left ASSIGN
%left OR
%left AND
%left EQ NEQ
%left LT GT LTE GTE
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
%right NOT
%right UMINUS
/* %right LBRACE RBRACE  // Priorité à droite pour les accolades */
%%
/* si je decide de remettre list_import je dois mettre un nouveau axiome (program) */

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
    | constructor_declaration
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




/* method_static:
    STATIC
;

method_final:
    FINAL
; */




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
    array_access ASSIGN expression
    | qualified_access ASSIGN expression
    | simple_access ASSIGN expression
;

variables_declaration:
    type_abstract instanciation_list SEMICOLON
    | premitive_type variables_init SEMICOLON
    ;


constantes_declaration:
    FINAL type_abstract constantes_init SEMICOLON
    | FINAL premitive_type constantes_init SEMICOLON
    ;

/* variable_declaration_for:
    premitive_type variable_init                  //mal compris !
    | type_abstract variable_init                  //mal compris !
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
    /* | if_statement
    | while_statement
    | for_statement */
;

statement:
    assignment_statement SEMICOLON
    | array_declaration
    | variables_declaration
    | constantes_declaration
    ;

print_statement:
    SYSTEM DOT OUT DOT PRINTLN LPAREN expression RPAREN
    ;


method_prefix:
    THIS DOT
    ;


sufix_methode_list:
    IDENT DOT  // obj.method
    | sufix_methode_list DOT   // obj.method.subMethod
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

/* if_statement:
    IF LPAREN expression RPAREN LBRACE statement_list RBRACE optional_else
    ; */

/* optional_else: 
    | ELSE LBRACE statement_list RBRACE  
    ; 
    */

/* while_statement:
    WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE
    ;

for_statement:
    FOR LPAREN variable_declaration_for SEMICOLON expression SEMICOLON assignment RPAREN LBRACE statement_list RBRACE
    | foreach_statement
    ;

foreach_statement:
    FOR LPAREN type_abstract IDENT COLON IDENT RPAREN LBRACE statement_list RBRACE
    | FOR LPAREN premitive_type IDENT COLON IDENT RPAREN LBRACE statement_list RBRACE
    ; */

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
    | array_access
    | method_call
    | MINUS expression %prec UMINUS
    | simple_expression
;


simple_expression:
    NOT simple_expression
    | LPAREN expression RPAREN
    | qualified_access        // obj.meth
    | simple_access
    | NUM
    | STRING_LITERAL
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
    array_type IDENT SEMICOLON /* Déclaration sans initialisation */
    | array_type IDENT ASSIGN array_initialization SEMICOLON
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