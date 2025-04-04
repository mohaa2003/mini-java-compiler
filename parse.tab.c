
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
     PRINT = 316,
     TRY = 317,
     CATCH = 318,
     FINALLY = 319,
     IF = 320,
     WHILE = 321,
     FOR = 322,
     SWITCH = 323,
     CASE = 324,
     DEFAULT = 325,
     ELSE = 326,
     BREAK = 327,
     UMINUS = 328
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
#line 202 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "parse.tab.c"

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
#define YYLAST   2530

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNRULES -- Number of states.  */
#define YYNSTATES  433

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   328

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
      65,    66,    67,    68,    69,    70,    71,    72,    73
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
     293,   296,   300,   309,   318,   326,   334,   337,   340,   344,
     350,   356,   361,   363,   365,   366,   368,   370,   374,   376,
     378,   385,   391,   399,   407,   414,   420,   432,   443,   453,
     455,   457,   458,   460,   461,   471,   481,   491,   502,   513,
     524,   533,   542,   551,   560,   561,   564,   570,   571,   574,
     575,   579,   581,   584,   587,   591,   595,   599,   603,   607,
     611,   615,   619,   623,   627,   631,   635,   639,   642,   644,
     647,   651,   653,   656,   659,   662,   665,   668,   671,   674,
     677,   679,   681,   684,   687,   690,   693,   695,   697,   699,
     701,   703,   705,   707,   709,   711,   713,   715,   718,   721,
     723,   726,   731,   735,   739,   743,   747,   752,   754,   758,
     761,   764,   767,   770,   772,   776,   781,   788,   794,   800,
     805,   807,   810,   818,   825,   828,   833,   837,   838
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      75,     0,    -1,    76,    -1,    77,    -1,    76,    77,    -1,
      78,     5,    55,    46,    80,    47,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    81,    -1,    82,    -1,    81,    82,    -1,   103,
      -1,    90,    -1,    79,    90,    -1,    88,    -1,    79,    88,
      -1,    46,    47,    -1,    46,    81,    47,    -1,    83,    84,
      -1,    84,    -1,   103,    -1,   102,    -1,    46,    47,    -1,
      46,    83,    47,    -1,    85,    52,    86,    -1,    86,    -1,
      55,    21,    87,    -1,    18,    55,    44,   110,    45,    -1,
      55,    44,    91,    45,    46,    89,    47,    -1,    -1,    83,
      -1,   127,    55,    44,    91,    45,    46,    83,    47,    -1,
     128,    55,    44,    91,    45,    46,    83,    47,    -1,    14,
      55,    44,    91,    45,    46,    83,    47,    -1,   129,    55,
      44,    91,    45,    46,    83,    47,    -1,   127,    55,    44,
      91,    45,    46,    47,    -1,   128,    55,    44,    91,    45,
      46,    47,    -1,    14,    55,    44,    91,    45,    46,    47,
      -1,   129,    55,    44,    91,    45,    46,    47,    -1,    -1,
      92,    -1,    93,    -1,    92,    52,    93,    -1,   127,    55,
      -1,   128,    55,    -1,   129,    55,    -1,    55,    21,   125,
      -1,   134,    96,   125,    -1,   135,    96,   125,    -1,   136,
      96,   125,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,   129,    85,    -1,   127,    99,
      -1,     8,   129,   100,    -1,     8,   127,   100,    -1,    99,
      52,   101,    -1,   101,    -1,   100,    52,    94,    -1,    94,
      -1,    55,    -1,    94,    -1,   104,    51,    -1,   109,    51,
      -1,   124,    51,    -1,   138,    -1,   113,    -1,   114,    -1,
     115,    -1,   118,    -1,   119,    -1,    95,    51,    -1,   130,
      51,    -1,    79,   130,    51,    -1,    97,    51,    -1,    79,
      97,    51,    -1,    98,    51,    -1,    79,    98,    51,    -1,
      58,    53,    59,    53,    60,    44,   125,    45,    -1,    58,
      53,    59,    53,    61,    44,   125,    45,    -1,    58,    53,
      59,    53,    60,    44,    45,    -1,    58,    53,    59,    53,
      61,    44,    45,    -1,    19,    53,    -1,    55,    53,    -1,
     106,    55,    53,    -1,   105,    55,    44,   110,    45,    -1,
     106,    55,    44,   110,    45,    -1,    55,    44,   110,    45,
      -1,   107,    -1,   108,    -1,    -1,   111,    -1,   112,    -1,
     111,    52,   112,    -1,   125,    -1,    87,    -1,    65,    44,
     125,    45,    46,    47,    -1,    65,    44,   125,    45,   102,
      -1,    65,    44,   125,    45,    46,    83,    47,    -1,    66,
      44,   125,    45,    46,    83,    47,    -1,    66,    44,   125,
      45,    46,    47,    -1,    66,    44,   125,    45,   102,    -1,
      67,    44,   116,    51,   125,    51,   117,    45,    46,    83,
      47,    -1,    67,    44,   116,    51,   125,    51,   117,    45,
      46,    47,    -1,    67,    44,   116,    51,   125,    51,   117,
      45,   102,    -1,    94,    -1,    97,    -1,    -1,    94,    -1,
      -1,    67,    44,   127,    55,    54,    55,    45,    46,    47,
      -1,    67,    44,   129,    55,    54,    55,    45,    46,    47,
      -1,    67,    44,   128,    55,    54,    55,    45,    46,    47,
      -1,    67,    44,   127,    55,    54,    55,    45,    46,    83,
      47,    -1,    67,    44,   129,    55,    54,    55,    45,    46,
      83,    47,    -1,    67,    44,   128,    55,    54,    55,    45,
      46,    83,    47,    -1,    67,    44,   127,    55,    54,    55,
      45,   102,    -1,    67,    44,   129,    55,    54,    55,    45,
     102,    -1,    67,    44,   128,    55,    54,    55,    45,   102,
      -1,    68,    44,   125,    45,    46,   120,   123,    47,    -1,
      -1,   120,   121,    -1,    69,   125,    54,    83,   122,    -1,
      -1,    72,    51,    -1,    -1,    70,    54,    83,    -1,    17,
      -1,    17,   125,    -1,    17,    87,    -1,   125,    38,   126,
      -1,   125,    39,   126,    -1,   125,    40,   126,    -1,   125,
      41,   126,    -1,   125,    42,   126,    -1,   125,    29,   126,
      -1,   125,    30,   126,    -1,   125,    31,   126,    -1,   125,
      32,   126,    -1,   125,    33,   126,    -1,   125,    34,   126,
      -1,   125,    35,   126,    -1,   125,    36,   126,    -1,    39,
     125,    -1,   126,    -1,    37,   126,    -1,    44,   125,    45,
      -1,   135,    -1,   135,    27,    -1,    27,   135,    -1,   135,
      28,    -1,    28,   135,    -1,   136,    27,    -1,   136,    28,
      -1,    27,   136,    -1,    28,   136,    -1,   136,    -1,   134,
      -1,    27,   134,    -1,    28,   134,    -1,   134,    27,    -1,
     134,    28,    -1,   109,    -1,    56,    -1,    43,    -1,     9,
      -1,     7,    -1,     3,    -1,     4,    -1,     6,    -1,    10,
      -1,    11,    -1,    16,    -1,   127,    50,    -1,    55,    50,
      -1,    55,    -1,   128,    55,    -1,   128,    55,    21,   131,
      -1,    18,   129,   132,    -1,    18,   127,   132,    -1,    46,
     133,    47,    -1,    48,   125,    49,    -1,   132,    48,   125,
      49,    -1,   125,    -1,   133,    52,   125,    -1,   135,   137,
      -1,   136,   137,    -1,   106,    55,    -1,   105,    55,    -1,
      55,    -1,    48,   125,    49,    -1,   137,    48,   125,    49,
      -1,    62,    46,    83,    47,   139,   143,    -1,    62,    46,
      83,    47,   142,    -1,    62,    46,    47,   139,   143,    -1,
      62,    46,    47,   142,    -1,   140,    -1,   139,   140,    -1,
      63,    44,   141,    45,    46,    83,    47,    -1,    63,    44,
     141,    45,    46,    47,    -1,   129,    55,    -1,    64,    46,
      83,    47,    -1,    64,    46,    47,    -1,    -1,   142,    -1
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
     217,   218,   222,   223,   224,   225,   230,   235,   236,   240,
     241,   245,   249,   250,   254,   256,   260,   260,   264,   265,
     271,   272,   275,   281,   282,   283,   287,   288,   289,   293,
     294,   295,   299,   300,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   317,   320,   322,   326,   329,   331,   334,
     336,   365,   366,   367,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   413,
     413,   413,   413,   413,   413,   413,   413,   417,   418,   422,
     428,   429,   433,   434,   435,   439,   440,   444,   445,   449,
     450,   454,   455,   459,   463,   464,   470,   471,   472,   473,
     477,   478,   482,   483,   487,   491,   492,   495,   497
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
  "OUT", "PRINTLN", "PRINT", "TRY", "CATCH", "FINALLY", "IF", "WHILE",
  "FOR", "SWITCH", "CASE", "DEFAULT", "ELSE", "BREAK", "UMINUS", "$accept",
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
     325,   326,   327,   328
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    87,    88,    89,
      89,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   114,   114,   114,   115,   115,   115,   116,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   120,   120,   121,   122,   122,   123,
     123,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   129,
     130,   130,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   137,   137,   138,   138,   138,   138,
     139,   139,   140,   140,   141,   142,   142,   143,   143
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
       2,     3,     8,     8,     7,     7,     2,     2,     3,     5,
       5,     4,     1,     1,     0,     1,     1,     3,     1,     1,
       6,     5,     7,     7,     6,     5,    11,    10,     9,     1,
       1,     0,     1,     0,     9,     9,     9,    10,    10,    10,
       8,     8,     8,     8,     0,     2,     5,     0,     2,     0,
       3,     1,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     1,     2,
       3,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     4,     3,     3,     3,     3,     4,     1,     3,     2,
       2,     2,     2,     1,     3,     4,     6,     5,     5,     4,
       1,     2,     7,     6,     2,     4,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   181,   182,   183,   180,     0,   179,   184,
     185,    10,    12,     0,    11,   186,     0,    16,     0,   203,
       0,     0,    18,    19,    24,    22,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
       0,     0,    13,    15,     0,    14,    96,    26,     0,    49,
     188,    97,   189,    25,    23,     0,     0,     0,     5,    20,
      85,    88,    90,   202,   201,   187,    74,    75,    67,    71,
     190,     0,    66,    35,    86,    60,    61,    62,    63,    64,
      65,     0,     0,     0,   199,     0,   200,     0,    73,    69,
      68,    49,    27,   189,     0,    50,    51,     0,     0,     0,
      89,    91,    87,    98,     0,    49,     0,     0,    49,     0,
      49,     0,     0,     0,     0,     0,   178,     0,   203,   177,
       0,     0,   102,   103,   176,    57,   158,   171,   161,   170,
       0,    58,     0,    59,     0,     0,     0,     0,    53,    54,
      55,    56,     0,    74,    70,     0,     0,   191,     0,     0,
      36,     0,     0,    34,   203,   172,   163,   168,   173,   165,
     169,   159,   157,     0,   104,   202,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   162,   164,   166,   167,   204,     0,    72,     0,
      39,    52,     0,     0,     0,   197,     0,     0,     0,     0,
     160,   109,     0,   105,   106,   108,   104,   104,   149,   150,
     151,   152,   153,   154,   155,   156,   144,   145,   146,   147,
     148,   205,     0,   141,     0,   203,     0,     0,     0,     0,
       0,     0,     0,    40,    29,     0,    31,    30,     0,     0,
      80,    81,    82,    83,    84,     0,     0,     0,     0,    79,
       0,     0,   193,   192,   194,     0,     0,   104,     0,   101,
       0,     0,     0,    47,     0,   143,   142,    32,     0,     0,
       0,     0,     0,   121,     0,    28,    38,    76,    77,    78,
     190,    45,     0,     0,     0,   198,    46,     0,     0,    48,
       0,   107,    99,   100,    43,    33,     0,     0,     0,     0,
       0,   189,   119,   120,     0,     0,     0,     0,     0,    41,
     195,     0,    42,    37,    44,     0,     0,     0,   217,   210,
     209,     0,     0,     0,     0,    74,     0,     0,     0,   196,
       0,     0,     0,     0,   211,   218,   208,   217,   207,     0,
       0,   111,     0,     0,     0,   115,     0,     0,     0,     0,
     134,     0,     0,     0,     0,   216,     0,   206,   110,     0,
       0,     0,   114,     0,   123,     0,     0,     0,   139,    94,
       0,    95,     0,   214,     0,   215,   112,   113,   122,     0,
       0,     0,     0,     0,     0,   135,     0,    92,    93,     0,
       0,     0,   130,     0,   132,     0,   131,     0,     0,   133,
     213,     0,     0,   118,   124,     0,   126,     0,   125,     0,
       0,   140,   212,   117,     0,   127,   129,   128,   137,   116,
       0,   136,   138
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   242,    31,    32,    33,   243,
     244,    82,    83,   211,    34,   245,    35,   104,   105,   106,
      77,    36,    91,    37,    38,    78,    99,    79,   246,   247,
     248,   130,   131,   132,   133,   249,   212,   213,   214,   250,
     251,   252,   314,   389,   253,   254,   378,   395,   431,   396,
     255,   215,   136,   256,   257,   258,    45,   157,   262,   206,
     137,   138,   139,    94,   259,   328,   329,   364,   345,   346
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -308
static const yytype_int16 yypact[] =
{
      81,  -308,  -308,  -308,    52,   136,  -308,    12,  -308,  -308,
      22,    35,   680,  -308,  -308,  -308,  -308,   113,  -308,  -308,
    -308,    75,    87,    71,   153,  -308,    90,  -308,   702,    30,
     198,   142,   680,  -308,  -308,  -308,   140,   149,   159,  -308,
     164,   175,   108,   177,   178,   192,   202,   173,   173,  -308,
     194,   194,  -308,  -308,   207,  -308,  -308,  -308,  2115,   231,
    -308,  -308,    86,  -308,  -308,   201,   206,   208,  -308,  -308,
    -308,  -308,  -308,  -308,   210,  -308,    -8,  -308,   212,  -308,
      -6,     9,   215,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,   262,   262,   262,   221,   262,   221,   239,  -308,   219,
     219,   231,  -308,   222,   228,   223,  -308,   111,   224,   227,
    -308,  -308,  -308,  -308,   262,   231,   229,    -9,   231,   258,
     231,   232,    -5,    -5,   297,   262,  -308,   262,    25,  -308,
     237,   238,  -308,  -308,  -308,  2488,  -308,   118,    39,    44,
    2302,  2488,   262,  2488,   194,   253,   257,   231,  -308,  -308,
    -308,  2488,   263,   239,  -308,   113,   262,  -308,   264,   255,
    -308,   266,   256,  -308,   230,  -308,   272,   272,  -308,   272,
     272,  -308,  -308,  2386,  2217,   268,    26,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  2323,  -308,   273,
    2049,  -308,   275,   278,   278,  2488,   123,   282,   270,   283,
    -308,  -308,   287,   281,  -308,  2488,  2217,  2217,  -308,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,  -308,   806,  2217,   874,   112,   290,   289,   301,   302,
     305,   307,   174,  2049,  -308,   311,  -308,  -308,   309,   314,
    -308,  -308,  -308,  -308,  -308,   315,   189,   313,   232,  -308,
     897,   262,   321,   321,  -308,   262,   963,  2217,   986,  -308,
    2217,   326,   327,  -308,  1052,  -308,  2488,  -308,  1075,   317,
    1141,   262,   262,   512,   262,  -308,  -308,  -308,  -308,  -308,
     352,  -308,  1164,  2344,   262,  2488,  -308,  1230,   332,  -308,
    1253,  -308,  -308,  -308,  -308,  -308,   330,   -31,  1319,  2403,
    2420,     5,  -308,  -308,   328,   200,   329,   331,  2437,  -308,
    -308,  2365,  -308,  -308,  -308,    99,   341,   342,   -31,  -308,
    -308,   -31,   485,  2086,   262,     2,   343,     4,   355,  -308,
     354,   358,   349,  1342,  -308,  -308,  -308,   -31,  -308,  1408,
      25,  -308,   356,   359,  1431,  -308,  2288,   360,   362,   363,
    -308,  2220,  2243,   370,   365,  -308,  1497,  -308,  -308,  1520,
     268,    26,  -308,  1586,   194,   382,   384,   385,   117,  -308,
    2454,  -308,  2471,  -308,   386,  -308,  -308,  -308,  -308,   389,
    2119,  2147,  2161,   262,   381,  -308,   390,  -308,  -308,  1609,
    2175,  1675,  -308,  1698,  -308,  1764,  -308,  2271,  2049,  -308,
    -308,  1787,  1853,  -308,  -308,  1876,  -308,  1942,  -308,  1965,
    2049,  2049,  -308,  -308,  2031,  -308,  -308,  -308,   778,  -308,
     387,  -308,  -308
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -308,  -308,  -308,   436,  -308,    -4,  -308,   414,    -1,   160,
     312,  -308,   323,  -112,   415,  -308,   416,    24,  -308,   300,
     -47,  -308,   168,   -25,   -29,  -308,   410,   346,  -291,     7,
    -308,   -10,    31,  -308,  -308,   486,  -206,  -308,   193,  -308,
    -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,  -308,
    -308,    13,   271,    56,    32,    17,   -24,  -308,   260,  -308,
     -12,    70,   233,   -36,  -308,   135,  -307,  -308,  -280,   121
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -190
static const yytype_int16 yytable[] =
{
      46,    66,    40,    98,    98,    65,    67,   160,    30,   155,
     271,   272,    96,   114,    26,   117,    46,    10,    40,    39,
      46,   344,    40,   114,    30,   119,   114,   330,    30,    44,
     119,    69,   326,   327,    51,    39,   115,   156,   118,    39,
     344,   351,   355,    41,    43,    44,    46,    44,    40,    44,
     164,   348,     8,   120,    30,    60,   357,    69,   359,    41,
      43,   298,    43,    41,    43,    39,   192,   193,    42,   174,
     217,   194,   195,    50,    59,    44,   109,    11,    61,   113,
      60,    12,    47,    61,    42,  -189,    42,    92,    42,    41,
      43,   108,    92,     1,     2,    52,     3,   198,    47,   402,
     404,   406,    47,    96,   135,   140,   141,    53,   143,   413,
     165,   168,    40,    40,    42,   107,    13,    14,   109,    15,
      16,   275,    18,    19,    20,   145,    54,   151,    47,    25,
      59,    96,   109,   108,    96,   109,    60,   109,   172,   152,
     173,    -9,   158,    56,   161,   190,   191,   108,     1,     2,
     108,     3,   108,    41,    41,   197,   174,   107,    75,   340,
     341,    75,    60,    76,   109,    61,   148,  -189,    49,   205,
     264,   107,   204,    55,   107,   265,   107,    13,    14,   108,
      15,    16,    17,    18,    19,    20,   393,   394,    46,    68,
      25,    70,   166,   169,    85,    86,    87,    88,    89,    90,
      71,    13,    14,   107,    15,    16,    17,    18,    19,    20,
      72,   203,    23,    66,    25,    93,    95,    65,    67,    73,
      46,    92,    46,    85,    86,    87,    88,    89,    90,   103,
      74,    46,    80,    81,    13,    14,   312,    15,    16,    75,
      18,    19,    20,    84,   153,    48,   276,    25,    46,    97,
      75,   101,   110,    62,    46,   335,    46,   111,   313,   112,
     114,    48,    46,   113,   116,    48,    46,   121,    46,   142,
      47,   144,    60,   146,   293,   147,   159,   119,   295,   149,
      46,    26,   150,    61,   153,    46,   103,   162,    46,   122,
     123,    48,   175,   176,   309,   310,    46,   318,   199,   124,
     317,   125,    47,   200,    47,   126,   127,   321,   202,   207,
     208,   209,   216,    47,   267,   316,    26,   128,   129,   232,
      92,   260,   352,   352,   122,   123,   261,   388,   266,   268,
      47,    46,   269,   270,   124,   280,    47,    46,    47,   315,
     126,   127,    46,   279,    47,   281,   282,   356,    47,   283,
      47,   284,   128,   129,    46,   167,   170,    46,   286,   363,
     287,    46,    47,   353,   353,   288,   289,    47,   290,   294,
      47,   302,   303,   117,   380,   382,   306,   323,    47,   334,
     352,   352,   352,   325,   336,   342,   337,    46,   343,    46,
     352,    46,   274,    46,   278,   171,    46,   358,   361,    46,
      46,   360,   362,    46,    49,    46,   407,    46,    46,    46,
     384,   370,    46,    47,   371,   375,    46,   376,   377,    47,
     292,   353,   353,   353,    47,   383,   297,   390,   300,   391,
     392,   353,   399,    48,   400,   408,    47,   409,   432,    47,
     308,     9,    58,    47,   163,    63,    64,   201,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   100,   154,   301,   263,    48,   347,    48,   367,    47,
       0,    47,     0,    47,     0,    47,    48,     0,    47,     0,
       0,    47,    47,     0,     0,    47,     0,    47,     0,    47,
      47,    47,     0,    48,    47,     0,     0,     0,    47,    48,
       0,    48,   233,   366,    26,     0,     0,    48,     0,   369,
       0,    48,     0,    48,   373,    13,    14,     0,    15,    16,
       0,    18,    19,    20,     0,    48,     0,     0,    25,     0,
      48,   349,     0,    48,     0,     0,     0,     0,     0,     0,
     350,    48,     0,   236,     0,     0,     0,   237,     0,     0,
     238,   239,   240,   241,     0,   285,     0,     0,     0,   411,
       0,   415,     0,   417,     0,   419,     0,   311,   421,     0,
       0,     0,   424,     0,     0,     0,    48,   134,   134,   134,
     428,   134,    48,     0,     0,     0,   285,    48,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,     0,    48,
     134,     0,    48,     0,   285,     0,    48,     0,     0,   285,
     134,   134,   285,   134,     0,     0,     0,     0,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,   134,     0,
       0,     0,    48,     0,    48,     0,    48,     0,    48,     0,
       0,    48,   134,     0,    48,    48,     0,     0,    48,     0,
      48,     0,    48,    48,    48,     0,     0,    48,     0,     0,
     134,    48,     0,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,     0,     0,   285,     0,
       0,   285,     0,    13,    14,   285,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,   134,   134,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   134,
       0,    26,    27,   285,     0,     0,    28,   285,     0,   285,
       0,   285,     0,   285,     0,    29,   285,     0,     0,     0,
     285,     0,     0,     0,     0,     0,     0,   134,    28,    57,
       0,   134,     0,   134,     0,     0,   134,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   134,   134,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
     134,    24,    25,   233,   234,    26,    27,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,     0,
     237,     0,     0,   238,   239,   240,   241,   134,   134,     0,
     430,     0,   234,   273,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,     0,   237,     0,
       0,   238,   239,   240,   241,     0,     0,    13,    14,   134,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,     0,     0,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
     234,   277,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,     0,   237,     0,     0,   238,
     239,   240,   241,   234,   291,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,     0,   237,
       0,     0,   238,   239,   240,   241,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,   234,
     296,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,     0,   237,     0,     0,   238,   239,
     240,   241,   234,   299,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,     0,   237,     0,
       0,   238,   239,   240,   241,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,     0,     0,     0,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   233,     0,    26,    27,     0,     0,   234,   304,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,     0,   237,     0,     0,   238,   239,   240,
     241,   234,   305,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   236,     0,     0,     0,   237,     0,     0,
     238,   239,   240,   241,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,     0,     0,     0,     0,     0,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,   234,   307,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,     0,   237,     0,     0,   238,   239,   240,   241,
     234,   319,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,     0,   237,     0,     0,   238,
     239,   240,   241,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   233,     0,    26,
      27,     0,     0,     0,     0,     0,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,   234,   322,     0,     0,
       0,     0,     0,     0,     0,   235,     0,     0,   236,     0,
       0,     0,   237,     0,     0,   238,   239,   240,   241,   234,
     324,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,     0,   237,     0,     0,   238,   239,
     240,   241,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,   234,   331,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,   236,     0,     0,
       0,   237,     0,     0,   238,   239,   240,   241,   234,   365,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,     0,   237,     0,     0,   238,   239,   240,
     241,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,     0,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,     0,     0,   234,   368,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,     0,
     237,     0,     0,   238,   239,   240,   241,   234,   372,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,     0,   237,     0,     0,   238,   239,   240,   241,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   233,     0,    26,
      27,     0,     0,   234,   385,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,     0,   237,
       0,     0,   238,   239,   240,   241,   234,   386,     0,     0,
       0,     0,     0,     0,     0,   235,     0,     0,   236,     0,
       0,     0,   237,     0,     0,   238,   239,   240,   241,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,   234,   387,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,     0,   237,     0,
       0,   238,   239,   240,   241,   234,   410,     0,     0,     0,
       0,     0,     0,     0,   235,     0,     0,   236,     0,     0,
       0,   237,     0,     0,   238,   239,   240,   241,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   233,     0,    26,    27,     0,     0,     0,     0,
       0,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   233,     0,    26,    27,     0,
       0,   234,   414,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   236,     0,     0,     0,   237,     0,     0,
     238,   239,   240,   241,   234,   416,     0,     0,     0,     0,
       0,     0,     0,   235,     0,     0,   236,     0,     0,     0,
     237,     0,     0,   238,   239,   240,   241,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   233,     0,    26,    27,     0,     0,     0,     0,     0,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   233,     0,    26,    27,     0,     0,
     234,   418,     0,     0,     0,     0,     0,     0,     0,   235,
       0,     0,   236,     0,     0,     0,   237,     0,     0,   238,
     239,   240,   241,   234,   422,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,   236,     0,     0,     0,   237,
       0,     0,   238,   239,   240,   241,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     233,     0,    26,    27,     0,     0,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   233,     0,    26,    27,     0,     0,   234,
     423,     0,     0,     0,     0,     0,     0,     0,   235,     0,
       0,   236,     0,     0,     0,   237,     0,     0,   238,   239,
     240,   241,   234,   425,     0,     0,     0,     0,     0,     0,
       0,   235,     0,     0,   236,     0,     0,     0,   237,     0,
       0,   238,   239,   240,   241,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   233,
       0,    26,    27,     0,     0,     0,     0,     0,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   233,     0,    26,    27,     0,     0,   234,   426,
       0,     0,     0,     0,     0,     0,     0,   235,     0,     0,
     236,     0,     0,     0,   237,     0,     0,   238,   239,   240,
     241,   234,   427,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   236,     0,     0,     0,   237,     0,     0,
     238,   239,   240,   241,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   233,     0,
      26,    27,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   233,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,   234,   429,     0,
       0,     0,     0,     0,     0,     0,   235,     0,     0,   236,
       0,     0,     0,   237,     0,   234,   238,   239,   240,   241,
       0,     0,     0,   233,   235,    26,     0,   236,     0,     0,
       0,   237,     0,     0,   238,   239,   240,   241,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   354,     0,    26,    27,   233,     0,    26,     0,
       0,   350,     0,     0,   236,     0,     0,     0,   237,     0,
       0,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,    28,   102,     0,   233,   401,    26,     0,     0,     0,
      29,     0,     0,     0,   350,     0,     0,   236,   233,     0,
      26,   237,     0,     0,   238,   239,   240,   241,     0,     0,
       0,     0,   233,   403,    26,     0,     0,     0,     0,     0,
       0,     0,   350,     0,     0,   236,     0,   405,     0,   237,
       0,     0,   238,   239,   240,   241,   350,     0,     0,   236,
       0,   412,     0,   237,     0,     0,   238,   239,   240,   241,
     350,     0,     0,   236,     0,   159,    26,   237,     0,    26,
     238,   239,   240,   241,   122,   123,     0,   122,   123,     0,
       0,     0,     0,     0,   124,     0,   125,   124,     0,   125,
     126,   127,    26,   126,   127,   379,     0,     0,     0,     0,
     122,   123,   128,   129,     0,   128,   129,     0,     0,     0,
     124,     0,   125,     0,     0,     0,   126,   127,   381,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     177,   178,   179,   180,   181,   182,   183,   184,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   177,   178,   179,
     180,   181,   182,   183,   184,   420,   185,   186,   187,   188,
     189,   177,   178,   179,   180,   181,   182,   183,   184,   374,
     185,   186,   187,   188,   189,     0,     0,     0,     0,     0,
       0,   196,   177,   178,   179,   180,   181,   182,   183,   184,
       0,   185,   186,   187,   188,   189,     0,     0,     0,     0,
       0,     0,   231,   177,   178,   179,   180,   181,   182,   183,
     184,     0,   185,   186,   187,   188,   189,     0,     0,     0,
       0,     0,     0,   320,   177,   178,   179,   180,   181,   182,
     183,   184,     0,   185,   186,   187,   188,   189,     0,     0,
       0,     0,     0,     0,   339,   177,   178,   179,   180,   181,
     182,   183,   184,     0,   185,   186,   187,   188,   189,     0,
       0,   210,   177,   178,   179,   180,   181,   182,   183,   184,
       0,   185,   186,   187,   188,   189,     0,     0,   332,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   185,   186,
     187,   188,   189,     0,     0,   333,   177,   178,   179,   180,
     181,   182,   183,   184,     0,   185,   186,   187,   188,   189,
       0,     0,   338,   177,   178,   179,   180,   181,   182,   183,
     184,     0,   185,   186,   187,   188,   189,     0,     0,   397,
     177,   178,   179,   180,   181,   182,   183,   184,     0,   185,
     186,   187,   188,   189,     0,     0,   398,   177,   178,   179,
     180,   181,   182,   183,   184,     0,   185,   186,   187,   188,
     189
};

static const yytype_int16 yycheck[] =
{
      12,    30,    12,    50,    51,    30,    30,   119,    12,    18,
     216,   217,    48,    21,    19,    21,    28,     5,    28,    12,
      32,   328,    32,    21,    28,    21,    21,   307,    32,    12,
      21,    32,    63,    64,    17,    28,    44,    46,    44,    32,
     347,   332,   333,    12,    12,    28,    58,    30,    58,    32,
      55,   331,     0,    44,    58,    50,    54,    58,    54,    28,
      28,   267,    30,    32,    32,    58,    27,    28,    12,    44,
      44,    27,    28,    17,    44,    58,    59,    55,    53,    53,
      50,    46,    12,    53,    28,    55,    30,    48,    32,    58,
      58,    59,    48,    12,    13,    20,    15,   144,    28,   390,
     391,   392,    32,   139,    91,    92,    93,    20,    95,   400,
     122,   123,   122,   123,    58,    59,     3,     4,   101,     6,
       7,   233,     9,    10,    11,   101,    55,   114,    58,    16,
      44,   167,   115,   101,   170,   118,    50,   120,   125,   115,
     127,     5,   118,    53,   120,    27,    28,   115,    12,    13,
     118,    15,   120,   122,   123,   142,    44,   101,    50,    60,
      61,    50,    50,    55,   147,    53,    55,    55,    55,   156,
      47,   115,   155,    20,   118,    52,   120,     3,     4,   147,
       6,     7,     8,     9,    10,    11,    69,    70,   200,    47,
      16,    51,   122,   123,    21,    22,    23,    24,    25,    26,
      51,     3,     4,   147,     6,     7,     8,     9,    10,    11,
      51,   155,    14,   242,    16,    47,    48,   242,   242,    55,
     232,    48,   234,    21,    22,    23,    24,    25,    26,    55,
      55,   243,    55,    55,     3,     4,   283,     6,     7,    50,
       9,    10,    11,    51,    55,    12,   233,    16,   260,    55,
      50,    44,    51,    55,   266,    55,   268,    51,   283,    51,
      21,    28,   274,    53,    52,    32,   278,    52,   280,    48,
     200,    52,    50,    45,   261,    52,    18,    21,   265,    55,
     292,    19,    55,    53,    55,   297,    55,    55,   300,    27,
      28,    58,    55,    55,   281,   282,   308,   284,    45,    37,
     283,    39,   232,    46,   234,    43,    44,   294,    45,    45,
      55,    45,    44,   243,    44,   283,    19,    55,    56,    46,
      48,    46,   332,   333,    27,    28,    48,   374,    46,    46,
     260,   343,    45,    52,    37,    46,   266,   349,   268,   283,
      43,    44,   354,    53,   274,    44,    44,   334,   278,    44,
     280,    44,    55,    56,   366,   122,   123,   369,    47,   342,
      51,   373,   292,   332,   333,    51,    51,   297,    55,    48,
     300,    45,    45,    21,   361,   362,    59,    45,   308,    51,
     390,   391,   392,    53,    55,    44,    55,   399,    46,   401,
     400,   403,   232,   405,   234,   124,   408,    54,    44,   411,
     412,    46,    44,   415,    55,   417,   393,   419,   420,   421,
      45,    55,   424,   343,    55,    55,   428,    55,    55,   349,
     260,   390,   391,   392,   354,    55,   266,    45,   268,    45,
      45,   400,    46,   200,    45,    54,   366,    47,    51,   369,
     280,     5,    28,   373,   121,    30,    30,   147,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,    51,   116,   270,   204,   232,   331,   234,   347,   399,
      -1,   401,    -1,   403,    -1,   405,   243,    -1,   408,    -1,
      -1,   411,   412,    -1,    -1,   415,    -1,   417,    -1,   419,
     420,   421,    -1,   260,   424,    -1,    -1,    -1,   428,   266,
      -1,   268,    17,   343,    19,    -1,    -1,   274,    -1,   349,
      -1,   278,    -1,   280,   354,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    -1,   292,    -1,    -1,    16,    -1,
     297,    46,    -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,
      55,   308,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    -1,   243,    -1,    -1,    -1,   399,
      -1,   401,    -1,   403,    -1,   405,    -1,    55,   408,    -1,
      -1,    -1,   412,    -1,    -1,    -1,   343,    91,    92,    93,
     420,    95,   349,    -1,    -1,    -1,   274,   354,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,
     114,    -1,   369,    -1,   292,    -1,   373,    -1,    -1,   297,
     124,   125,   300,   127,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,   399,    -1,   401,    -1,   403,    -1,   405,    -1,
      -1,   408,   156,    -1,   411,   412,    -1,    -1,   415,    -1,
     417,    -1,   419,   420,   421,    -1,    -1,   424,    -1,    -1,
     174,   428,    -1,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,    -1,   366,    -1,
      -1,   369,    -1,     3,     4,   373,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    -1,   216,   217,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   233,
      -1,    19,    20,   411,    -1,    -1,    46,   415,    -1,   417,
      -1,   419,    -1,   421,    -1,    55,   424,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,    -1,    -1,   261,    46,    47,
      -1,   265,    -1,   267,    -1,    -1,   270,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,   282,    -1,
     284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
     334,    15,    16,    17,    46,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,   361,   362,    -1,
      72,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,     3,     4,   393,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    46,    65,    66,    67,    68,
      -1,    -1,    -1,    17,    55,    19,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    46,    -1,    19,    20,    17,    -1,    19,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    17,    46,    19,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    55,    -1,    -1,    58,    17,    -1,
      19,    62,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    -1,    17,    46,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    46,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    55,    -1,    -1,    58,
      -1,    46,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      55,    -1,    -1,    58,    -1,    18,    19,    62,    -1,    19,
      65,    66,    67,    68,    27,    28,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    37,    -1,    39,
      43,    44,    19,    43,    44,    45,    -1,    -1,    -1,    -1,
      27,    28,    55,    56,    -1,    55,    56,    -1,    -1,    -1,
      37,    -1,    39,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    54,    38,    39,    40,    41,
      42,    29,    30,    31,    32,    33,    34,    35,    36,    51,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    45,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    45,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    45,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    45,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    45,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    45,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    75,    76,    77,    78,     0,    77,
       5,    55,    46,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    46,    55,
      79,    80,    81,    82,    88,    90,    95,    97,    98,   103,
     105,   106,   127,   128,   129,   130,   134,   135,   136,    55,
     127,   129,    20,    20,    55,    20,    53,    47,    81,    44,
      50,    53,    55,    88,    90,    97,    98,   130,    47,    82,
      51,    51,    51,    55,    55,    50,    55,    94,    99,   101,
      55,    55,    85,    86,    51,    21,    22,    23,    24,    25,
      26,    96,    48,    96,   137,    96,   137,    55,    94,   100,
     100,    44,    47,    55,    91,    92,    93,   127,   128,   129,
      51,    51,    51,    53,    21,    44,    52,    21,    44,    21,
      44,    52,    27,    28,    37,    39,    43,    44,    55,    56,
     105,   106,   107,   108,   109,   125,   126,   134,   135,   136,
     125,   125,    48,   125,    52,    91,    45,    52,    55,    55,
      55,   125,    91,    55,   101,    18,    46,   131,    91,    18,
      87,    91,    55,    86,    55,   134,   135,   136,   134,   135,
     136,   126,   125,   125,    44,    55,    55,    29,    30,    31,
      32,    33,    34,    35,    36,    38,    39,    40,    41,    42,
      27,    28,    27,    28,    27,    28,    49,   125,    94,    45,
      46,    93,    45,   127,   129,   125,   133,    45,    55,    45,
      45,    87,   110,   111,   112,   125,    44,    44,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,    49,    46,    17,    46,    55,    58,    62,    65,    66,
      67,    68,    79,    83,    84,    89,   102,   103,   104,   109,
     113,   114,   115,   118,   119,   124,   127,   128,   129,   138,
      46,    48,   132,   132,    47,    52,    46,    44,    46,    45,
      52,   110,   110,    47,    83,    87,   125,    47,    83,    53,
      46,    44,    44,    44,    44,    84,    47,    51,    51,    51,
      55,    47,    83,   125,    48,   125,    47,    83,   110,    47,
      83,   112,    45,    45,    47,    47,    59,    47,    83,   125,
     125,    55,    94,    97,   116,   127,   128,   129,   125,    47,
      49,   125,    47,    45,    47,    53,    63,    64,   139,   140,
     142,    47,    45,    45,    51,    55,    55,    55,    45,    49,
      60,    61,    44,    46,   140,   142,   143,   139,   142,    46,
      55,   102,   105,   106,    46,   102,   125,    54,    54,    54,
      46,    44,    44,   129,   141,    47,    83,   143,    47,    83,
      55,    55,    47,    83,    51,    55,    55,    55,   120,    45,
     125,    45,   125,    55,    45,    47,    47,    47,    94,   117,
      45,    45,    45,    69,    70,   121,   123,    45,    45,    46,
      45,    46,   102,    46,   102,    46,   102,   125,    54,    47,
      47,    83,    46,   102,    47,    83,    47,    83,    47,    83,
      54,    83,    47,    47,    83,    47,    47,    47,    83,    47,
      72,   122,    51
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
#line 2246 "parse.tab.c"
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
#line 500 "parse.y"


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
