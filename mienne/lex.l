%{
#include "parse.tab.h"
extern int nb_ligne;
%}

DIGIT       [0-9]
LETTER      [a-zA-Z_]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+
STRING_LITERAL   (\"([^\\\"]|\\.)*\")|(\'([^\\\']|\\.)*\') 
/* ajouter les commentaires single line et multi */
%%

"abstract"     { return ABSTRACT; }
"assert"       { return ASSERT; }
"boolean"      { return BOOLEAN; }
"break"        { return BREAK; }
"byte"         { return BYTE; }
"case"         { return CASE; }
"catch"        { return CATCH; }
"char"         { return CHAR; }
"class"        { return CLASS; }
"const"        { return CONST; }
"continue"     { return CONTINUE; }
"default"      { return DEFAULT; }
"do"           { return DO; }
"double"       { return DOUBLE; }
"else"         { return ELSE; }
"enum"         { return ENUM; }
"extends"      { return EXTENDS; }
"final"        { return FINAL; }
"finally"      { return FINALLY; }
"float"        { return FLOAT; }
"for"          { return FOR; }
"if"           { return IF; }
"implements"   { return IMPLEMENTS; }
"instanceof"   { return INSTANCEOF; }
"int"          { return INT; }
"interface"    { return INTERFACE; }
"long"         { return LONG; }
"native"       { return NATIVE; }
"new"          { return NEW; }
"package"      { return PACKAGE; }
"private"      { return PRIVATE; }
"protected"    { return PROTECTED; }
"public"       { return PUBLIC; }
"return"       { return RETURN; }
"short"        { return SHORT; }
"static"       { return STATIC; }
"strictfp"     { return STRICTFP; }
"String"       { return STRING; }
"super"        { return SUPER; }
"switch"       { return SWITCH; }
"synchronized" { return SYNCHRONIZED; }
"this"         { return THIS; }
"throw"        { return THROW; }
"throws"       { return THROWS; }
"transient"    { return TRANSIENT; }
"try"          { return TRY; }
"void"         { return VOID; }
"volatile"     { return VOLATILE; }
"while"        { return WHILE; }

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
";"   { return SEMICOLON; }
","   { return COMMA; }
"."   { return DOT; }
":"   { return COLON; }
"?"   { return QUESTION; }
"->"  { return ARROW; }
"::"  { return DOUBLE_COLON; }
"++"  { return INCREMENT; }
"--"  { return DECREMENT; }
"System"               { return SYSTEM; }
"out"                  { return OUT; }
"println"              { return PRINTLN; }
"\n"                   { nb_ligne ++; }
[ \t]           { /* Ignorer les espaces */ }
{IDENTIFIER}           { return IDENT; }
{NUMBER}               { return NUM; }
/* {COMMENT}              {  }
{MULTILINE_COMMENT}    {  } */
{STRING_LITERAL}       { return STRING_LITERAL; }

. { printf("Erreur lexicale à la ligne %d : %s\n", nb_ligne,yytext); }

%%
eturn NOT; }
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
";"   { return SEMICOLON; }
","   { return COMMA; }
"."   { return DOT; }
":"   { return COLON; }
"?"   { return QUESTION; }
"->"  { return ARROW; }
"::"  { return DOUBLE_COLON; }
"++"  { return INCREMENT; }
"--"  { return DECREMENT; }
"System"               { return SYSTEM; }
"out"                  { return OUT; }
"println"              { return PRINTLN; }
{IDENTIFIER}           { return IDENT; }
{NUMBER}               { return NUM; }
{COMMENT}              { /* Ignorer les commentaires */ }
{MULTILINE_COMMENT}    { /* Ignorer les commentaires */ }
{STRING_LITERAL}       { return STRING_LITER