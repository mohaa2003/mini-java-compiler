/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BOOLEAN = 258,                 /* BOOLEAN  */
    CHAR = 259,                    /* CHAR  */
    CLASS = 260,                   /* CLASS  */
    DOUBLE = 261,                  /* DOUBLE  */
    FLOAT = 262,                   /* FLOAT  */
    FINAL = 263,                   /* FINAL  */
    INT = 264,                     /* INT  */
    STRING = 265,                  /* STRING  */
    LONG = 266,                    /* LONG  */
    PRIVATE = 267,                 /* PRIVATE  */
    PROTECTED = 268,               /* PROTECTED  */
    VOID = 269,                    /* VOID  */
    PUBLIC = 270,                  /* PUBLIC  */
    SHORT = 271,                   /* SHORT  */
    RETURN = 272,                  /* RETURN  */
    NEW = 273,                     /* NEW  */
    THIS = 274,                    /* THIS  */
    STATIC = 275,                  /* STATIC  */
    ASSIGN = 276,                  /* ASSIGN  */
    ASSIGNPLUS = 277,              /* ASSIGNPLUS  */
    ASSIGNMINUS = 278,             /* ASSIGNMINUS  */
    ASSIGNMULT = 279,              /* ASSIGNMULT  */
    ASSIGNMOD = 280,               /* ASSIGNMOD  */
    ASSIGNDIV = 281,               /* ASSIGNDIV  */
    INC = 282,                     /* INC  */
    DEC = 283,                     /* DEC  */
    EQ = 284,                      /* EQ  */
    NEQ = 285,                     /* NEQ  */
    LT = 286,                      /* LT  */
    GT = 287,                      /* GT  */
    LTE = 288,                     /* LTE  */
    GTE = 289,                     /* GTE  */
    AND = 290,                     /* AND  */
    OR = 291,                      /* OR  */
    NOT = 292,                     /* NOT  */
    PLUS = 293,                    /* PLUS  */
    MINUS = 294,                   /* MINUS  */
    MULTIPLY = 295,                /* MULTIPLY  */
    DIVIDE = 296,                  /* DIVIDE  */
    MOD = 297,                     /* MOD  */
    STRING_LITERAL = 298,          /* STRING_LITERAL  */
    LPAREN = 299,                  /* LPAREN  */
    RPAREN = 300,                  /* RPAREN  */
    LBRACE = 301,                  /* LBRACE  */
    RBRACE = 302,                  /* RBRACE  */
    LBRACKET = 303,                /* LBRACKET  */
    RBRACKET = 304,                /* RBRACKET  */
    ARRAYBRACKETS = 305,           /* ARRAYBRACKETS  */
    SEMICOLON = 306,               /* SEMICOLON  */
    COMMA = 307,                   /* COMMA  */
    DOT = 308,                     /* DOT  */
    COLON = 309,                   /* COLON  */
    IDENT = 310,                   /* IDENT  */
    NUM = 311,                     /* NUM  */
    ERR = 312,                     /* ERR  */
    SYSTEM = 313,                  /* SYSTEM  */
    OUT = 314,                     /* OUT  */
    PRINTLN = 315,                 /* PRINTLN  */
    PRINT = 316,                   /* PRINT  */
    TRY = 317,                     /* TRY  */
    CATCH = 318,                   /* CATCH  */
    FINALLY = 319,                 /* FINALLY  */
    IF = 320,                      /* IF  */
    WHILE = 321,                   /* WHILE  */
    FOR = 322,                     /* FOR  */
    SWITCH = 323,                  /* SWITCH  */
    CASE = 324,                    /* CASE  */
    DEFAULT = 325,                 /* DEFAULT  */
    ELSE = 326,                    /* ELSE  */
    BREAK = 327,                   /* BREAK  */
    LOWER_THAN_ELSE = 328,         /* LOWER_THAN_ELSE  */
    CAST = 329,                    /* CAST  */
    UMINUS = 330                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parse.y"

    int integer;         // Pour int, boolean, etc.
    float floating;      // Pour float
    double doubleval;    // Pour double
    char charval;        // Pour char
    char* str;           // Pour identifiants, String literals

#line 147 "parse.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
