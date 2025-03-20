flex lex.l
bison -d parse.y
gcc lex.yy.c parse.tab.c -lfl -ly -o compile.exe