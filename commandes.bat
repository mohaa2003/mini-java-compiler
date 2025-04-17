flex lex.l
bison -d parse.y
gcc -o compiler parse.tab.c lex.yy.c ts.c -lfl