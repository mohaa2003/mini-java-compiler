%{
#include "parse.tab.h"
#include "ts.h"
extern nb_ligne;
extern YYSTYPE yylval;
%}

DIGIT       [0-9]
LETTER      [a-zA-Z_]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+
STRING_LITERAL   (\"([^\\\"]|\\.)*\")|(\'([^\\\']|\\.)*\') 
COMMENT     " // ".*
MULTILINE_COMMENT "/*"[^*]*"*"+([^*/][^*]*"*"+)*"/"
%%

"boolean"      { return BOOLEAN; }
"char"         { return CHAR; }
"class"        { return CLASS; }
"final"        { return FINAL; }
"double"       { return DOUBLE; }
"float"        { return FLOAT; }
"int"          { return INT; }
"long"         { return LONG; }
"private"      { return PRIVATE; }
"protected"    { return PROTECTED; }
"public"       { return PUBLIC; }
"short"        { return SHORT; }
"static"       { return STATIC; }
"String"       { return STRING; }
"new"          { return NEW; }
"this"         { return THIS; }
"return"       { return RETURN; }
"void"         { return VOID; }
"try"         { return TRY; }
"catch"         { return CATCH; }
"finally"         { return FINALLY; }
"if"         { return IF; }
"else"         { return ELSE; }
"while"         { return WHILE; }
"for"         { return FOR; }
"switch"         { return SWITCH; }
"case"         { return CASE; }
"default"         { return DEFAULT; }


"="   { return ASSIGN; }
"=="  { return EQ; }
"!="  { return NEQ; }
"<"   { return LT; }
">"   { return GT; }
"<="  { return LTE; }
">="  { return GTE; }
"&&"  { return AND; }
"||"  { return OR; }
"!"   { return NOT; }
"+"   { return PLUS; }
"-"   { return MINUS; }
"*"   { return MULTIPLY; }
"/"   { return DIVIDE; }
"%"   { return MOD; }
"("   { return LPAREN; }
")"   { return RPAREN; }
"{"   { return LBRACE; }
"}"   { return RBRACE; }
"["   { return LBRACKET; }
"]"   { return RBRACKET; }
"[]"   { return ARRAYBRACKETS; }
";"   { return SEMICOLON; }
":"   { return COLON; }
","   { return COMMA; }
"."   { return DOT; }
"System"               { return SYSTEM; }
"out"                  { return OUT; }
"println"              { return PRINTLN; }
"\n"                   { nb_ligne ++; }
[ \t]           { /* Ignorer les espaces */ }
{IDENTIFIER}           { return IDENT; }
{NUMBER}               { return NUM; }
{COMMENT}              { /* Ignorer les commentaires */ }
{MULTILINE_COMMENT}    { /* Ignorer les commentaires multilignes */ }
{STRING_LITERAL}       { return STRING_LITERAL; }

. {
     printf("Erreur lexicale à la ligne %d : %s\n", nb_ligne,yytext);
     return ERR;
  }

