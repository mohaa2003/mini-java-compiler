%{
    #include <stdio.h>
    #include <stdlib.h>
    int nb_ligne = 1;
    extern int yylex();
    extern int yyparse();
    extern FILE* yyin;
    void yyerror(const char* msg);
%}

/* Déclaration des tokens (doit correspondre à lex.l) */
%token ABSTRACT ASSERT BOOLEAN BREAK BYTE CASE CATCH CHAR CLASS CONST CONTINUE
%token DEFAULT DO DOUBLE ELSE ENUM EXTENDS FINAL FINALLY FLOAT FOR IF IMPLEMENTS
%token IMPORT INSTANCEOF INT STRING INTERFACE LONG NATIVE NEW PACKAGE PRIVATE PROTECTED
%token PUBLIC RETURN SHORT STATIC STRICTFP SUPER SWITCH SYNCHRONIZED THIS THROW
%token COLON QUESTION ARROW DOUBLE_COLON INCREMENT DECREMENT
%token THROWS TRANSIENT TRY VOID VOLATILE WHILE
%token ASSIGN EQ NEQ LT GT LTE GTE AND OR NOT
%token PLUS MINUS MULTIPLY DIVIDE MOD STRING_LITERAL
%token LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET SEMICOLON COMMA DOT
%token IDENT NUM
%token SYSTEM OUT PRINTLN

%left ELSE
%left ASSIGN
%left OR
%left AND
%left EQ NEQ
%left LT GT LTE GTE
%left PLUS MINUS
%left MULTIPLY DIVIDE MOD
%right NOT

%start program

%%

program:
    import_list class_declaration_list
    ;

import_list:
    /* Vide */
    | import_list import_statement
    ;

import_statement:
    IMPORT import_expression import_type SEMICOLON
    ;

import_expression:
    /* Vide */
    | import_expression IDENT DOT
    ;

import_type:
    IDENT | MULTIPLY
    ;

class_declaration_list:
    class_declaration | class_declaration_list class_declaration
    ;

class_declaration:
    class_type CLASS IDENT LBRACE class_body RBRACE
    ;

class_type:
    ABSTRACT | INTERFACE |
    ;

class_body:
    /* Vide */
    | class_body core_body
    ;

core_body:
    statement | method_declaration | constructor_declaration | instanciation
    ;

instanciation:
    type IDENT ASSIGN creation_object SEMICOLON
    ;

creation_object:
    NEW IDENT LPAREN args RPAREN
    | IDENT LPAREN args RPAREN
    ;

constructor_declaration:
    IDENT LPAREN params RPAREN LBRACE constructor_body RBRACE
    ;

constructor_body:
    /* Vide */
    | constructor_body constructor_assignment SEMICOLON
    ;

constructor_assignment:
    THIS DOT IDENT ASSIGN expression
    ;

method_declaration:
    method_abs_declaration
    | type IDENT LPAREN params RPAREN LBRACE statement_list RBRACE
    | method_modifiers type IDENT LPAREN params RPAREN LBRACE statement_list RBRACE
    ;

method_abs_declaration:
    ABSTRACT type IDENT LPAREN params RPAREN SEMICOLON 
    ;

method_modifiers:
    method_modifier_list
    ;

method_modifier_list:
    method_modifier | method_modifier_list method_modifier
    ;

method_modifier:
    STATIC | FINAL | SYNCHRONIZED
    ;


params:
    /* Vide */
    | param_list
    ;

param_list:
    param_def | param_list COMMA param_def
    ;

param_def:
    type IDENT | type LBRACKET RBRACKET IDENT

assignment:
    IDENT ASSIGN expression | IDENT ASSIGN method_call | array_access ASSIGN expression 
    ;

variable_declaration:
    type variable_init SEMICOLON
    ;

variable_declaration_for:
    type variable_init
    ;

variable_init:
    IDENT | assignment
    ;

statement:
    assignment SEMICOLON
    | array_declaration
    | variable_declaration
    | if_statement
    | while_statement
    | for_statement
    | return_statement SEMICOLON
    | print_statement SEMICOLON
    | method_call SEMICOLON
    | instanciation
    | creation_object
    | constructor_assignment SEMICOLON
    
    ;

print_statement:
    SYSTEM DOT OUT DOT PRINTLN LPAREN expression RPAREN
    ;


sufix_methode_list:
    IDENT DOT | sufix_methode_list IDENT DOT
;

method_call:
    IDENT LPAREN args RPAREN | sufix_methode_list IDENT LPAREN args RPAREN
;

args:
    /* Vide */
    | arg_list
    ;

arg_list:
    expression | arg_list COMMA expression
    ;

if_statement:
    IF LPAREN expression RPAREN LBRACE statement_list RBRACE optional_else
    ;

optional_else:
    /* Vide */  
    | ELSE LBRACE statement_list RBRACE  
    ;

while_statement:
    WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE
    ;

for_statement:
    FOR LPAREN variable_declaration_for SEMICOLON expression SEMICOLON assignment RPAREN LBRACE statement_list RBRACE
    | foreach_statement
    ;

foreach_statement:
    FOR LPAREN type IDENT COLON IDENT RPAREN LBRACE statement_list RBRACE
    ;

return_statement:
    RETURN expression
    |RETURN creation_object
    ;

statement_list:
    /* Vide */
    | statement_list statement
    ;

expression:
    simple_expression expression_prime
    ;

expression_prime:
    /* Vide */
    | PLUS simple_expression expression_prime
    | MINUS simple_expression expression_prime
    | MULTIPLY simple_expression expression_prime
    | DIVIDE simple_expression expression_prime
    | MOD simple_expression expression_prime
    | EQ simple_expression expression_prime
    | NEQ simple_expression expression_prime
    | LT simple_expression expression_prime
    | GT simple_expression expression_prime
    | LTE simple_expression expression_prime
    | GTE simple_expression expression_prime
    | AND simple_expression expression_prime
    | OR simple_expression expression_prime
    ;

simple_expression:
    NOT simple_expression
    | LPAREN expression RPAREN
    | IDENT
    | NUM
    | STRING_LITERAL
    | instanciation
    ;

type:
    INT | FLOAT | BOOLEAN | CHAR | DOUBLE | VOID | STRING | IDENT | type LBRACKET RBRACKET
    ;

array_declaration:
    type IDENT SEMICOLON /* Déclaration sans initialisation */
    | type IDENT ASSIGN array_initialization SEMICOLON
    ;

array_initialization:
    NEW type array_dimensions
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
    IDENT array_indices
    ;

array_indices:
    LBRACKET expression RBRACKET
    | array_indices LBRACKET expression RBRACKET
    ;


%%

void yyerror(const char* msg) {
    fprintf(stderr, "Erreur de syntaxe: %s\n", msg);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Impossible d'ouvrir le fichier");
            return 1;
        }
    }
    
    yyparse();
    
    printf("Analyse syntaxique terminée avec succès.\n");
    return 0;
}
OID | STRING | IDENT | type LBRACKET RBRACKET
    ;

array_declaration:
    type IDENT SEMICOLON /* Déclaration sans initialisation */
    | type IDENT ASSIGN array_initialization SEMICOLON
    ;

array_initialization:
    NEW type array_dimensions
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
    IDENT array_indices
    ;

array_indices:
    LBRACKET expression RBRACKET
    | array_indices LBRACKET expression RBRACKET
    ;


%%

void yyerror(const char* msg) {
    fprintf(stderr, "Erreur de syntaxe: %s\n", msg);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!y