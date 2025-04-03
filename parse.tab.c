
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
     ASSIGNPLUS = 277,
     ASSIGNMINUS = 278,
     ASSIGNMULT = 279,
     ASSIGNMOD = 280,
     ASSIGNDIV = 281,
     INC = 282,
     DEC = 283,
     EQ = 284,
     NEQ = 285,
     LT = 286,
     GT = 287,
     LTE = 288,
     GTE = 289,
     AND = 290,
     OR = 291,
     NOT = 292,
     PLUS = 293,
     MINUS = 294,
     MULTIPLY = 295,
     DIVIDE = 296,
     MOD = 297,
     STRING_LITERAL = 298,
     LPAREN = 299,
     RPAREN = 300,
     LBRACE = 301,
     RBRACE = 302,
     LBRACKET = 303,
     RBRACKET = 304,
     ARRAYBRACKETS = 305,
     SEMICOLON = 306,
     COMMA = 307,
     DOT = 308,
     COLON = 309,
     IDENT = 310,
     NUM = 311,
     ERR = 312,
     SYSTEM = 313,
     OUT = 314,
     PRINTLN = 315,
     TRY = 316,
     CATCH = 317,
     FINALLY = 318,
     IF = 319,
     WHILE = 320,
     FOR = 321,
     SWITCH = 322,
     CASE = 323,
     DEFAULT = 324,
     ELSE = 325,
     BREAK = 326,
     UMINUS = 327
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
#line 201 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 213 "parse.tab.c"

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
#define YYLAST   2409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  215
/* YYNRULES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
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
     213,   215,   217,   219,   221,   223,   225,   228,   231,   235,
     239,   243,   245,   249,   251,   253,   255,   258,   261,   264,
     266,   268,   270,   272,   274,   276,   279,   282,   286,   289,
     293,   296,   300,   309,   312,   315,   319,   325,   331,   336,
     338,   340,   341,   343,   345,   349,   351,   353,   360,   366,
     374,   382,   389,   395,   407,   418,   428,   430,   432,   433,
     435,   436,   446,   456,   466,   477,   488,   499,   508,   517,
     526,   535,   536,   539,   545,   546,   549,   550,   554,   556,
     559,   562,   566,   570,   574,   578,   582,   586,   590,   594,
     598,   602,   606,   610,   614,   617,   619,   622,   626,   628,
     631,   634,   637,   640,   643,   646,   649,   652,   654,   656,
     659,   662,   665,   668,   670,   672,   674,   676,   678,   680,
     682,   684,   686,   688,   690,   693,   696,   698,   701,   706,
     710,   714,   718,   722,   727,   729,   733,   736,   739,   742,
     745,   747,   751,   756,   763,   769,   775,   780,   782,   785,
     793,   800,   803,   808,   812,   813
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      74,     0,    -1,    75,    -1,    76,    -1,    75,    76,    -1,
      77,     5,    55,    46,    79,    47,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    80,    -1,    81,    -1,    80,    81,    -1,   102,
      -1,    89,    -1,    78,    89,    -1,    87,    -1,    78,    87,
      -1,    46,    47,    -1,    46,    80,    47,    -1,    82,    83,
      -1,    83,    -1,   102,    -1,   101,    -1,    46,    47,    -1,
      46,    82,    47,    -1,    84,    52,    85,    -1,    85,    -1,
      55,    21,    86,    -1,    18,    55,    44,   109,    45,    -1,
      55,    44,    90,    45,    46,    88,    47,    -1,    -1,    82,
      -1,   126,    55,    44,    90,    45,    46,    82,    47,    -1,
     127,    55,    44,    90,    45,    46,    82,    47,    -1,    14,
      55,    44,    90,    45,    46,    82,    47,    -1,   128,    55,
      44,    90,    45,    46,    82,    47,    -1,   126,    55,    44,
      90,    45,    46,    47,    -1,   127,    55,    44,    90,    45,
      46,    47,    -1,    14,    55,    44,    90,    45,    46,    47,
      -1,   128,    55,    44,    90,    45,    46,    47,    -1,    -1,
      91,    -1,    92,    -1,    91,    52,    92,    -1,   126,    55,
      -1,   127,    55,    -1,   128,    55,    -1,    55,    21,   124,
      -1,   133,    95,   124,    -1,   134,    95,   124,    -1,   135,
      95,   124,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,   128,    84,    -1,   126,    98,
      -1,     8,   128,    99,    -1,     8,   126,    99,    -1,    98,
      52,   100,    -1,   100,    -1,    99,    52,    93,    -1,    93,
      -1,    55,    -1,    93,    -1,   103,    51,    -1,   108,    51,
      -1,   123,    51,    -1,   137,    -1,   112,    -1,   113,    -1,
     114,    -1,   117,    -1,   118,    -1,    94,    51,    -1,   129,
      51,    -1,    78,   129,    51,    -1,    96,    51,    -1,    78,
      96,    51,    -1,    97,    51,    -1,    78,    97,    51,    -1,
      58,    53,    59,    53,    60,    44,   124,    45,    -1,    19,
      53,    -1,    55,    53,    -1,   105,    55,    53,    -1,   104,
      55,    44,   109,    45,    -1,   105,    55,    44,   109,    45,
      -1,    55,    44,   109,    45,    -1,   106,    -1,   107,    -1,
      -1,   110,    -1,   111,    -1,   110,    52,   111,    -1,   124,
      -1,    86,    -1,    64,    44,   124,    45,    46,    47,    -1,
      64,    44,   124,    45,   101,    -1,    64,    44,   124,    45,
      46,    82,    47,    -1,    65,    44,   124,    45,    46,    82,
      47,    -1,    65,    44,   124,    45,    46,    47,    -1,    65,
      44,   124,    45,   101,    -1,    66,    44,   115,    51,   124,
      51,   116,    45,    46,    82,    47,    -1,    66,    44,   115,
      51,   124,    51,   116,    45,    46,    47,    -1,    66,    44,
     115,    51,   124,    51,   116,    45,   101,    -1,    93,    -1,
      96,    -1,    -1,    93,    -1,    -1,    66,    44,   126,    55,
      54,    55,    45,    46,    47,    -1,    66,    44,   128,    55,
      54,    55,    45,    46,    47,    -1,    66,    44,   127,    55,
      54,    55,    45,    46,    47,    -1,    66,    44,   126,    55,
      54,    55,    45,    46,    82,    47,    -1,    66,    44,   128,
      55,    54,    55,    45,    46,    82,    47,    -1,    66,    44,
     127,    55,    54,    55,    45,    46,    82,    47,    -1,    66,
      44,   126,    55,    54,    55,    45,   101,    -1,    66,    44,
     128,    55,    54,    55,    45,   101,    -1,    66,    44,   127,
      55,    54,    55,    45,   101,    -1,    67,    44,   124,    45,
      46,   119,   122,    47,    -1,    -1,   119,   120,    -1,    68,
     124,    54,    82,   121,    -1,    -1,    71,    51,    -1,    -1,
      69,    54,    82,    -1,    17,    -1,    17,   124,    -1,    17,
      86,    -1,   124,    38,   125,    -1,   124,    39,   125,    -1,
     124,    40,   125,    -1,   124,    41,   125,    -1,   124,    42,
     125,    -1,   124,    29,   125,    -1,   124,    30,   125,    -1,
     124,    31,   125,    -1,   124,    32,   125,    -1,   124,    33,
     125,    -1,   124,    34,   125,    -1,   124,    35,   125,    -1,
     124,    36,   125,    -1,    39,   124,    -1,   125,    -1,    37,
     125,    -1,    44,   124,    45,    -1,   134,    -1,   134,    27,
      -1,    27,   134,    -1,   134,    28,    -1,    28,   134,    -1,
     135,    27,    -1,   135,    28,    -1,    27,   135,    -1,    28,
     135,    -1,   135,    -1,   133,    -1,    27,   133,    -1,    28,
     133,    -1,   133,    27,    -1,   133,    28,    -1,   108,    -1,
      56,    -1,    43,    -1,     9,    -1,     7,    -1,     3,    -1,
       4,    -1,     6,    -1,    10,    -1,    11,    -1,    16,    -1,
     126,    50,    -1,    55,    50,    -1,    55,    -1,   127,    55,
      -1,   127,    55,    21,   130,    -1,    18,   128,   131,    -1,
      18,   126,   131,    -1,    46,   132,    47,    -1,    48,   124,
      49,    -1,   131,    48,   124,    49,    -1,   124,    -1,   132,
      52,   124,    -1,   134,   136,    -1,   135,   136,    -1,   105,
      55,    -1,   104,    55,    -1,    55,    -1,    48,   124,    49,
      -1,   136,    48,   124,    49,    -1,    61,    46,    82,    47,
     138,   142,    -1,    61,    46,    82,    47,   141,    -1,    61,
      46,    47,   138,   142,    -1,    61,    46,    47,   141,    -1,
     139,    -1,   138,   139,    -1,    62,    44,   140,    45,    46,
      82,    47,    -1,    62,    44,   140,    45,    46,    47,    -1,
     128,    55,    -1,    63,    46,    82,    47,    -1,    63,    46,
      47,    -1,    -1,   141,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    52,    52,    56,    60,    61,    62,    62,
      66,    67,    68,    69,    70,    71,    72,    75,    77,    81,
      82,    86,    87,    88,    89,    90,    91,    92,    96,    97,
     101,   102,   103,   104,   108,   109,   113,   117,   121,   124,
     126,   131,   132,   133,   134,   135,   136,   137,   138,   141,
     143,   147,   147,   151,   152,   153,   157,   161,   162,   163,
     167,   167,   167,   167,   167,   167,   171,   172,   177,   178,
     186,   187,   191,   192,   196,   196,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   212,   213,   214,   215,   216,
     217,   218,   222,   227,   232,   233,   237,   238,   242,   246,
     247,   251,   253,   257,   257,   261,   262,   268,   269,   272,
     278,   279,   280,   284,   285,   286,   290,   291,   292,   296,
     297,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     314,   317,   319,   323,   326,   328,   331,   333,   362,   363,
     364,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   410,   410,   410,   410,
     410,   410,   410,   410,   414,   415,   419,   425,   426,   430,
     431,   432,   436,   437,   441,   442,   446,   447,   451,   452,
     456,   460,   461,   467,   468,   469,   470,   474,   475,   479,
     480,   484,   488,   489,   492,   494
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
  "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNMULT", "ASSIGNMOD", "ASSIGNDIV",
  "INC", "DEC", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "AND", "OR", "NOT",
  "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MOD", "STRING_LITERAL", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "ARRAYBRACKETS",
  "SEMICOLON", "COMMA", "DOT", "COLON", "IDENT", "NUM", "ERR", "SYSTEM",
  "OUT", "PRINTLN", "TRY", "CATCH", "FINALLY", "IF", "WHILE", "FOR",
  "SWITCH", "CASE", "DEFAULT", "ELSE", "BREAK", "UMINUS", "$accept",
  "program", "class_declaration_list", "class_declaration", "modificator",
  "object_modificators", "class_body", "core_body_sequence", "core_body",
  "block_body_sequence", "block_body", "instanciation_list",
  "instanciation", "creation_object", "constructor_declaration",
  "constructor_body", "method_declaration", "params", "param_list",
  "param_def", "assignment", "assignment_statement", "assign_statement",
  "variables_declaration", "constantes_declaration", "variables_init",
  "constantes_init", "variable_init", "block_statement", "statement",
  "print_statement", "method_prefix", "sufix_methode_list",
  "qualified_method_call", "simple_method_call", "method_call", "args",
  "arg_list", "arg_type", "if_statement", "while_statement",
  "for_statement", "for_init", "for_update", "foreach_statement",
  "switch_statement", "case_clauses", "case_clause", "break_opt",
  "default_clause_opt", "return_statement", "expression",
  "simple_expression", "premitive_type", "array_type", "type_abstract",
  "array_declaration", "array_initialization", "array_dimensions",
  "array_elements", "array_access", "qualified_access", "simple_access",
  "array_indices", "exception_statement", "catch_clauses", "catch_clause",
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    77,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    85,    86,    87,    88,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     102,   102,   103,   104,   105,   105,   106,   106,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     113,   113,   113,   114,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   119,   119,   120,   121,   121,   122,   122,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   129,   129,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   141,   141,   142,   142
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
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       3,     1,     3,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     3,
       2,     3,     8,     2,     2,     3,     5,     5,     4,     1,
       1,     0,     1,     1,     3,     1,     1,     6,     5,     7,
       7,     6,     5,    11,    10,     9,     1,     1,     0,     1,
       0,     9,     9,     9,    10,    10,    10,     8,     8,     8,
       8,     0,     2,     5,     0,     2,     0,     3,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     2,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     4,     3,
       3,     3,     3,     4,     1,     3,     2,     2,     2,     2,
       1,     3,     4,     6,     5,     5,     4,     1,     2,     7,
       6,     2,     4,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   178,   179,   180,   177,     0,   176,   181,
     182,    10,    12,     0,    11,   183,     0,    16,     0,   200,
       0,     0,    18,    19,    24,    22,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,     0,    13,    15,     0,    14,    93,    26,     0,    49,
     185,    94,   186,    25,    23,     0,     0,     0,     5,    20,
      85,    88,    90,   199,   198,   184,    74,    75,    67,    71,
     187,     0,    66,    35,    86,    60,    61,    62,    63,    64,
      65,     0,     0,     0,   196,     0,   197,     0,    73,    69,
      68,    49,    27,   186,     0,    50,    51,     0,     0,     0,
      89,    91,    87,    95,     0,    49,     0,     0,    49,     0,
      49,     0,     0,     0,     0,     0,   175,     0,   200,   174,
       0,     0,    99,   100,   173,    57,   155,   168,   158,   167,
       0,    58,     0,    59,     0,     0,     0,     0,    53,    54,
      55,    56,     0,    74,    70,     0,     0,   188,     0,     0,
      36,     0,     0,    34,   200,   169,   160,   165,   170,   162,
     166,   156,   154,     0,   101,   199,   198,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,   172,   159,   161,   163,   164,   201,     0,    72,     0,
      39,    52,     0,     0,     0,   194,     0,     0,     0,     0,
     157,   106,     0,   102,   103,   105,   101,   101,   146,   147,
     148,   149,   150,   151,   152,   153,   141,   142,   143,   144,
     145,   202,     0,   138,     0,   200,     0,     0,     0,     0,
       0,     0,     0,    40,    29,     0,    31,    30,     0,     0,
      80,    81,    82,    83,    84,     0,     0,     0,     0,    79,
       0,     0,   190,   189,   191,     0,     0,   101,     0,    98,
       0,     0,     0,    47,     0,   140,   139,    32,     0,     0,
       0,     0,     0,   118,     0,    28,    38,    76,    77,    78,
     187,    45,     0,     0,     0,   195,    46,     0,     0,    48,
       0,   104,    96,    97,    43,    33,     0,     0,     0,     0,
       0,   186,   116,   117,     0,     0,     0,     0,     0,    41,
     192,     0,    42,    37,    44,     0,     0,     0,   214,   207,
     206,     0,     0,     0,     0,    74,     0,     0,     0,   193,
       0,     0,     0,   208,   215,   205,   214,   204,     0,     0,
     108,     0,     0,     0,   112,     0,     0,     0,     0,   131,
       0,     0,     0,   213,     0,   203,   107,     0,     0,     0,
     111,     0,   120,     0,     0,     0,   136,     0,   211,     0,
     212,   109,   110,   119,     0,     0,     0,     0,     0,     0,
     132,     0,    92,     0,     0,     0,   127,     0,   129,     0,
     128,     0,     0,   130,   210,     0,     0,   115,   121,     0,
     123,     0,   122,     0,     0,   137,   209,   114,     0,   124,
     126,   125,   134,   113,     0,   133,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   242,    31,    32,    33,   243,
     244,    82,    83,   211,    34,   245,    35,   104,   105,   106,
      77,    36,    91,    37,    38,    78,    99,    79,   246,   247,
     248,   130,   131,   132,   133,   249,   212,   213,   214,   250,
     251,   252,   314,   384,   253,   254,   376,   390,   425,   391,
     255,   215,   136,   256,   257,   258,    45,   157,   262,   206,
      46,    47,    48,    94,   259,   328,   329,   362,   344,   345
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -312
static const yytype_int16 yypact[] =
{
     262,  -312,  -312,  -312,    31,   158,  -312,    55,  -312,  -312,
      26,    38,  2038,  -312,  -312,  -312,  -312,    86,  -312,  -312,
    -312,    71,    84,    65,   138,  -312,    11,  -312,  1970,   124,
     139,   113,  2038,  -312,  -312,  -312,   103,   121,   125,  -312,
     109,   131,    66,   148,   156,   157,   247,   219,   219,  -312,
     165,   165,  -312,  -312,   174,  -312,  -312,  -312,  2020,   426,
    -312,  -312,   107,  -312,  -312,   172,   177,   186,  -312,  -312,
    -312,  -312,  -312,  -312,   182,  -312,    14,  -312,   173,  -312,
      18,    44,   195,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  2139,  2139,  2139,   228,  2139,   228,   245,  -312,   230,
     230,   426,  -312,   234,   240,   235,  -312,   134,   233,   248,
    -312,  -312,  -312,  -312,  2139,   426,   249,    39,   426,   271,
     426,   253,    -2,    -2,  2036,  2139,  -312,  2139,    27,  -312,
     254,   256,  -312,  -312,  -312,  2367,  -312,    79,   108,   111,
    2198,  2367,  2139,  2367,   165,   250,   246,   426,  -312,  -312,
    -312,  2367,   257,   245,  -312,    86,  2139,  -312,   268,   259,
    -312,   270,   295,  -312,   264,  -312,   274,   274,  -312,   274,
     274,  -312,  -312,  2282,   561,   275,    29,  2036,  2036,  2036,
    2036,  2036,  2036,  2036,  2036,  2036,  2036,  2036,  2036,  2036,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  2219,  -312,   279,
    1948,  -312,   280,   283,   283,  2367,   153,   288,   292,   291,
    -312,  -312,   298,   296,  -312,  2367,   561,   561,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,   730,   561,   752,   137,   293,   301,   305,   306,
     308,   309,   290,  1948,  -312,   307,  -312,  -312,   312,   314,
    -312,  -312,  -312,  -312,  -312,   315,   152,   302,   253,  -312,
     817,  2139,   319,   319,  -312,  2139,   839,   561,   904,  -312,
     561,   324,   325,  -312,   926,  -312,  2367,  -312,   991,   313,
    1013,  2139,  2139,   635,  2139,  -312,  -312,  -312,  -312,  -312,
     350,  -312,  1078,  2240,  2139,  2367,  -312,  1100,   335,  -312,
    1165,  -312,  -312,  -312,  -312,  -312,   328,   120,  1187,  2299,
    2316,    -8,  -312,  -312,   332,   154,   329,   331,  2333,  -312,
    -312,  2261,  -312,  -312,  -312,   327,   344,   343,   120,  -312,
    -312,   120,   448,  2042,  2139,   -20,   336,     9,   345,  -312,
     348,   339,  1252,  -312,  -312,  -312,   120,  -312,  1274,    27,
    -312,   354,   355,  1339,  -312,  2184,   357,   358,   373,  -312,
    2139,   376,   393,  -312,  1361,  -312,  -312,  1426,   275,    29,
    -312,  1448,   165,   394,   395,   396,   181,  2350,  -312,   398,
    -312,  -312,  -312,  -312,   404,  2055,  2068,  2085,  2139,   397,
    -312,   405,  -312,  1513,  2098,  1535,  -312,  1600,  -312,  1622,
    -312,  2167,  1948,  -312,  -312,  1687,  1709,  -312,  -312,  1774,
    -312,  1796,  -312,  1861,  1948,  1948,  -312,  -312,  1883,  -312,
    -312,  -312,   664,  -312,   409,  -312,  -312
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,  -312,   450,  -312,    -4,  -312,   428,   -17,   216,
     294,  -312,   342,  -115,   434,  -312,   436,   -15,  -312,   321,
     -45,  -312,   184,   -18,   -28,  -312,   418,   356,  -311,    20,
    -312,   -12,    -9,  -312,  -312,   366,  -206,  -312,   201,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   -48,   218,   163,   415,    -3,   -23,  -312,   273,  -312,
     -55,    74,   237,   -30,  -312,   144,  -295,  -312,  -281,   132
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -187
static const yytype_int16 yytable[] =
{
      40,   114,    66,    41,   160,    98,    98,    67,    30,    44,
     271,   272,    65,   114,    51,    69,    40,    26,    96,    41,
      40,   350,   354,    41,    30,    44,   330,    44,    30,    44,
     119,     8,    39,   343,   356,   114,   137,   137,   137,   117,
     137,    69,    60,   135,   140,   141,    40,   143,    39,    41,
     347,   343,    39,   164,    30,    44,   109,   155,   115,   137,
      10,   298,   118,   358,    56,   119,   151,   165,   168,   137,
     137,   174,   137,   217,   396,   398,   400,   172,    39,   173,
      61,    11,   113,   407,    12,   156,   145,   137,   120,    13,
      14,    52,    15,    16,   197,    18,    19,    20,   109,   198,
     152,   137,    25,   158,    53,   161,   190,   191,   205,    96,
      40,    40,   109,    41,    41,   109,    75,   109,   275,   137,
      54,    76,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   192,   193,    96,   194,   195,
      96,    49,    13,    14,   109,    15,    16,    17,    18,    19,
      20,    59,   204,    23,    70,    25,    92,    60,    55,    92,
      68,   137,   137,    -9,    73,   138,   138,   138,    59,   138,
       1,     2,    71,     3,    60,    42,    72,    61,   137,  -186,
      50,   174,   326,   327,    75,   276,    74,    60,   138,   148,
      61,    42,  -186,    42,    62,    42,   166,   169,   138,   138,
     264,   138,    75,    80,    75,   265,   137,   153,    84,   335,
     137,    81,   137,   293,    66,   137,   138,   295,   101,    67,
      97,    42,   107,   110,    65,   116,   137,   137,   111,   137,
     138,    93,    95,   309,   310,   113,   318,   112,   312,   137,
      85,    86,    87,    88,    89,    90,   321,   121,   138,   388,
     389,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   107,   313,   114,    92,    85,    86,
      87,    88,    89,    90,     1,     2,   142,     3,   107,   137,
     317,   107,   144,   107,    60,   146,   355,   147,   149,   159,
     138,   138,   200,    13,    14,   199,    15,    16,    17,    18,
      19,    20,   202,   150,   153,   137,    25,   138,   162,   175,
     107,   176,   377,   207,   208,   209,   119,    61,   203,   216,
     351,   351,    92,   352,   352,   232,   260,   383,   139,   139,
     139,   261,   139,   137,   266,   138,   267,   268,   361,   138,
     401,   138,   171,   269,   138,   103,   279,   280,   270,   281,
     282,   139,   283,   284,   286,   138,   138,   290,   138,   167,
     170,   139,   139,   287,   139,   288,   289,   294,   138,   302,
     303,   117,   306,   351,   351,   351,   352,   352,   352,   139,
     323,   325,   351,   334,   336,   352,   337,   340,   341,   342,
     357,   359,   360,   139,    49,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   138,   368,
     369,   139,   373,   374,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,    43,   375,    13,
      14,   378,    15,    16,   138,    18,    19,    20,   379,   385,
     386,   387,    25,    43,   393,    43,   315,    43,   274,   394,
     278,   402,   403,   139,   139,     9,    58,   134,   134,   134,
     426,   134,   138,   163,    63,   233,    64,    26,   201,   100,
     139,   301,   154,    43,   108,   346,   292,   263,   365,     0,
     134,   103,   297,     0,   300,     0,     0,     0,     0,     0,
     134,   134,     0,   134,   348,     0,   308,     0,   139,     0,
       0,     0,   139,   349,   139,     0,   236,   139,   134,   237,
       0,     0,   238,   239,   240,   241,   108,     0,   139,   139,
       0,   139,   134,     0,     0,     0,     0,     0,     0,     0,
     108,   139,     0,   108,     0,   108,     0,   285,     0,     0,
     134,     0,     0,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,     0,     0,   364,     0,
       0,     0,   108,     0,   367,     0,     0,     0,   285,   371,
       0,   139,   285,     0,     0,     0,     0,     0,     0,   159,
      26,     0,   134,   134,     0,     0,   285,     0,   122,   123,
       0,   285,     0,     0,   285,     0,     0,   139,   124,   134,
     125,     0,   285,     0,   126,   127,     0,     0,     0,   405,
       0,   409,     0,   411,     0,   413,   128,   129,   415,     0,
       0,     0,   418,     0,     0,   139,     0,   134,     0,     0,
     422,   134,     0,   134,     0,     0,   134,     0,    13,    14,
       0,    15,    16,     0,    18,    19,    20,   134,   134,     0,
     134,    25,     0,     0,     0,     0,     0,     0,   285,     0,
     134,   285,     0,     0,     0,   285,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,     0,     0,
     311,     0,     0,     0,     0,     0,     0,     0,   316,   285,
     134,     0,     0,   285,     0,   285,     0,   285,     0,   285,
     234,     0,   285,     0,     0,     0,   285,     0,     0,   235,
       0,     0,   236,     0,     0,   237,   134,     0,   238,   239,
     240,   241,     0,    13,    14,   424,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   233,     0,    26,
      27,     0,     0,     0,   134,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,     0,   234,   273,     0,     0,
       0,     0,     0,     0,     0,   235,     0,     0,   236,     0,
       0,   237,     0,     0,   238,   239,   240,   241,   234,   277,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,   237,     0,     0,   238,   239,   240,   241,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,     0,   234,   291,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,   237,     0,
       0,   238,   239,   240,   241,   234,   296,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,   236,     0,     0,
     237,     0,     0,   238,   239,   240,   241,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,     0,
     234,   299,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,   237,     0,     0,   238,   239,
     240,   241,   234,   304,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,   237,     0,     0,
     238,   239,   240,   241,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,     0,     0,     0,     0,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,     0,   234,   305,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,   237,     0,     0,   238,   239,   240,   241,   234,
     307,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,   237,     0,     0,   238,   239,   240,
     241,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   233,     0,    26,
      27,     0,     0,     0,   234,   319,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,   237,
       0,     0,   238,   239,   240,   241,   234,   322,     0,     0,
       0,     0,     0,     0,     0,   235,     0,     0,   236,     0,
       0,   237,     0,     0,   238,   239,   240,   241,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   233,     0,    26,    27,     0,     0,     0,     0,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
       0,   234,   324,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   236,     0,     0,   237,     0,     0,   238,
     239,   240,   241,   234,   331,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,   237,     0,
       0,   238,   239,   240,   241,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,     0,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,   234,   363,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,   237,     0,     0,   238,   239,   240,   241,
     234,   366,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,   237,     0,     0,   238,   239,
     240,   241,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,     0,     0,     0,   234,   370,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,   236,     0,     0,
     237,     0,     0,   238,   239,   240,   241,   234,   380,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,   237,     0,     0,   238,   239,   240,   241,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,     0,
       0,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,     0,   234,   381,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,   237,     0,     0,
     238,   239,   240,   241,   234,   382,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,   237,
       0,     0,   238,   239,   240,   241,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,     0,     0,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   233,     0,    26,    27,     0,     0,     0,   234,
     404,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,   237,     0,     0,   238,   239,   240,
     241,   234,   408,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   236,     0,     0,   237,     0,     0,   238,
     239,   240,   241,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   233,     0,    26,
      27,     0,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,     0,   234,   410,     0,     0,
       0,     0,     0,     0,     0,   235,     0,     0,   236,     0,
       0,   237,     0,     0,   238,   239,   240,   241,   234,   412,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,   237,     0,     0,   238,   239,   240,   241,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,     0,   234,   416,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,   237,     0,
       0,   238,   239,   240,   241,   234,   417,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,   236,     0,     0,
     237,     0,     0,   238,   239,   240,   241,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,     0,
     234,   419,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,   237,     0,     0,   238,   239,
     240,   241,   234,   420,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,   237,     0,     0,
     238,   239,   240,   241,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,     0,     0,     0,     0,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,     0,   234,   421,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,   237,     0,     0,   238,   239,   240,   241,   234,
     423,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,   237,     0,     0,   238,   239,   240,
     241,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,     0,     0,   234,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,   237,
       0,     0,   238,   239,   240,   241,    28,    57,     0,     0,
       0,     0,     0,    13,    14,    29,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,    26,    27,   233,
       0,    26,     0,   122,   123,     0,    28,   102,     0,     0,
       0,     0,   233,   124,    26,    29,     0,     0,     0,   126,
     127,     0,     0,     0,    28,   233,     0,    26,   353,     0,
       0,   128,   129,    29,     0,     0,     0,   349,     0,     0,
     236,   395,   233,   237,    26,     0,   238,   239,   240,   241,
     349,     0,     0,   236,   397,   233,   237,    26,     0,   238,
     239,   240,   241,   349,     0,     0,   236,     0,     0,   237,
       0,   399,   238,   239,   240,   241,     0,     0,     0,     0,
     349,     0,     0,   236,   406,     0,   237,     0,     0,   238,
     239,   240,   241,   349,     0,     0,   236,     0,    26,   237,
       0,     0,   238,   239,   240,   241,   122,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   124,     0,   125,     0,
       0,     0,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   177,   178,   179,   180,
     181,   182,   183,   184,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   177,   178,   179,   180,   181,   182,   183,
     184,   414,   185,   186,   187,   188,   189,   177,   178,   179,
     180,   181,   182,   183,   184,   372,   185,   186,   187,   188,
     189,     0,     0,     0,     0,     0,     0,   196,   177,   178,
     179,   180,   181,   182,   183,   184,     0,   185,   186,   187,
     188,   189,     0,     0,     0,     0,     0,     0,   231,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   185,   186,
     187,   188,   189,     0,     0,     0,     0,     0,     0,   320,
     177,   178,   179,   180,   181,   182,   183,   184,     0,   185,
     186,   187,   188,   189,     0,     0,     0,     0,     0,     0,
     339,   177,   178,   179,   180,   181,   182,   183,   184,     0,
     185,   186,   187,   188,   189,     0,     0,   210,   177,   178,
     179,   180,   181,   182,   183,   184,     0,   185,   186,   187,
     188,   189,     0,     0,   332,   177,   178,   179,   180,   181,
     182,   183,   184,     0,   185,   186,   187,   188,   189,     0,
       0,   333,   177,   178,   179,   180,   181,   182,   183,   184,
       0,   185,   186,   187,   188,   189,     0,     0,   338,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   185,   186,
     187,   188,   189,     0,     0,   392,   177,   178,   179,   180,
     181,   182,   183,   184,     0,   185,   186,   187,   188,   189
};

static const yytype_int16 yycheck[] =
{
      12,    21,    30,    12,   119,    50,    51,    30,    12,    12,
     216,   217,    30,    21,    17,    32,    28,    19,    48,    28,
      32,   332,   333,    32,    28,    28,   307,    30,    32,    32,
      21,     0,    12,   328,    54,    21,    91,    92,    93,    21,
      95,    58,    50,    91,    92,    93,    58,    95,    28,    58,
     331,   346,    32,    55,    58,    58,    59,    18,    44,   114,
       5,   267,    44,    54,    53,    21,   114,   122,   123,   124,
     125,    44,   127,    44,   385,   386,   387,   125,    58,   127,
      53,    55,    53,   394,    46,    46,   101,   142,    44,     3,
       4,    20,     6,     7,   142,     9,    10,    11,   101,   144,
     115,   156,    16,   118,    20,   120,    27,    28,   156,   139,
     122,   123,   115,   122,   123,   118,    50,   120,   233,   174,
      55,    55,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,    27,    28,   167,    27,    28,
     170,    55,     3,     4,   147,     6,     7,     8,     9,    10,
      11,    44,   155,    14,    51,    16,    48,    50,    20,    48,
      47,   216,   217,     5,    55,    91,    92,    93,    44,    95,
      12,    13,    51,    15,    50,    12,    51,    53,   233,    55,
      17,    44,    62,    63,    50,   233,    55,    50,   114,    55,
      53,    28,    55,    30,    55,    32,   122,   123,   124,   125,
      47,   127,    50,    55,    50,    52,   261,    55,    51,    55,
     265,    55,   267,   261,   242,   270,   142,   265,    44,   242,
      55,    58,    59,    51,   242,    52,   281,   282,    51,   284,
     156,    47,    48,   281,   282,    53,   284,    51,   283,   294,
      21,    22,    23,    24,    25,    26,   294,    52,   174,    68,
      69,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   101,   283,    21,    48,    21,    22,
      23,    24,    25,    26,    12,    13,    48,    15,   115,   334,
     283,   118,    52,   120,    50,    45,   334,    52,    55,    18,
     216,   217,    46,     3,     4,    45,     6,     7,     8,     9,
      10,    11,    45,    55,    55,   360,    16,   233,    55,    55,
     147,    55,   360,    45,    55,    45,    21,    53,   155,    44,
     332,   333,    48,   332,   333,    46,    46,   372,    91,    92,
      93,    48,    95,   388,    46,   261,    44,    46,   341,   265,
     388,   267,   124,    45,   270,    55,    53,    46,    52,    44,
      44,   114,    44,    44,    47,   281,   282,    55,   284,   122,
     123,   124,   125,    51,   127,    51,    51,    48,   294,    45,
      45,    21,    59,   385,   386,   387,   385,   386,   387,   142,
      45,    53,   394,    51,    55,   394,    55,    60,    44,    46,
      54,    46,    44,   156,    55,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   334,    55,
      55,   174,    55,    55,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,    12,    55,     3,
       4,    55,     6,     7,   360,     9,    10,    11,    45,    45,
      45,    45,    16,    28,    46,    30,   283,    32,   232,    45,
     234,    54,    47,   216,   217,     5,    28,    91,    92,    93,
      51,    95,   388,   121,    30,    17,    30,    19,   147,    51,
     233,   270,   116,    58,    59,   331,   260,   204,   346,    -1,
     114,    55,   266,    -1,   268,    -1,    -1,    -1,    -1,    -1,
     124,   125,    -1,   127,    46,    -1,   280,    -1,   261,    -1,
      -1,    -1,   265,    55,   267,    -1,    58,   270,   142,    61,
      -1,    -1,    64,    65,    66,    67,   101,    -1,   281,   282,
      -1,   284,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   294,    -1,   118,    -1,   120,    -1,   243,    -1,    -1,
     174,    -1,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,   342,    -1,
      -1,    -1,   147,    -1,   348,    -1,    -1,    -1,   274,   353,
      -1,   334,   278,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,   216,   217,    -1,    -1,   292,    -1,    27,    28,
      -1,   297,    -1,    -1,   300,    -1,    -1,   360,    37,   233,
      39,    -1,   308,    -1,    43,    44,    -1,    -1,    -1,   393,
      -1,   395,    -1,   397,    -1,   399,    55,    56,   402,    -1,
      -1,    -1,   406,    -1,    -1,   388,    -1,   261,    -1,    -1,
     414,   265,    -1,   267,    -1,    -1,   270,    -1,     3,     4,
      -1,     6,     7,    -1,     9,    10,    11,   281,   282,    -1,
     284,    16,    -1,    -1,    -1,    -1,    -1,    -1,   364,    -1,
     294,   367,    -1,    -1,    -1,   371,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,   405,
     334,    -1,    -1,   409,    -1,   411,    -1,   413,    -1,   415,
      46,    -1,   418,    -1,    -1,    -1,   422,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,   360,    -1,    64,    65,
      66,    67,    -1,     3,     4,    71,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,   388,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    65,    66,    67,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    67,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    65,    66,    67,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,
      65,    66,    67,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    61,    -1,    -1,    64,    65,    66,    67,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,
      -1,    64,    65,    66,    67,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      61,    -1,    -1,    64,    65,    66,    67,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,
      66,    67,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    61,    -1,    -1,
      64,    65,    66,    67,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    61,    -1,    -1,    64,    65,    66,    67,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    61,    -1,    -1,    64,    65,    66,
      67,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    65,    66,    67,    46,    47,    -1,    -1,
      -1,    -1,    -1,     3,     4,    55,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    19,    -1,    19,    20,    17,
      -1,    19,    -1,    27,    28,    -1,    46,    47,    -1,    -1,
      -1,    -1,    17,    37,    19,    55,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    46,    17,    -1,    19,    46,    -1,
      -1,    55,    56,    55,    -1,    -1,    -1,    55,    -1,    -1,
      58,    46,    17,    61,    19,    -1,    64,    65,    66,    67,
      55,    -1,    -1,    58,    46,    17,    61,    19,    -1,    64,
      65,    66,    67,    55,    -1,    -1,    58,    -1,    -1,    61,
      -1,    46,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    46,    -1,    61,    -1,    -1,    64,
      65,    66,    67,    55,    -1,    -1,    58,    -1,    19,    61,
      -1,    -1,    64,    65,    66,    67,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    54,    38,    39,    40,    41,    42,    29,    30,    31,
      32,    33,    34,    35,    36,    51,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    45,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    45,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    45,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    45,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    45,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    74,    75,    76,    77,     0,    76,
       5,    55,    46,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    46,    55,
      78,    79,    80,    81,    87,    89,    94,    96,    97,   102,
     104,   105,   126,   127,   128,   129,   133,   134,   135,    55,
     126,   128,    20,    20,    55,    20,    53,    47,    80,    44,
      50,    53,    55,    87,    89,    96,    97,   129,    47,    81,
      51,    51,    51,    55,    55,    50,    55,    93,    98,   100,
      55,    55,    84,    85,    51,    21,    22,    23,    24,    25,
      26,    95,    48,    95,   136,    95,   136,    55,    93,    99,
      99,    44,    47,    55,    90,    91,    92,   126,   127,   128,
      51,    51,    51,    53,    21,    44,    52,    21,    44,    21,
      44,    52,    27,    28,    37,    39,    43,    44,    55,    56,
     104,   105,   106,   107,   108,   124,   125,   133,   134,   135,
     124,   124,    48,   124,    52,    90,    45,    52,    55,    55,
      55,   124,    90,    55,   100,    18,    46,   130,    90,    18,
      86,    90,    55,    85,    55,   133,   134,   135,   133,   134,
     135,   125,   124,   124,    44,    55,    55,    29,    30,    31,
      32,    33,    34,    35,    36,    38,    39,    40,    41,    42,
      27,    28,    27,    28,    27,    28,    49,   124,    93,    45,
      46,    92,    45,   126,   128,   124,   132,    45,    55,    45,
      45,    86,   109,   110,   111,   124,    44,    44,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,    49,    46,    17,    46,    55,    58,    61,    64,    65,
      66,    67,    78,    82,    83,    88,   101,   102,   103,   108,
     112,   113,   114,   117,   118,   123,   126,   127,   128,   137,
      46,    48,   131,   131,    47,    52,    46,    44,    46,    45,
      52,   109,   109,    47,    82,    86,   124,    47,    82,    53,
      46,    44,    44,    44,    44,    83,    47,    51,    51,    51,
      55,    47,    82,   124,    48,   124,    47,    82,   109,    47,
      82,   111,    45,    45,    47,    47,    59,    47,    82,   124,
     124,    55,    93,    96,   115,   126,   127,   128,   124,    47,
      49,   124,    47,    45,    47,    53,    62,    63,   138,   139,
     141,    47,    45,    45,    51,    55,    55,    55,    45,    49,
      60,    44,    46,   139,   141,   142,   138,   141,    46,    55,
     101,   104,   105,    46,   101,   124,    54,    54,    54,    46,
      44,   128,   140,    47,    82,   142,    47,    82,    55,    55,
      47,    82,    51,    55,    55,    55,   119,   124,    55,    45,
      47,    47,    47,    93,   116,    45,    45,    45,    68,    69,
     120,   122,    45,    46,    45,    46,   101,    46,   101,    46,
     101,   124,    54,    47,    47,    82,    46,   101,    47,    82,
      47,    82,    47,    82,    54,    82,    47,    47,    82,    47,
      47,    47,    82,    47,    71,   121,    51
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
#line 2214 "parse.tab.c"
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
#line 497 "parse.y"


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
