
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parse.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ts.h"
    elt_idf_cst ts_idf_cst[1000];
    elt_kw_sep ts_kw[50], ts_sep[50];
    int count_idf_cst = 0, count_kw = 0, count_sep = 0;
    extern char *yytext;  // Dernier token lu par Flex

    int nb_ligne = 1;


/* Line 189 of yacc.c  */
#line 86 "parse.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOOLEAN = 258,
     CHAR = 259,
     CLASS = 260,
     DOUBLE = 261,
     FLOAT = 262,
     FINAL = 263,
     INT = 264,
     STRING = 265,
     LONG = 266,
     PRIVATE = 267,
     PROTECTED = 268,
     VOID = 269,
     PUBLIC = 270,
     SHORT = 271,
     RETURN = 272,
     NEW = 273,
     THIS = 274,
     STATIC = 275,
     ASSIGN = 276,
     EQ = 277,
     NEQ = 278,
     LT = 279,
     GT = 280,
     LTE = 281,
     GTE = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     PLUS = 286,
     MINUS = 287,
     MULTIPLY = 288,
     DIVIDE = 289,
     MOD = 290,
     STRING_LITERAL = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACE = 294,
     RBRACE = 295,
     LBRACKET = 296,
     RBRACKET = 297,
     ARRAYBRACKETS = 298,
     SEMICOLON = 299,
     COMMA = 300,
     DOT = 301,
     IDENT = 302,
     NUM = 303,
     ERR = 304,
     SYSTEM = 305,
     OUT = 306,
     PRINTLN = 307,
     TRY = 308,
     CATCH = 309,
     FINALLY = 310,
     IF = 311,
     WHILE = 312,
     FOR = 313,
     SWITCH = 314,
     CASE = 315,
     DEFAULT = 316,
     ELSE = 317,
     UMINUS = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "parse.y"

int integer;
char* str;



/* Line 214 of yacc.c  */
#line 192 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 204 "parse.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1707

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNRULES -- Number of states.  */
#define YYNSTATES  333

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    19,    21,    23,
      24,    26,    28,    30,    33,    36,    39,    41,    42,    44,
      46,    49,    51,    53,    56,    58,    61,    64,    68,    71,
      73,    75,    77,    80,    84,    88,    90,    94,   100,   108,
     109,   111,   120,   129,   138,   147,   155,   163,   171,   179,
     180,   182,   184,   188,   191,   194,   197,   201,   205,   209,
     213,   217,   221,   226,   231,   235,   237,   241,   243,   245,
     247,   250,   253,   256,   258,   260,   262,   265,   267,   270,
     272,   275,   277,   280,   289,   292,   295,   299,   305,   311,
     316,   318,   320,   321,   323,   325,   329,   331,   333,   340,
     348,   356,   363,   365,   368,   371,   375,   379,   383,   387,
     391,   395,   399,   403,   407,   411,   415,   419,   423,   425,
     427,   430,   432,   435,   439,   441,   443,   445,   447,   449,
     451,   453,   455,   457,   459,   461,   463,   466,   469,   471,
     475,   481,   485,   489,   493,   497,   502,   504,   508,   511,
     514,   517,   520,   522,   526,   531,   538,   544,   550,   555,
     557,   560,   568,   575,   578,   583,   587,   588
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,    66,    -1,    67,    -1,    66,    67,    -1,
      68,     5,    47,    39,    70,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    71,    -1,    72,    -1,    71,    72,    -1,    92,
      -1,    80,    -1,    69,    80,    -1,    78,    -1,    69,    78,
      -1,    39,    40,    -1,    39,    71,    40,    -1,    73,    74,
      -1,    74,    -1,    92,    -1,    91,    -1,    39,    40,    -1,
      39,    73,    40,    -1,    75,    45,    76,    -1,    76,    -1,
      47,    21,    77,    -1,    18,    47,    37,    99,    38,    -1,
      47,    37,    81,    38,    39,    79,    40,    -1,    -1,    73,
      -1,   107,    47,    37,    81,    38,    39,    73,    40,    -1,
     108,    47,    37,    81,    38,    39,    73,    40,    -1,    14,
      47,    37,    81,    38,    39,    73,    40,    -1,   109,    47,
      37,    81,    38,    39,    73,    40,    -1,   107,    47,    37,
      81,    38,    39,    40,    -1,   108,    47,    37,    81,    38,
      39,    40,    -1,    14,    47,    37,    81,    38,    39,    40,
      -1,   109,    47,    37,    81,    38,    39,    40,    -1,    -1,
      82,    -1,    83,    -1,    82,    45,    83,    -1,   107,    47,
      -1,   108,    47,    -1,   109,    47,    -1,    47,    21,   105,
      -1,   114,    21,   105,    -1,   115,    21,   105,    -1,   116,
      21,   105,    -1,   109,    75,    44,    -1,   107,    88,    44,
      -1,     8,   109,    89,    44,    -1,     8,   107,    89,    44,
      -1,    88,    45,    90,    -1,    90,    -1,    89,    45,    84,
      -1,    84,    -1,    47,    -1,    84,    -1,    93,    44,    -1,
      98,    44,    -1,   104,    44,    -1,   118,    -1,   102,    -1,
     103,    -1,    85,    44,    -1,   110,    -1,    69,   110,    -1,
      86,    -1,    69,    86,    -1,    87,    -1,    69,    87,    -1,
      50,    46,    51,    46,    52,    37,   105,    38,    -1,    19,
      46,    -1,    47,    46,    -1,    95,    47,    46,    -1,    94,
      47,    37,    99,    38,    -1,    95,    47,    37,    99,    38,
      -1,    47,    37,    99,    38,    -1,    96,    -1,    97,    -1,
      -1,   100,    -1,   101,    -1,   100,    45,   101,    -1,   105,
      -1,    77,    -1,    56,    37,   105,    38,    39,    40,    -1,
      56,    37,   105,    38,    39,    73,    40,    -1,    57,    37,
     105,    38,    39,    74,    40,    -1,    57,    37,   105,    38,
      39,    40,    -1,    17,    -1,    17,   105,    -1,    17,    77,
      -1,   105,    31,   106,    -1,   105,    32,   106,    -1,   105,
      33,   106,    -1,   105,    34,   106,    -1,   105,    35,   106,
      -1,   105,    22,   106,    -1,   105,    23,   106,    -1,   105,
      24,   106,    -1,   105,    25,   106,    -1,   105,    26,   106,
      -1,   105,    27,   106,    -1,   105,    28,   106,    -1,   105,
      29,   106,    -1,   114,    -1,    98,    -1,    32,   105,    -1,
     106,    -1,    30,   106,    -1,    37,   105,    38,    -1,   115,
      -1,   116,    -1,    48,    -1,    36,    -1,     9,    -1,     7,
      -1,     3,    -1,     4,    -1,     6,    -1,    10,    -1,    11,
      -1,    16,    -1,   107,    43,    -1,    47,    43,    -1,    47,
      -1,   108,    47,    44,    -1,   108,    47,    21,   111,    44,
      -1,    18,   109,   112,    -1,    18,   107,   112,    -1,    39,
     113,    40,    -1,    41,   105,    42,    -1,   112,    41,   105,
      42,    -1,   105,    -1,   113,    45,   105,    -1,   115,   117,
      -1,   116,   117,    -1,    95,    47,    -1,    94,    47,    -1,
      47,    -1,    41,   105,    42,    -1,   117,    41,   105,    42,
      -1,    53,    39,    73,    40,   119,   123,    -1,    53,    39,
      73,    40,   122,    -1,    53,    39,    40,   119,   123,    -1,
      53,    39,    40,   122,    -1,   120,    -1,   119,   120,    -1,
      54,    37,   121,    38,    39,    73,    40,    -1,    54,    37,
     121,    38,    39,    40,    -1,   109,    47,    -1,    55,    39,
      73,    40,    -1,    55,    39,    40,    -1,    -1,   122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    53,    53,    57,    61,    62,    63,    63,
      67,    68,    69,    70,    71,    72,    73,    76,    78,    82,
      83,    87,    88,    89,    90,    91,    92,    93,    97,    98,
     102,   103,   104,   105,   109,   110,   114,   118,   122,   125,
     127,   132,   133,   134,   135,   136,   137,   138,   139,   142,
     144,   148,   148,   152,   153,   154,   158,   162,   163,   164,
     168,   169,   174,   175,   183,   184,   188,   189,   193,   193,
     197,   198,   199,   200,   201,   202,   207,   208,   209,   210,
     211,   212,   213,   217,   222,   227,   228,   232,   233,   237,
     241,   242,   246,   248,   252,   252,   256,   257,   261,   264,
     270,   271,   299,   300,   301,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   326,   327,   328,   329,   330,   331,   335,   335,
     335,   335,   335,   335,   335,   335,   339,   340,   344,   350,
     351,   355,   356,   357,   361,   362,   366,   367,   371,   372,
     376,   377,   381,   385,   386,   392,   393,   394,   395,   399,
     400,   404,   405,   409,   413,   414,   417,   419
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "CHAR", "CLASS", "DOUBLE",
  "FLOAT", "FINAL", "INT", "STRING", "LONG", "PRIVATE", "PROTECTED",
  "VOID", "PUBLIC", "SHORT", "RETURN", "NEW", "THIS", "STATIC", "ASSIGN",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "AND", "OR", "NOT", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "MOD", "STRING_LITERAL", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "ARRAYBRACKETS",
  "SEMICOLON", "COMMA", "DOT", "IDENT", "NUM", "ERR", "SYSTEM", "OUT",
  "PRINTLN", "TRY", "CATCH", "FINALLY", "IF", "WHILE", "FOR", "SWITCH",
  "CASE", "DEFAULT", "ELSE", "UMINUS", "$accept", "program",
  "class_declaration_list", "class_declaration", "modificator",
  "object_modificators", "class_body", "core_body_sequence", "core_body",
  "block_body_sequence", "block_body", "instanciation_list",
  "instanciation", "creation_object", "constructor_declaration",
  "constructor_body", "method_declaration", "params", "param_list",
  "param_def", "assignment", "assignment_statement",
  "variables_declaration", "constantes_declaration", "variables_init",
  "constantes_init", "variable_init", "block_statement", "statement",
  "print_statement", "method_prefix", "sufix_methode_list",
  "qualified_method_call", "simple_method_call", "method_call", "args",
  "arg_list", "arg_type", "if_statement", "while_statement",
  "return_statement", "expression", "simple_expression", "premitive_type",
  "array_type", "type_abstract", "array_declaration",
  "array_initialization", "array_dimensions", "array_elements",
  "array_access", "qualified_access", "simple_access", "array_indices",
  "exception_statement", "catch_clauses", "catch_clause",
  "exception_declaration", "finally_clause", "finally_clause_opt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    77,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    84,    85,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    93,    94,    95,    95,    96,    96,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     1,     1,     1,     0,
       1,     1,     1,     2,     2,     2,     1,     0,     1,     1,
       2,     1,     1,     2,     1,     2,     2,     3,     2,     1,
       1,     1,     2,     3,     3,     1,     3,     5,     7,     0,
       1,     8,     8,     8,     8,     7,     7,     7,     7,     0,
       1,     1,     3,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     4,     4,     3,     1,     3,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     8,     2,     2,     3,     5,     5,     4,
       1,     1,     0,     1,     1,     3,     1,     1,     6,     7,
       7,     6,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     3,
       5,     3,     3,     3,     3,     4,     1,     3,     2,     2,
       2,     2,     1,     3,     4,     6,     5,     5,     4,     1,
       2,     7,     6,     2,     4,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   130,   131,   132,   129,     0,   128,   133,
     134,    10,    12,     0,    11,   135,     0,    16,     0,   152,
       0,     0,    18,    19,    24,    22,     0,    79,    81,    21,
       0,     0,     0,     0,     0,    77,     0,     0,     0,   138,
       0,     0,    13,    15,     0,    14,    84,    26,     0,    49,
     137,    85,   138,    25,    23,    80,    82,    78,     5,    20,
      76,   151,   150,   136,    68,    69,     0,    65,     0,     0,
       0,    35,     0,     0,     0,   148,     0,   149,     0,    67,
       0,     0,    49,    27,   138,     0,    50,    51,     0,     0,
       0,    86,     0,    49,    61,     0,     0,    49,   139,     0,
      49,    60,     0,     0,     0,   127,     0,   152,   126,     0,
       0,    90,    91,   119,    57,   121,   118,   124,   125,    58,
       0,     0,    59,    63,     0,    62,     0,     0,     0,    53,
      54,    55,    56,     0,    68,    64,     0,     0,     0,     0,
       0,    36,     0,     0,    34,   152,   122,   124,   125,   120,
       0,    92,   151,   150,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,     0,    66,
       0,    39,    52,     0,     0,     0,   146,     0,   140,     0,
       0,     0,   123,    97,     0,    93,    94,    96,    92,    92,
     110,   111,   112,   113,   114,   115,   116,   117,   105,   106,
     107,   108,   109,   154,     0,   102,     0,   152,     0,     0,
       0,     0,     0,    40,    29,     0,    31,    30,     0,     0,
      74,    75,     0,     0,     0,     0,    73,     0,     0,   142,
     141,   143,     0,     0,    92,     0,    89,     0,     0,     0,
      47,     0,   104,   103,    32,     0,     0,     0,     0,     0,
      28,    38,    70,    71,    72,     0,    45,     0,     0,     0,
     147,    46,     0,     0,    48,     0,    95,    87,    88,    43,
      33,     0,     0,     0,     0,     0,    41,   144,     0,    42,
      37,    44,     0,     0,     0,   166,   159,   158,     0,     0,
       0,   145,     0,     0,     0,   160,   167,   157,   166,   156,
       0,     0,     0,     0,     0,   165,     0,   155,    98,     0,
     101,     0,     0,   163,     0,   164,    99,   100,    83,     0,
     162,     0,   161
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   222,    31,    32,    33,   223,
     224,    80,    81,   193,    34,   225,    35,    95,    96,    97,
      75,    36,    37,    38,    76,    90,    77,   226,   227,   228,
     119,   120,   121,   122,   123,   194,   195,   196,   230,   231,
     232,   197,   125,   233,   234,   235,    45,   148,   239,   187,
      46,    47,    48,    85,   236,   295,   296,   314,   306,   307
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -259
static const yytype_int16 yypact[] =
{
     133,  -259,  -259,  -259,    33,   127,  -259,    39,  -259,  -259,
      52,   -36,  1660,  -259,  -259,  -259,  -259,   291,  -259,  -259,
    -259,   113,   131,   110,   143,  -259,   126,  -259,  1600,   106,
     313,   125,  1660,  -259,  -259,  -259,   134,  -259,  -259,  -259,
     128,   132,    35,   135,   140,  -259,   159,    -2,     8,  -259,
     141,   141,  -259,  -259,   152,  -259,  -259,  -259,  1642,   447,
    -259,  -259,    -5,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,   144,  -259,    37,  -259,    23,  -259,    27,    42,
      44,  -259,   336,   336,   336,   150,   336,   150,   178,  -259,
      57,    74,   447,  -259,   157,   163,   180,  -259,    73,   179,
     184,  -259,   336,   447,  -259,   185,     6,   447,  -259,   209,
     447,  -259,   189,   339,   336,  -259,   336,    38,  -259,   194,
     198,  -259,  -259,  -259,  1028,  -259,  -259,   207,   207,  1028,
     588,   336,  1028,  -259,   141,  -259,   211,   217,   447,  -259,
    -259,  -259,  1028,   223,   178,  -259,   291,   336,   218,   225,
     220,  -259,   226,   244,  -259,   224,  -259,  -259,  -259,  -259,
     808,   210,   235,    84,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,  -259,   643,  -259,
     236,  1579,  -259,   237,   238,   238,  1028,   115,  -259,   239,
     240,   242,  -259,  -259,   246,   243,  -259,  1028,   210,   210,
    -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,  -259,
    -259,  -259,  -259,  -259,   534,   210,   589,   187,   234,   247,
     256,   259,   482,  1579,  -259,   265,  -259,  -259,   262,   264,
    -259,  -259,   267,   119,   266,   189,  -259,   644,   336,   268,
     268,  -259,   336,   699,   210,   754,  -259,   210,   274,   287,
    -259,   809,  -259,  1028,  -259,   864,   275,   919,   336,   336,
    -259,  -259,  -259,  -259,  -259,    15,  -259,   974,   698,   336,
    1028,  -259,  1029,   290,  -259,  1084,  -259,  -259,  -259,  -259,
    -259,   285,    81,  1139,   863,   918,  -259,  -259,   753,  -259,
    -259,  -259,   280,   296,   295,    81,  -259,  -259,    81,   298,
     300,  -259,   319,   288,  1194,  -259,  -259,  -259,    81,  -259,
    1249,  1304,   336,   314,   324,  -259,  1359,  -259,  -259,  1414,
    -259,   325,   973,  -259,   328,  -259,  -259,  -259,  -259,  1469,
    -259,  1524,  -259
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -259,  -259,  -259,   359,  -259,     2,  -259,   342,   -15,  -160,
      -1,  -259,   269,   -98,   341,  -259,   344,   -41,  -259,   250,
     -44,  -259,   -29,   -28,  -259,   326,   273,  -259,     3,  -259,
     227,   241,  -259,  -259,   204,  -172,  -259,   142,  -259,  -259,
    -259,   121,   177,   414,    64,   -12,   -26,  -259,   197,  -259,
     -74,   -61,    45,   -35,  -259,   123,  -258,  -259,  -217,    96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -139
static const yytype_int16 yytable[] =
{
      44,    65,    66,    12,    67,    51,    89,    89,   126,   126,
     126,   151,   126,    87,    30,    39,    44,    69,    44,    83,
      44,   127,   127,   127,   146,   127,   248,   249,   126,    86,
      30,    39,    59,     8,    30,    39,   106,   305,    60,    84,
     126,   127,   126,    69,    10,   147,    44,   100,   106,    84,
     305,   136,   157,   127,   251,   127,   255,   126,   102,   108,
      30,    39,   143,   109,   107,   297,   149,   104,   105,   152,
     127,   108,   273,   126,   103,   161,    43,   267,    73,   110,
     100,   309,    74,   272,    61,   275,   127,   126,   111,   112,
     179,   100,    43,    87,    43,   100,    43,   283,   100,    11,
     127,   133,   134,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,    73,   252,   135,   134,
     139,   199,    43,    99,   126,   126,   100,   128,   128,   128,
     101,   128,    -9,    52,   185,   293,   294,   127,   127,     1,
       2,   126,     3,    59,   316,     1,     2,   128,     3,    60,
     319,    53,    61,  -138,   127,   241,    99,    54,   158,   128,
     242,   128,    73,    55,   126,    68,   144,    99,   126,   331,
     126,    99,    56,   126,    99,    71,   128,   127,    70,    72,
      82,   127,    78,   127,   126,   126,   127,    79,    88,    92,
     101,   131,   128,    65,    66,   126,    67,   127,   127,   102,
      60,   137,    99,   124,   129,   130,   128,   132,   127,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   260,   142,   161,   138,   140,   150,   150,    26,
      60,   141,   144,    61,  -138,   159,   153,   160,   126,    40,
     113,   162,   114,   128,   128,   163,   115,   116,    84,   180,
     260,   127,   178,    41,   260,    40,   181,   117,   118,    40,
     128,   183,   188,   189,   191,   109,   260,   190,   186,    41,
      61,   260,   198,    41,   260,   214,   237,   244,   243,   238,
     256,   245,   260,   128,   246,    40,   257,   128,   247,   128,
     156,   313,   128,   258,    13,    14,   259,    15,    16,    41,
      18,    19,    20,   128,   128,   261,   262,    25,   263,   269,
     321,   264,   277,   265,   128,   260,    13,    14,   260,    15,
      16,    17,    18,    19,    20,   278,   281,    23,   290,    25,
     260,   292,   302,   303,   304,    49,   253,   310,    49,   311,
      40,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,    41,    26,   312,   128,    26,   268,
      62,   323,   324,   270,     9,   327,   113,   329,   114,   113,
      58,    63,   115,   116,    64,   115,   116,    91,   145,   284,
     285,   154,   240,   117,   118,   229,   155,   118,   182,   276,
     288,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,   317,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,   229,     0,
     229,   308,     0,     0,     0,     0,    42,   229,     0,     0,
       0,    50,     0,   322,     0,     0,     0,     0,     0,     0,
       0,   229,    42,     0,    42,     0,    42,   229,     0,   229,
      13,    14,     0,    15,    16,   229,    18,    19,    20,   229,
       0,   229,     0,    25,     0,     0,     0,     0,     0,     0,
       0,   229,    42,    98,     0,     0,   229,     0,     0,   229,
       0,     0,     0,     0,     0,    13,    14,   229,    15,    16,
      17,    18,    19,    20,    94,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,    98,     0,   229,     0,
       0,     0,     0,     0,   229,   229,     0,    98,     0,     0,
     229,    98,     0,   229,    98,     0,     0,     0,     0,    94,
       0,     0,     0,   229,     0,   229,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,    98,    26,    27,     0,     0,     0,     0,     0,
     184,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   250,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,     0,     0,   216,   254,
     177,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   172,   173,   174,   175,   176,     0,
       0,     0,     0,   216,   266,   213,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,     0,     0,   216,   271,
     287,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   172,   173,   174,   175,   176,     0,
       0,     0,     0,   216,   274,   301,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,   192,     0,   216,   279,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   172,   173,   174,   175,   176,     0,
       0,   299,     0,   216,   280,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,   300,     0,   216,   282,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   164,   165,   166,   167,   168,
     169,   170,   171,     0,   172,   173,   174,   175,   176,     0,
       0,   328,     0,   216,   286,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,     0,     0,   216,   289,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   291,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   298,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   315,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   318,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   320,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   325,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   326,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   330,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   332,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,   216,    26,
      27,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,     0,     0,    28,
      57,     0,     0,     0,     0,    13,    14,    29,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,    27,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,    28,    93,     0,     0,     0,     0,     0,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,     0,     0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      12,    30,    30,    39,    30,    17,    50,    51,    82,    83,
      84,   109,    86,    48,    12,    12,    28,    32,    30,    21,
      32,    82,    83,    84,    18,    86,   198,   199,   102,    21,
      28,    28,    37,     0,    32,    32,    21,   295,    43,    41,
     114,   102,   116,    58,     5,    39,    58,    59,    21,    41,
     308,    92,   113,   114,   214,   116,   216,   131,    21,    44,
      58,    58,   103,    21,    37,   282,   107,    44,    45,   110,
     131,    44,   244,   147,    37,    37,    12,   237,    43,    37,
      92,   298,    47,   243,    46,   245,   147,   161,    44,    45,
     134,   103,    28,   128,    30,   107,    32,   257,   110,    47,
     161,    44,    45,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    43,   215,    44,    45,
      47,    37,    58,    59,   198,   199,   138,    82,    83,    84,
      46,    86,     5,    20,   146,    54,    55,   198,   199,    12,
      13,   215,    15,    37,   304,    12,    13,   102,    15,    43,
     310,    20,    46,    47,   215,    40,    92,    47,   113,   114,
      45,   116,    43,    20,   238,    40,    47,   103,   242,   329,
     244,   107,    46,   247,   110,    47,   131,   238,    44,    47,
      21,   242,    47,   244,   258,   259,   247,    47,    47,    37,
      46,    41,   147,   222,   222,   269,   222,   258,   259,    21,
      43,    38,   138,    82,    83,    84,   161,    86,   269,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   223,   102,    37,    45,    47,    18,    18,    19,
      43,    47,    47,    46,    47,   114,    47,   116,   312,    12,
      30,    47,    32,   198,   199,    47,    36,    37,    41,    38,
     251,   312,   131,    12,   255,    28,    39,    47,    48,    32,
     215,    38,    44,    38,    38,    21,   267,    47,   147,    28,
      46,   272,    37,    32,   275,    39,    39,    37,    39,    41,
      46,    39,   283,   238,    38,    58,    39,   242,    45,   244,
     113,   303,   247,    37,     3,     4,    37,     6,     7,    58,
       9,    10,    11,   258,   259,    40,    44,    16,    44,    41,
     311,    44,    38,    47,   269,   316,     3,     4,   319,     6,
       7,     8,     9,    10,    11,    38,    51,    14,    38,    16,
     331,    46,    52,    37,    39,    47,   215,    39,    47,    39,
     113,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   113,    19,    37,   312,    19,   238,
      47,    47,    38,   242,     5,    40,    30,    39,    32,    30,
      28,    30,    36,    37,    30,    36,    37,    51,   105,   258,
     259,   112,   185,    47,    48,   181,    47,    48,   138,   247,
     269,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   308,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   214,    -1,
     216,   298,    -1,    -1,    -1,    -1,    12,   223,    -1,    -1,
      -1,    17,    -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   237,    28,    -1,    30,    -1,    32,   243,    -1,   245,
       3,     4,    -1,     6,     7,   251,     9,    10,    11,   255,
      -1,   257,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    58,    59,    -1,    -1,   272,    -1,    -1,   275,
      -1,    -1,    -1,    -1,    -1,     3,     4,   283,     6,     7,
       8,     9,    10,    11,    47,    -1,    -1,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,   304,    -1,
      -1,    -1,    -1,    -1,   310,   311,    -1,   103,    -1,    -1,
     316,   107,    -1,   319,   110,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,   329,    -1,   331,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,   138,    19,    20,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,    40,
      42,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    39,    40,    42,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,    40,
      42,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    39,    40,    42,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    38,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      56,    57,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    39,    19,
      20,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,     3,     4,    47,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    65,    66,    67,    68,     0,    67,
       5,    47,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    39,    47,
      69,    70,    71,    72,    78,    80,    85,    86,    87,    92,
      94,    95,   107,   108,   109,   110,   114,   115,   116,    47,
     107,   109,    20,    20,    47,    20,    46,    40,    71,    37,
      43,    46,    47,    78,    80,    86,    87,   110,    40,    72,
      44,    47,    47,    43,    47,    84,    88,    90,    47,    47,
      75,    76,    21,    21,    41,   117,    21,   117,    47,    84,
      89,    89,    37,    40,    47,    81,    82,    83,   107,   108,
     109,    46,    21,    37,    44,    45,    21,    37,    44,    21,
      37,    44,    45,    30,    32,    36,    37,    47,    48,    94,
      95,    96,    97,    98,   105,   106,   114,   115,   116,   105,
     105,    41,   105,    44,    45,    44,    81,    38,    45,    47,
      47,    47,   105,    81,    47,    90,    18,    39,   111,    81,
      18,    77,    81,    47,    76,    47,   106,   115,   116,   105,
     105,    37,    47,    47,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    32,    33,    34,    35,    42,   105,    84,
      38,    39,    83,    38,   107,   109,   105,   113,    44,    38,
      47,    38,    38,    77,    99,   100,   101,   105,    37,    37,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,    42,    39,    17,    39,    47,    50,    53,
      56,    57,    69,    73,    74,    79,    91,    92,    93,    98,
     102,   103,   104,   107,   108,   109,   118,    39,    41,   112,
     112,    40,    45,    39,    37,    39,    38,    45,    99,    99,
      40,    73,    77,   105,    40,    73,    46,    39,    37,    37,
      74,    40,    44,    44,    44,    47,    40,    73,   105,    41,
     105,    40,    73,    99,    40,    73,   101,    38,    38,    40,
      40,    51,    40,    73,   105,   105,    40,    42,   105,    40,
      38,    40,    46,    54,    55,   119,   120,   122,    40,    38,
      38,    42,    52,    37,    39,   120,   122,   123,   119,   122,
      39,    39,    37,   109,   121,    40,    73,   123,    40,    73,
      40,    74,   105,    47,    38,    40,    40,    40,    38,    39,
      40,    73,    40
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1988 "parse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 422 "parse.y"


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
