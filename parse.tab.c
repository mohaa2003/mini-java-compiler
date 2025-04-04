
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
     CAST = 328,
     UMINUS = 329
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
#line 203 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "parse.tab.c"

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
#define YYLAST   2966

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNRULES -- Number of states.  */
#define YYNSTATES  443

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
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
     213,   215,   217,   219,   221,   223,   225,   227,   230,   233,
     237,   241,   245,   247,   251,   253,   255,   257,   260,   263,
     266,   268,   270,   272,   274,   276,   278,   281,   284,   288,
     291,   295,   298,   302,   311,   320,   328,   336,   339,   342,
     346,   352,   358,   363,   365,   367,   368,   370,   372,   376,
     378,   380,   387,   393,   401,   409,   416,   422,   434,   445,
     455,   457,   459,   460,   462,   463,   473,   483,   493,   504,
     515,   526,   535,   544,   553,   562,   563,   566,   572,   573,
     576,   577,   581,   583,   586,   589,   593,   597,   601,   605,
     609,   613,   617,   621,   625,   629,   633,   637,   641,   644,
     649,   654,   656,   659,   663,   665,   667,   669,   671,   673,
     675,   677,   680,   683,   686,   689,   692,   695,   698,   701,
     704,   707,   710,   713,   715,   717,   719,   721,   723,   725,
     727,   729,   732,   735,   737,   740,   745,   749,   753,   757,
     761,   766,   768,   772,   775,   778,   781,   784,   786,   790,
     795,   802,   808,   814,   819,   821,   824,   832,   839,   842,
     847,   851,   852
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    78,    -1,    77,    78,    -1,
      79,     5,    55,    46,    81,    47,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    82,    -1,    83,    -1,    82,    83,    -1,   104,
      -1,    91,    -1,    80,    91,    -1,    89,    -1,    80,    89,
      -1,    46,    47,    -1,    46,    82,    47,    -1,    84,    85,
      -1,    85,    -1,   104,    -1,   103,    -1,    46,    47,    -1,
      46,    84,    47,    -1,    86,    52,    87,    -1,    87,    -1,
      55,    21,    88,    -1,    18,    55,    44,   111,    45,    -1,
      55,    44,    92,    45,    46,    90,    47,    -1,    -1,    84,
      -1,   129,    55,    44,    92,    45,    46,    84,    47,    -1,
     130,    55,    44,    92,    45,    46,    84,    47,    -1,    14,
      55,    44,    92,    45,    46,    84,    47,    -1,   131,    55,
      44,    92,    45,    46,    84,    47,    -1,   129,    55,    44,
      92,    45,    46,    47,    -1,   130,    55,    44,    92,    45,
      46,    47,    -1,    14,    55,    44,    92,    45,    46,    47,
      -1,   131,    55,    44,    92,    45,    46,    47,    -1,    -1,
      93,    -1,    94,    -1,    93,    52,    94,    -1,   129,    55,
      -1,   130,    55,    -1,   131,    55,    -1,    55,    21,   126,
      -1,   136,    97,   126,    -1,   137,    97,   126,    -1,   138,
      97,   126,    -1,   128,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,   131,    86,    -1,
     129,   100,    -1,     8,   131,   101,    -1,     8,   129,   101,
      -1,   100,    52,   102,    -1,   102,    -1,   101,    52,    95,
      -1,    95,    -1,    55,    -1,    95,    -1,   105,    51,    -1,
     110,    51,    -1,   125,    51,    -1,   140,    -1,   114,    -1,
     115,    -1,   116,    -1,   119,    -1,   120,    -1,    96,    51,
      -1,   132,    51,    -1,    80,   132,    51,    -1,    98,    51,
      -1,    80,    98,    51,    -1,    99,    51,    -1,    80,    99,
      51,    -1,    58,    53,    59,    53,    60,    44,   126,    45,
      -1,    58,    53,    59,    53,    61,    44,   126,    45,    -1,
      58,    53,    59,    53,    60,    44,    45,    -1,    58,    53,
      59,    53,    61,    44,    45,    -1,    19,    53,    -1,    55,
      53,    -1,   107,    55,    53,    -1,   106,    55,    44,   111,
      45,    -1,   107,    55,    44,   111,    45,    -1,    55,    44,
     111,    45,    -1,   108,    -1,   109,    -1,    -1,   112,    -1,
     113,    -1,   112,    52,   113,    -1,   126,    -1,    88,    -1,
      65,    44,   126,    45,    46,    47,    -1,    65,    44,   126,
      45,   103,    -1,    65,    44,   126,    45,    46,    84,    47,
      -1,    66,    44,   126,    45,    46,    84,    47,    -1,    66,
      44,   126,    45,    46,    47,    -1,    66,    44,   126,    45,
     103,    -1,    67,    44,   117,    51,   126,    51,   118,    45,
      46,    84,    47,    -1,    67,    44,   117,    51,   126,    51,
     118,    45,    46,    47,    -1,    67,    44,   117,    51,   126,
      51,   118,    45,   103,    -1,    95,    -1,    98,    -1,    -1,
      95,    -1,    -1,    67,    44,   129,    55,    54,    55,    45,
      46,    47,    -1,    67,    44,   131,    55,    54,    55,    45,
      46,    47,    -1,    67,    44,   130,    55,    54,    55,    45,
      46,    47,    -1,    67,    44,   129,    55,    54,    55,    45,
      46,    84,    47,    -1,    67,    44,   131,    55,    54,    55,
      45,    46,    84,    47,    -1,    67,    44,   130,    55,    54,
      55,    45,    46,    84,    47,    -1,    67,    44,   129,    55,
      54,    55,    45,   103,    -1,    67,    44,   131,    55,    54,
      55,    45,   103,    -1,    67,    44,   130,    55,    54,    55,
      45,   103,    -1,    68,    44,   126,    45,    46,   121,   124,
      47,    -1,    -1,   121,   122,    -1,    69,   126,    54,    84,
     123,    -1,    -1,    72,    51,    -1,    -1,    70,    54,    84,
      -1,    17,    -1,    17,   126,    -1,    17,    88,    -1,   126,
      38,   127,    -1,   126,    39,   127,    -1,   126,    40,   127,
      -1,   126,    41,   127,    -1,   126,    42,   127,    -1,   126,
      29,   127,    -1,   126,    30,   127,    -1,   126,    31,   127,
      -1,   126,    32,   127,    -1,   126,    33,   127,    -1,   126,
      34,   127,    -1,   126,    35,   127,    -1,   126,    36,   127,
      -1,    39,   126,    -1,    44,   129,    45,   126,    -1,    44,
     130,    45,   126,    -1,   127,    -1,    37,   127,    -1,    44,
     126,    45,    -1,   137,    -1,   138,    -1,   136,    -1,   128,
      -1,   110,    -1,    56,    -1,    43,    -1,   137,    27,    -1,
      27,   137,    -1,   137,    28,    -1,    28,   137,    -1,   138,
      27,    -1,   138,    28,    -1,    27,   138,    -1,    28,   138,
      -1,    27,   136,    -1,    28,   136,    -1,   136,    27,    -1,
     136,    28,    -1,     9,    -1,     7,    -1,     3,    -1,     4,
      -1,     6,    -1,    10,    -1,    11,    -1,    16,    -1,   129,
      50,    -1,    55,    50,    -1,    55,    -1,   130,    55,    -1,
     130,    55,    21,   133,    -1,    18,   131,   134,    -1,    18,
     129,   134,    -1,    46,   135,    47,    -1,    48,   126,    49,
      -1,   134,    48,   126,    49,    -1,   126,    -1,   135,    52,
     126,    -1,   137,   139,    -1,   138,   139,    -1,   107,    55,
      -1,   106,    55,    -1,    55,    -1,    48,   126,    49,    -1,
     139,    48,   126,    49,    -1,    62,    46,    84,    47,   141,
     145,    -1,    62,    46,    84,    47,   144,    -1,    62,    46,
      47,   141,   145,    -1,    62,    46,    47,   144,    -1,   142,
      -1,   141,   142,    -1,    63,    44,   143,    45,    46,    84,
      47,    -1,    63,    44,   143,    45,    46,    47,    -1,   131,
      55,    -1,    64,    46,    84,    47,    -1,    64,    46,    47,
      -1,    -1,   144,    -1
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
     165,   169,   169,   169,   169,   169,   169,   173,   174,   179,
     180,   188,   189,   193,   194,   198,   198,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   214,   215,   216,   217,
     218,   219,   220,   224,   225,   226,   227,   232,   237,   238,
     242,   243,   247,   251,   252,   256,   258,   262,   262,   266,
     267,   273,   274,   277,   283,   284,   285,   289,   290,   291,
     295,   296,   297,   301,   302,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   319,   322,   324,   328,   331,   333,
     336,   338,   367,   368,   369,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   421,   421,   421,   421,   421,   421,   421,
     421,   425,   426,   430,   436,   437,   441,   442,   443,   447,
     448,   452,   453,   457,   458,   462,   463,   467,   471,   472,
     478,   479,   480,   481,   485,   486,   490,   491,   495,   499,
     500,   503,   505
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
  "FOR", "SWITCH", "CASE", "DEFAULT", "ELSE", "BREAK", "CAST", "UMINUS",
  "$accept", "program", "class_declaration_list", "class_declaration",
  "modificator", "object_modificators", "class_body", "core_body_sequence",
  "core_body", "block_body_sequence", "block_body", "instanciation_list",
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
  "simple_expression", "inc_dec_statement", "premitive_type", "array_type",
  "type_abstract", "array_declaration", "array_initialization",
  "array_dimensions", "array_elements", "array_access", "qualified_access",
  "simple_access", "array_indices", "exception_statement", "catch_clauses",
  "catch_clause", "exception_declaration", "finally_clause",
  "finally_clause_opt", 0
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
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    79,    79,    79,    79,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      85,    85,    85,    85,    86,    86,    87,    88,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    95,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   106,   107,   107,
     108,   108,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   115,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   139,   139,
     140,   140,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145
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
       1,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       3,     3,     1,     3,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     2,
       3,     2,     3,     8,     8,     7,     7,     2,     2,     3,
       5,     5,     4,     1,     1,     0,     1,     1,     3,     1,
       1,     6,     5,     7,     7,     6,     5,    11,    10,     9,
       1,     1,     0,     1,     0,     9,     9,     9,    10,    10,
      10,     8,     8,     8,     8,     0,     2,     5,     0,     2,
       0,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     4,
       4,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     4,     3,     3,     3,     3,
       4,     1,     3,     2,     2,     2,     2,     1,     3,     4,
       6,     5,     5,     4,     1,     2,     7,     6,     2,     4,
       3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   185,   186,   187,   184,     0,   183,   188,
     189,    10,    12,     0,    11,   190,     0,    16,     0,     0,
       0,   207,     0,     0,    18,    19,    24,    22,     0,     0,
       0,    21,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,   193,     0,     0,    13,    15,     0,    14,    97,
     207,   179,   172,   177,   180,   174,   178,    26,     0,    49,
     192,    98,   193,    25,    23,     0,     0,     0,     5,    20,
      86,    89,    91,   206,   205,   191,    75,    76,    68,    72,
     194,     0,    67,    35,    87,    61,    62,    63,    64,    65,
      66,   181,   182,     0,   171,   173,     0,     0,   203,   175,
     176,     0,   204,     0,    74,    70,    69,    49,    27,   193,
       0,    50,    51,     0,     0,     0,    90,    92,    88,    99,
       0,    49,     0,     0,    49,     0,    49,     0,     0,     0,
     170,     0,   207,   169,     0,     0,   103,   104,   168,    57,
     161,   167,   166,   164,   165,     0,    58,     0,    59,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    75,    71,
       0,     0,   195,     0,     0,    36,     0,     0,    34,     0,
     162,   158,   207,     0,     0,     0,   105,   206,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,    73,     0,    39,    52,     0,     0,
       0,   201,     0,     0,     0,     0,   163,     0,     0,   110,
       0,   106,   107,   109,   105,   105,   150,   151,   152,   153,
     154,   155,   156,   157,   145,   146,   147,   148,   149,   209,
       0,   142,     0,   207,     0,     0,     0,     0,     0,     0,
       0,    40,    29,     0,    31,    30,     0,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,    80,     0,     0,
     197,   196,   198,     0,     0,   105,     0,   159,   160,   102,
       0,     0,     0,    47,     0,   144,   143,    32,     0,     0,
       0,     0,     0,   122,     0,    28,    38,    77,    78,    79,
     194,    45,     0,     0,     0,   202,    46,     0,     0,    48,
       0,   108,   100,   101,    43,    33,     0,     0,     0,     0,
       0,   193,   120,   121,     0,     0,     0,     0,     0,    41,
     199,     0,    42,    37,    44,     0,     0,     0,   221,   214,
     213,     0,     0,     0,     0,    75,     0,     0,     0,   200,
       0,     0,     0,     0,   215,   222,   212,   221,   211,     0,
       0,   112,     0,     0,     0,   116,     0,     0,     0,     0,
     135,     0,     0,     0,     0,   220,     0,   210,   111,     0,
       0,     0,   115,     0,   124,     0,     0,     0,   140,    95,
       0,    96,     0,   218,     0,   219,   113,   114,   123,     0,
       0,     0,     0,     0,     0,   136,     0,    93,    94,     0,
       0,     0,   131,     0,   133,     0,   132,     0,     0,   134,
     217,     0,     0,   119,   125,     0,   127,     0,   126,     0,
       0,   141,   216,   118,     0,   128,   130,   129,   138,   117,
       0,   137,   139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   250,    33,    34,    35,   251,
     252,    92,    93,   219,    36,   253,    37,   120,   121,   122,
      87,    38,   103,    39,    40,    88,   115,    89,   254,   255,
     256,   144,   145,   146,   147,   148,   220,   221,   222,   258,
     259,   260,   324,   399,   261,   262,   388,   405,   441,   406,
     263,   223,   150,   151,   264,   265,   266,    48,   172,   270,
     212,   152,   153,   154,   108,   267,   338,   339,   374,   355,
     356
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -314
static const yytype_int16 yypact[] =
{
     176,  -314,  -314,  -314,    14,    98,  -314,    19,  -314,  -314,
     -16,   -18,   198,  -314,  -314,  -314,  -314,   264,  -314,  -314,
    -314,    28,    45,     4,    55,  -314,    37,  -314,    -9,    -9,
    2882,    83,   382,    58,   198,  -314,  -314,  -314,   123,   139,
     141,  -314,    54,    80,  -314,   121,   140,   142,   164,   210,
     647,   854,  -314,   161,   161,  -314,  -314,   108,  -314,  -314,
     167,  -314,   173,   173,  -314,   173,   173,  -314,  2911,   328,
    -314,  -314,    35,  -314,  -314,   189,   190,   192,  -314,  -314,
    -314,  -314,  -314,  -314,   174,  -314,    34,  -314,   196,  -314,
      49,    51,   197,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  1207,  -314,  -314,  1207,  1207,   202,  -314,
    -314,  1207,   202,   231,  -314,   203,   203,   328,  -314,   204,
     212,   207,  -314,   125,   205,   206,  -314,  -314,  -314,  -314,
    1207,   328,   208,    -5,   328,   248,   328,   214,  1273,  1207,
    -314,  2828,    73,  -314,   222,   224,  -314,  -314,  -314,  2137,
    -314,  -314,    88,    71,    74,  1477,  2137,  1207,  2137,   161,
     236,   237,   328,  -314,  -314,  -314,  2137,   239,   231,  -314,
     264,  1207,  -314,   241,   227,  -314,   242,   267,  -314,  1207,
    -314,  -314,    97,  1743,    79,   244,  1019,   247,    84,  1273,
    1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,  1273,
    1273,  1273,  -314,  1543,  -314,   250,  2796,  -314,   251,   252,
     252,  2137,   101,   253,   258,   259,  -314,  1207,  1207,  -314,
     262,   257,  -314,  2137,  1019,  1019,  -314,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
     948,  1019,  1014,    90,   260,   266,   270,   272,   273,   274,
     444,  2796,  -314,   263,  -314,  -314,   271,   276,  -314,  -314,
    -314,  -314,  -314,   278,   131,   249,   214,  -314,  1080,  1207,
     275,   275,  -314,  1207,  1146,  1019,  1212,  -314,  -314,  -314,
    1019,   279,   280,  -314,  1278,  -314,  2137,  -314,  1344,   284,
    1410,  1207,  1207,   506,  1207,  -314,  -314,  -314,  -314,  -314,
     300,  -314,  1476,  1609,  1207,  2137,  -314,  1542,   285,  -314,
    1608,  -314,  -314,  -314,  -314,  -314,   292,    91,  1674,  1809,
    1875,    13,  -314,  -314,   295,   132,   293,   296,  1941,  -314,
    -314,  1675,  -314,  -314,  -314,   112,   306,   307,    91,  -314,
    -314,    91,   479,   543,  1207,    -2,   302,     0,   311,  -314,
     314,   317,   308,  1740,  -314,  -314,  -314,    91,  -314,  1806,
      73,  -314,   310,   313,  1872,  -314,  1411,   318,   321,   322,
    -314,  1075,  1141,   323,   324,  -314,  1938,  -314,  -314,  2004,
     247,    84,  -314,  2070,   161,   327,   334,   335,   114,  -314,
    2007,  -314,  2073,  -314,   320,  -314,  -314,  -314,  -314,   339,
     710,   765,   788,  1207,   333,  -314,   347,  -314,  -314,  2136,
     931,  2202,  -314,  2268,  -314,  2334,  -314,  1346,  2796,  -314,
    -314,  2400,  2466,  -314,  -314,  2532,  -314,  2598,  -314,  2664,
    2796,  2796,  -314,  -314,  2730,  -314,  -314,  -314,   916,  -314,
     344,  -314,  -314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,  -314,   395,  -314,     3,  -314,   372,   -25,   391,
     436,  -314,   277,  -129,   375,  -314,   376,   -13,  -314,   265,
     -51,  -314,   149,   -28,   -31,  -314,   350,   288,  -313,    23,
    -314,    32,    39,  -314,  -314,   483,  -217,  -314,   144,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,  -314,
    -314,   445,   -32,   281,    15,    62,     8,   -27,  -314,   211,
    -314,   -12,    52,   217,   -40,  -314,    89,  -307,  -314,  -305,
      68
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -194
static const yytype_int16 yytable[] =
{
      49,    76,   114,   114,    75,    77,   175,   281,   282,    79,
      26,   112,   340,   170,     8,    32,    61,    64,    49,   130,
      47,   135,    49,   112,    10,    54,   112,    45,    12,   361,
     365,   354,    53,    32,   130,    41,   358,    32,    47,    11,
      47,   171,    47,    79,    42,    45,    60,    45,    55,    45,
     354,    43,   367,    41,   369,   130,    49,    41,   308,    57,
      42,    42,    42,    70,    50,    56,    42,    43,    43,    43,
     133,    32,   135,    43,    46,    58,    47,   125,   131,    69,
      62,    65,    50,    45,   123,    70,    50,   412,   414,   416,
      59,    41,    46,   134,    46,   136,    46,   423,   104,   105,
      42,   109,   110,    -9,   160,    78,   180,    43,   204,    83,
       1,     2,   285,     3,   112,   101,   102,   186,   167,   106,
      50,   173,   106,   176,   217,   125,    71,    69,   225,    85,
      46,   124,   123,    70,   186,    84,    71,   129,  -193,   125,
      70,   186,   125,    71,   125,  -193,   123,    70,   272,   123,
      71,   123,   117,   273,   336,   337,   184,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     125,    85,   350,   351,    80,    85,    86,   123,   210,   124,
     163,    85,    85,   403,   404,   209,   168,   345,     1,     2,
      81,     3,    82,   124,    49,    90,   124,    91,   124,   107,
     111,    13,    14,   185,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    94,   113,    26,    27,    76,
      71,   106,    75,    77,   124,    28,    29,   129,    49,    51,
      49,    95,    96,    97,    98,    99,   100,   101,   102,    49,
     126,   127,   322,   128,    30,    63,    66,    51,   132,   137,
     157,    51,   130,    31,    70,   159,    49,   161,    50,   162,
     164,   165,    49,   168,    49,   323,   174,    13,    14,   177,
      15,    16,    49,    18,    19,    20,    49,   187,    49,   188,
      25,   205,   214,   206,   208,    51,   213,   215,   135,   218,
      49,   224,    50,    44,    50,    49,   240,   268,    49,   274,
     269,   327,   275,    50,   300,   276,    49,   279,   325,   280,
     296,    44,   290,   289,   291,    44,   292,   293,   294,    52,
      50,   133,   297,   304,   312,   313,    50,   298,    50,   299,
     333,    13,    14,   398,    15,    16,    50,    18,    19,    20,
      50,    49,    50,   316,    25,   335,   344,    49,   346,    44,
     352,   347,    49,   353,    50,   326,   368,   370,   371,    50,
     373,   372,    50,    52,    49,   380,   409,    49,   381,   394,
      50,    49,   400,   385,   362,   362,   386,   387,   393,   401,
     402,   363,   363,   119,   410,    13,    14,   418,    15,    16,
      17,    18,    19,    20,   419,   442,    23,    49,    25,    49,
       9,    49,    68,    49,   116,    50,    49,    73,    74,    49,
      49,    50,     0,    49,   178,    49,    50,    49,    49,    49,
     169,   271,    49,    51,   311,   377,    49,   207,    50,     0,
     357,    50,   362,   362,   362,    50,     0,    72,     0,   363,
     363,   363,   362,     0,     0,     0,     0,    13,    14,   363,
      15,    16,    17,    18,    19,    20,     0,    51,     0,    51,
      25,    50,     0,    50,     0,    50,     0,    50,    51,     0,
      50,     0,     0,    50,    50,     0,     0,    50,     0,    50,
       0,    50,    50,    50,     0,    51,    50,    44,     0,     0,
      50,    51,     0,    51,     0,     0,   241,     0,    26,   119,
       0,    51,     0,     0,     0,    51,     0,    51,     0,    13,
      14,     0,    15,    16,     0,    18,    19,    20,     0,    51,
       0,    44,    25,    44,    51,   359,     0,    51,     0,     0,
       0,     0,    44,     0,   360,    51,     0,   244,     0,     0,
       0,   245,     0,     0,   246,   247,   248,   249,   149,    44,
       0,   155,   156,     0,     0,    44,   158,    44,     0,     0,
     241,   321,    26,     0,     0,    44,     0,     0,     0,    44,
      51,    44,     0,     0,     0,   166,    51,     0,     0,     0,
       0,    51,     0,    44,   181,     0,   183,     0,    44,   364,
       0,    44,     0,    51,     0,     0,    51,     0,   360,    44,
      51,   244,   203,     0,     0,   245,     0,     0,   246,   247,
     248,   249,     0,     0,     0,     0,   211,     0,     0,     0,
       0,     0,     0,     0,   183,     0,    51,     0,    51,     0,
      51,   284,    51,   288,    44,    51,     0,     0,    51,    51,
      44,     0,    51,     0,    51,    44,    51,    51,    51,     0,
       0,    51,     0,     0,     0,    51,     0,    44,     0,   302,
      44,     0,   277,   278,    44,   307,     0,   310,    95,    96,
      97,    98,    99,   100,   104,   105,     0,     0,     0,     0,
       0,   318,     0,     0,     0,     0,   286,   295,     0,   257,
      44,     0,    44,     0,    44,   106,    44,     0,     0,    44,
       0,     0,    44,    44,     0,     0,    44,     0,    44,     0,
      44,    44,    44,     0,   303,    44,     0,     0,   305,    44,
     295,     0,     0,   257,   295,   257,     0,   241,     0,    26,
       0,     0,     0,     0,   257,     0,   319,   320,   295,   328,
       0,     0,     0,   295,   376,     0,   295,     0,     0,   331,
     379,   257,     0,     0,   295,   383,   411,   257,     0,   257,
       0,     0,     0,     0,     0,   360,     0,   257,   244,     0,
       0,   257,   245,   257,     0,   246,   247,   248,   249,     0,
       0,     0,   241,     0,    26,   257,     0,     0,     0,   366,
     257,     0,     0,   257,     0,     0,     0,     0,     0,     0,
     421,   257,   425,     0,   427,   241,   429,    26,     0,   431,
       0,   413,   295,   434,     0,   295,   390,   392,     0,   295,
     360,   438,     0,   244,     0,   257,   257,   245,     0,     0,
     246,   247,   248,   249,   415,     0,   257,     0,     0,     0,
       0,     0,   257,   360,     0,     0,   244,   257,   417,     0,
     245,     0,     0,   246,   247,   248,   249,   295,     0,   257,
       0,   295,   257,   295,     0,   295,   257,   295,     0,     0,
     295,     0,     0,     0,   295,    95,    96,    97,    98,    99,
     100,   109,   110,   257,   257,   257,     0,     0,     0,     0,
       0,     0,   257,   257,   257,     0,   257,     0,   257,     0,
       0,   257,   106,     0,   257,   257,     0,     0,   257,     0,
     257,     0,   257,   257,   257,     0,     0,   257,     0,    13,
      14,   257,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,   241,     0,
      26,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,   242,    24,    25,   241,     0,    26,    27,     0,
       0,   243,     0,     0,   244,    28,    29,   422,   245,     0,
       0,   246,   247,   248,   249,     0,   360,     0,   440,   244,
       0,     0,     0,   245,   242,   283,   246,   247,   248,   249,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,   174,    26,     0,
       0,    28,    29,     0,     0,     0,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,   138,     0,   139,     0,
     242,   287,   140,   141,     0,     0,     0,     0,     0,   243,
       0,     0,   244,     0,   142,   143,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    26,    24,    25,   241,     0,    26,
      27,     0,    28,    29,     0,     0,     0,    28,    29,     0,
       0,     0,   138,     0,   139,     0,     0,     0,   140,   141,
     389,     0,     0,     0,     0,     0,   242,   301,     0,     0,
     142,   143,     0,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      26,    24,    25,   241,     0,    26,    27,     0,    28,    29,
       0,     0,     0,    28,    29,     0,     0,     0,   138,     0,
     139,     0,     0,     0,   140,   141,   391,     0,     0,     0,
       0,     0,   242,   306,     0,     0,   142,   143,     0,     0,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   247,   248,   249,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    26,    24,    25,   241,
       0,    26,    27,     0,    28,    29,     0,     0,     0,    28,
      29,     0,     0,     0,   138,     0,   139,     0,     0,     0,
     140,   141,     0,     0,     0,     0,     0,     0,   242,   309,
       0,     0,   142,   143,     0,     0,     0,   243,     0,     0,
     244,     0,     0,     0,   245,     0,     0,   246,   247,   248,
     249,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    26,    24,    25,   241,     0,    26,    27,     0,
      28,    29,     0,     0,     0,    28,    29,     0,     0,     0,
     138,     0,     0,     0,     0,     0,   140,   179,     0,     0,
       0,     0,     0,     0,   242,   314,     0,     0,   142,   143,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,     0,   197,   198,   199,   200,   201,     0,
     242,   315,     0,     0,     0,     0,     0,     0,     0,   243,
     430,     0,   244,     0,     0,     0,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   241,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   199,   200,   201,     0,     0,   242,   317,     0,     0,
       0,     0,   384,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,   199,   200,   201,
       0,     0,   242,   329,     0,     0,   202,     0,     0,     0,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   247,   248,   249,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   241,
       0,    26,    27,     0,     0,     0,     0,     0,     0,    28,
      29,     0,   189,   190,   191,   192,   193,   194,   195,   196,
       0,   197,   198,   199,   200,   201,     0,     0,   242,   332,
       0,     0,   239,     0,     0,     0,     0,   243,     0,     0,
     244,     0,     0,     0,   245,     0,     0,   246,   247,   248,
     249,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   241,     0,    26,    27,     0,
       0,     0,     0,     0,     0,    28,    29,     0,   189,   190,
     191,   192,   193,   194,   195,   196,     0,   197,   198,   199,
     200,   201,     0,     0,   242,   334,     0,     0,   330,     0,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    28,    29,     0,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,   199,   200,   201,     0,     0,
     242,   341,     0,     0,   349,     0,     0,     0,     0,   243,
       0,     0,   244,     0,     0,     0,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   241,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
       0,   197,   198,   199,   200,   201,   242,   375,   216,     0,
       0,     0,     0,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,   189,   190,
     191,   192,   193,   194,   195,   196,     0,   197,   198,   199,
     200,   201,   242,   378,   342,     0,     0,     0,     0,     0,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   247,   248,   249,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   241,
       0,    26,    27,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   197,   198,   199,   200,   201,   242,   382,
     343,     0,     0,     0,     0,     0,     0,   243,     0,     0,
     244,     0,     0,     0,   245,     0,     0,   246,   247,   248,
     249,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   241,     0,    26,    27,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   199,   200,   201,   242,   395,   348,     0,     0,     0,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,   199,   200,   201,
     242,   396,   407,     0,     0,     0,     0,     0,     0,   243,
       0,     0,   244,     0,     0,     0,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   241,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
       0,   197,   198,   199,   200,   201,   242,   397,   408,     0,
       0,     0,     0,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   197,   198,   199,   200,   201,
       0,     0,   242,   420,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   247,   248,   249,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   241,
       0,    26,    27,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   424,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
     244,     0,     0,     0,   245,     0,     0,   246,   247,   248,
     249,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   241,     0,    26,    27,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,   426,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   428,     0,     0,     0,     0,     0,     0,     0,   243,
       0,     0,   244,     0,     0,     0,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   241,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   432,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   242,   433,     0,     0,     0,     0,     0,     0,
       0,   243,     0,     0,   244,     0,     0,     0,   245,     0,
       0,   246,   247,   248,   249,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   241,
       0,    26,    27,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,   435,
       0,     0,     0,     0,     0,     0,     0,   243,     0,     0,
     244,     0,     0,     0,   245,     0,     0,   246,   247,   248,
     249,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   241,     0,    26,    27,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,   436,     0,     0,     0,     0,
       0,     0,     0,   243,     0,     0,   244,     0,     0,     0,
     245,     0,     0,   246,   247,   248,   249,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   241,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,   437,     0,     0,     0,     0,     0,     0,     0,   243,
       0,     0,   244,     0,     0,     0,   245,     0,     0,   246,
     247,   248,   249,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   241,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   439,     0,     0,
       0,     0,     0,     0,     0,   243,     0,     0,   244,     0,
       0,     0,   245,     0,     0,   246,   247,   248,   249,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   241,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,     0,     0,     0,
       0,    13,    14,     0,    15,    16,     0,    18,    19,    20,
       0,     0,   242,     0,    25,     0,     0,    26,     0,     0,
       0,   243,     0,     0,   244,    28,    29,     0,   245,     0,
       0,   246,   247,   248,   249,   138,     0,   139,     0,     0,
       0,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   182,   143,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,    27,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    30,    67,
      26,    27,     0,     0,     0,     0,     0,    31,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,   118,     0,
       0,     0,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
      12,    32,    53,    54,    32,    32,   135,   224,   225,    34,
      19,    51,   317,    18,     0,    12,    28,    29,    30,    21,
      12,    21,    34,    63,     5,    17,    66,    12,    46,   342,
     343,   338,    17,    30,    21,    12,   341,    34,    30,    55,
      32,    46,    34,    68,    12,    30,    55,    32,    20,    34,
     357,    12,    54,    30,    54,    21,    68,    34,   275,    55,
      28,    29,    30,    50,    12,    20,    34,    28,    29,    30,
      21,    68,    21,    34,    12,    20,    68,    69,    44,    44,
      28,    29,    30,    68,    69,    50,    34,   400,   401,   402,
      53,    68,    30,    44,    32,    44,    34,   410,    27,    28,
      68,    27,    28,     5,   117,    47,   138,    68,   159,    55,
      12,    13,   241,    15,   154,    27,    28,    44,   131,    48,
      68,   134,    48,   136,    45,   117,    53,    44,    44,    50,
      68,    69,   117,    50,    44,    55,    53,    53,    55,   131,
      50,    44,   134,    53,   136,    55,   131,    50,    47,   134,
      53,   136,    44,    52,    63,    64,   141,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     162,    50,    60,    61,    51,    50,    55,   162,   170,   117,
      55,    50,    50,    69,    70,   170,    55,    55,    12,    13,
      51,    15,    51,   131,   206,    55,   134,    55,   136,    50,
      51,     3,     4,   141,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    51,    55,    19,    20,   250,
      53,    48,   250,   250,   162,    27,    28,    53,   240,    12,
     242,    21,    22,    23,    24,    25,    26,    27,    28,   251,
      51,    51,   293,    51,    46,    28,    29,    30,    52,    52,
      48,    34,    21,    55,    50,    52,   268,    45,   206,    52,
      55,    55,   274,    55,   276,   293,    18,     3,     4,    55,
       6,     7,   284,     9,    10,    11,   288,    55,   290,    55,
      16,    45,    55,    46,    45,    68,    45,    45,    21,    45,
     302,    44,   240,    12,   242,   307,    46,    46,   310,    46,
      48,   293,    44,   251,    55,    46,   318,    45,   293,    52,
      47,    30,    46,    53,    44,    34,    44,    44,    44,    55,
     268,    21,    51,    48,    45,    45,   274,    51,   276,    51,
      45,     3,     4,   384,     6,     7,   284,     9,    10,    11,
     288,   353,   290,    59,    16,    53,    51,   359,    55,    68,
      44,    55,   364,    46,   302,   293,    54,    46,    44,   307,
     352,    44,   310,    55,   376,    55,    46,   379,    55,    45,
     318,   383,    45,    55,   342,   343,    55,    55,    55,    45,
      45,   342,   343,    55,    45,     3,     4,    54,     6,     7,
       8,     9,    10,    11,    47,    51,    14,   409,    16,   411,
       5,   413,    30,   415,    54,   353,   418,    32,    32,   421,
     422,   359,    -1,   425,   137,   427,   364,   429,   430,   431,
     132,   210,   434,   206,   280,   357,   438,   162,   376,    -1,
     341,   379,   400,   401,   402,   383,    -1,    55,    -1,   400,
     401,   402,   410,    -1,    -1,    -1,    -1,     3,     4,   410,
       6,     7,     8,     9,    10,    11,    -1,   240,    -1,   242,
      16,   409,    -1,   411,    -1,   413,    -1,   415,   251,    -1,
     418,    -1,    -1,   421,   422,    -1,    -1,   425,    -1,   427,
      -1,   429,   430,   431,    -1,   268,   434,   206,    -1,    -1,
     438,   274,    -1,   276,    -1,    -1,    17,    -1,    19,    55,
      -1,   284,    -1,    -1,    -1,   288,    -1,   290,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    -1,   302,
      -1,   240,    16,   242,   307,    46,    -1,   310,    -1,    -1,
      -1,    -1,   251,    -1,    55,   318,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,   103,   268,
      -1,   106,   107,    -1,    -1,   274,   111,   276,    -1,    -1,
      17,    55,    19,    -1,    -1,   284,    -1,    -1,    -1,   288,
     353,   290,    -1,    -1,    -1,   130,   359,    -1,    -1,    -1,
      -1,   364,    -1,   302,   139,    -1,   141,    -1,   307,    46,
      -1,   310,    -1,   376,    -1,    -1,   379,    -1,    55,   318,
     383,    58,   157,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   409,    -1,   411,    -1,
     413,   240,   415,   242,   353,   418,    -1,    -1,   421,   422,
     359,    -1,   425,    -1,   427,   364,   429,   430,   431,    -1,
      -1,   434,    -1,    -1,    -1,   438,    -1,   376,    -1,   268,
     379,    -1,   217,   218,   383,   274,    -1,   276,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,   290,    -1,    -1,    -1,    -1,   241,   251,    -1,   206,
     409,    -1,   411,    -1,   413,    48,   415,    -1,    -1,   418,
      -1,    -1,   421,   422,    -1,    -1,   425,    -1,   427,    -1,
     429,   430,   431,    -1,   269,   434,    -1,    -1,   273,   438,
     284,    -1,    -1,   240,   288,   242,    -1,    17,    -1,    19,
      -1,    -1,    -1,    -1,   251,    -1,   291,   292,   302,   294,
      -1,    -1,    -1,   307,   353,    -1,   310,    -1,    -1,   304,
     359,   268,    -1,    -1,   318,   364,    46,   274,    -1,   276,
      -1,    -1,    -1,    -1,    -1,    55,    -1,   284,    58,    -1,
      -1,   288,    62,   290,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    17,    -1,    19,   302,    -1,    -1,    -1,   344,
     307,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,
     409,   318,   411,    -1,   413,    17,   415,    19,    -1,   418,
      -1,    46,   376,   422,    -1,   379,   371,   372,    -1,   383,
      55,   430,    -1,    58,    -1,   342,   343,    62,    -1,    -1,
      65,    66,    67,    68,    46,    -1,   353,    -1,    -1,    -1,
      -1,    -1,   359,    55,    -1,    -1,    58,   364,   403,    -1,
      62,    -1,    -1,    65,    66,    67,    68,   421,    -1,   376,
      -1,   425,   379,   427,    -1,   429,   383,   431,    -1,    -1,
     434,    -1,    -1,    -1,   438,    21,    22,    23,    24,    25,
      26,    27,    28,   400,   401,   402,    -1,    -1,    -1,    -1,
      -1,    -1,   409,   410,   411,    -1,   413,    -1,   415,    -1,
      -1,   418,    48,    -1,   421,   422,    -1,    -1,   425,    -1,
     427,    -1,   429,   430,   431,    -1,    -1,   434,    -1,     3,
       4,   438,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    17,    -1,
      19,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    46,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    55,    -1,    -1,    58,    27,    28,    46,    62,    -1,
      -1,    65,    66,    67,    68,    -1,    55,    -1,    72,    58,
      -1,    -1,    -1,    62,    46,    47,    65,    66,    67,    68,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    18,    19,    -1,
      -1,    27,    28,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      46,    47,    43,    44,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    55,    56,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    19,    15,    16,    17,    -1,    19,
      20,    -1,    27,    28,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      55,    56,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      19,    15,    16,    17,    -1,    19,    20,    -1,    27,    28,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    55,    56,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    19,    15,    16,    17,
      -1,    19,    20,    -1,    27,    28,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    55,    56,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    19,    15,    16,    17,    -1,    19,    20,    -1,
      27,    28,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    55,    56,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      54,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    46,    47,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    -1,    -1,    46,    47,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    -1,    -1,    46,    47,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    -1,    -1,
      46,    47,    -1,    -1,    49,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    46,    47,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    46,    47,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    38,    39,    40,    41,    42,    46,    47,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    46,    47,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      46,    47,    45,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    39,    40,    41,    42,    46,    47,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,
      -1,    65,    66,    67,    68,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,
      68,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    65,    66,    67,    68,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      66,    67,    68,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,    -1,     9,    10,    11,
      -1,    -1,    46,    -1,    16,    -1,    -1,    19,    -1,    -1,
      -1,    55,    -1,    -1,    58,    27,    28,    -1,    62,    -1,
      -1,    65,    66,    67,    68,    37,    -1,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    46,    47,
      19,    20,    -1,    -1,    -1,    -1,    -1,    55,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    76,    77,    78,    79,     0,    78,
       5,    55,    46,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    27,    28,
      46,    55,    80,    81,    82,    83,    89,    91,    96,    98,
      99,   104,   106,   107,   128,   129,   130,   131,   132,   136,
     137,   138,    55,   129,   131,    20,    20,    55,    20,    53,
      55,   136,   137,   138,   136,   137,   138,    47,    82,    44,
      50,    53,    55,    89,    91,    98,    99,   132,    47,    83,
      51,    51,    51,    55,    55,    50,    55,    95,   100,   102,
      55,    55,    86,    87,    51,    21,    22,    23,    24,    25,
      26,    27,    28,    97,    27,    28,    48,    97,   139,    27,
      28,    97,   139,    55,    95,   101,   101,    44,    47,    55,
      92,    93,    94,   129,   130,   131,    51,    51,    51,    53,
      21,    44,    52,    21,    44,    21,    44,    52,    37,    39,
      43,    44,    55,    56,   106,   107,   108,   109,   110,   126,
     127,   128,   136,   137,   138,   126,   126,    48,   126,    52,
      92,    45,    52,    55,    55,    55,   126,    92,    55,   102,
      18,    46,   133,    92,    18,    88,    92,    55,    87,    44,
     127,   126,    55,   126,   129,   130,    44,    55,    55,    29,
      30,    31,    32,    33,    34,    35,    36,    38,    39,    40,
      41,    42,    49,   126,    95,    45,    46,    94,    45,   129,
     131,   126,   135,    45,    55,    45,    45,    45,    45,    88,
     111,   112,   113,   126,    44,    44,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,    49,
      46,    17,    46,    55,    58,    62,    65,    66,    67,    68,
      80,    84,    85,    90,   103,   104,   105,   110,   114,   115,
     116,   119,   120,   125,   129,   130,   131,   140,    46,    48,
     134,   134,    47,    52,    46,    44,    46,   126,   126,    45,
      52,   111,   111,    47,    84,    88,   126,    47,    84,    53,
      46,    44,    44,    44,    44,    85,    47,    51,    51,    51,
      55,    47,    84,   126,    48,   126,    47,    84,   111,    47,
      84,   113,    45,    45,    47,    47,    59,    47,    84,   126,
     126,    55,    95,    98,   117,   129,   130,   131,   126,    47,
      49,   126,    47,    45,    47,    53,    63,    64,   141,   142,
     144,    47,    45,    45,    51,    55,    55,    55,    45,    49,
      60,    61,    44,    46,   142,   144,   145,   141,   144,    46,
      55,   103,   106,   107,    46,   103,   126,    54,    54,    54,
      46,    44,    44,   131,   143,    47,    84,   145,    47,    84,
      55,    55,    47,    84,    51,    55,    55,    55,   121,    45,
     126,    45,   126,    55,    45,    47,    47,    47,    95,   118,
      45,    45,    45,    69,    70,   122,   124,    45,    45,    46,
      45,    46,   103,    46,   103,    46,   103,   126,    54,    47,
      47,    84,    46,   103,    47,    84,    47,    84,    47,    84,
      54,    84,    47,    47,    84,    47,    47,    47,    84,    47,
      72,   123,    51
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
#line 2345 "parse.tab.c"
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
#line 508 "parse.y"


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
