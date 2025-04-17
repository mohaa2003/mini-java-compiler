%{
#include "parse.tab.h"
#include "ts.h"
extern int nb_ligne;
extern YYSTYPE yylval;
%}

DIGIT       [0-9]
LETTER      [a-zA-Z_]
IDENTIFIER  {LETTER}({LETTER}|{DIGIT})*
NUMBER      {DIGIT}+
STRING_LITERAL   (\"([^\\\"]|\\.)*\")|(\'([^\\\']|\\.)*\') 
COMMENT     "//".*
MULTILINE_COMMENT "/*"[^*]*"*"+([^*/][^*]*"*"+)*"/"

%%


"boolean"      { insert(yytext, "KW_BOOLEAN", "", 0, 2); return BOOLEAN; }
"char"         { insert(yytext, "KW_CHAR", "", 0, 2); return CHAR; }
"class"        { insert(yytext, "KW_CLASS", "", 0, 2); return CLASS; }
"final"        { insert(yytext, "KW_FINAL", "", 0, 2); return FINAL; }
"double"       { insert(yytext, "KW_DOUBLE", "", 0, 2); return DOUBLE; }
"float"        { insert(yytext, "KW_FLOAT", "", 0, 2); return FLOAT; }
"int"          { insert(yytext, "KW_INT", "", 0, 2); return INT; }
"long"         { insert(yytext, "KW_LONG", "", 0, 2); return LONG; }
"private"      { insert(yytext, "KW_PRIVATE", "", 0, 2); return PRIVATE; }
"protected"    { insert(yytext, "KW_PROTECTED", "", 0, 2); return PROTECTED; }
"public"       { insert(yytext, "KW_PUBLIC", "", 0, 2); return PUBLIC; }
"short"        { insert(yytext, "KW_SHORT", "", 0, 2); return SHORT; }
"static"       { insert(yytext, "KW_STATIC", "", 0, 2); return STATIC; }
"String"       { insert(yytext, "KW_STRING", "", 0, 2); return STRING; }
"new"          { insert(yytext, "KW_NEW", "", 0, 2); return NEW; }
"this"         { insert(yytext, "KW_THIS", "", 0, 2); return THIS; }
"return"       { insert(yytext, "KW_RETURN", "", 0, 2); return RETURN; }
"void"         { insert(yytext, "KW_VOID", "", 0, 2); return VOID; }
"try"          { insert(yytext, "KW_TRY", "", 0, 2); return TRY; }
"catch"        { insert(yytext, "KW_CATCH", "", 0, 2); return CATCH; }
"finally"      { insert(yytext, "KW_FINALLY", "", 0, 2); return FINALLY; }
"if"           { insert(yytext, "KW_IF", "", 0, 2); return IF; }
"else"         { insert(yytext, "KW_ELSE", "", 0, 2); return ELSE; }
"while"        { insert(yytext, "KW_WHILE", "", 0, 2); return WHILE; }
"for"          { insert(yytext, "KW_FOR", "", 0, 2); return FOR; }
"switch"       { insert(yytext, "KW_SWITCH", "", 0, 2); return SWITCH; }
"case"         { insert(yytext, "KW_CASE", "", 0, 2); return CASE; }
"default"      { insert(yytext, "KW_DEFAULT", "", 0, 2); return DEFAULT; }
"break"        { insert(yytext, "KW_BREAK", "", 0, 2); return BREAK; }

"="   { insert(yytext, "ASSIGN", "", 0, 1); return ASSIGN; }
"+="  { insert(yytext, "ASSIGNPLUS", "", 0, 1); return ASSIGNPLUS; }
"-="  { insert(yytext, "ASSIGNMINUS", "", 0, 1); return ASSIGNMINUS; }
"*="  { insert(yytext, "ASSIGNMULT", "", 0, 1); return ASSIGNMULT; }
"%"   { insert(yytext, "ASSIGNMOD", "", 0, 1); return ASSIGNMOD; }
"/="  { insert(yytext, "ASSIGNDIV", "", 0, 1); return ASSIGNDIV; }
"++"  { insert(yytext, "INC", "", 0, 1); return INC; }
"--"  { insert(yytext, "DEC", "", 0, 1); return DEC; }
"=="  { insert(yytext, "EQ", "", 0, 1); return EQ; }
"!="  { insert(yytext, "NEQ", "", 0, 1); return NEQ; }
"<"   { insert(yytext, "LT", "", 0, 1); return LT; }
">"   { insert(yytext, "GT", "", 0, 1); return GT; }
"<="  { insert(yytext, "LTE", "", 0, 1); return LTE; }
">="  { insert(yytext, "GTE", "", 0, 1); return GTE; }
"&&"  { insert(yytext, "AND", "", 0, 1); return AND; }
"||"  { insert(yytext, "OR", "", 0, 1); return OR; }
"!"   { insert(yytext, "NOT", "", 0, 1); return NOT; }
"+"   { insert(yytext, "PLUS", "", 0, 1); return PLUS; }
"-"   { insert(yytext, "MINUS", "", 0, 1); return MINUS; }
"*"   { insert(yytext, "MULTIPLY", "", 0, 1); return MULTIPLY; }
"/"   { insert(yytext, "DIVIDE", "", 0, 1); return DIVIDE; }
"%"   { insert(yytext, "MOD", "", 0, 1); return MOD; }
"("   { insert(yytext, "LPAREN", "separator", 0, 1); return LPAREN; }
")"   { insert(yytext, "RPAREN", "separator", 0, 1); return RPAREN; }
"{"   { insert(yytext, "LBRACE", "separator", 0, 1); return LBRACE; }
"}"   { insert(yytext, "RBRACE", "separator", 0, 1); return RBRACE; }
"["   { insert(yytext, "LBRACKET", "separator", 0, 1); return LBRACKET; }
"]"   { insert(yytext, "RBRACKET", "separator", 0, 1); return RBRACKET; }
"[]"  { insert(yytext, "ARRAYBRACKETS", "separator", 0, 1); return ARRAYBRACKETS; }
";"   { insert(yytext, "SEMICOLON", "separator", 0, 1); return SEMICOLON; }
":"   { insert(yytext, "COLON", "separator", 0, 1); return COLON; }
","   { insert(yytext, "COMMA", "separator", 0, 1); return COMMA; }
"."   { insert(yytext, "DOT", "separator", 0, 1); return DOT; }

{STRING_LITERAL} { insert(yytext, "STRING_LITERAL", "", 0, 2); return STRING_LITERAL; }

{IDENTIFIER}     { 
                    yylval.str=strdup(yytext);
                    insert(yytext,"IDENTIFIER", "", 0,0);
                    return IDENT; 
                  }

{NUMBER}         {
                  yylval.integer= atoi(yytext);
                  insert(yytext, "NUM", "integer",atoi(yytext), 0); 
                  return NUM;
                 }

{COMMENT}        { /* Ignorer les commentaires */ }
{MULTILINE_COMMENT} { /* Ignorer les commentaires multilignes */ }

"\n"             { nb_ligne++; }
[ \t]            { /* Ignorer les espaces */ }

. {
     printf("Erreur lexicale à la ligne %d : %s\n", nb_ligne, yytext);
     return ERR;
}
