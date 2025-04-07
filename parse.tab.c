
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
     LOWER_THAN_ELSE = 328,
     CAST = 329,
     UMINUS = 330
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
#line 204 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "parse.tab.c"

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
#define YYLAST   2381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNRULES -- Number of states.  */
#define YYNSTATES  442

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
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
     378,   380,   386,   394,   402,   405,   409,   412,   414,   417,
     421,   424,   426,   429,   432,   435,   437,   439,   441,   443,
     445,   451,   461,   463,   465,   466,   468,   469,   478,   487,
     496,   505,   506,   509,   515,   516,   519,   520,   524,   526,
     529,   532,   536,   540,   544,   548,   552,   556,   560,   564,
     568,   572,   576,   580,   584,   587,   592,   597,   599,   602,
     606,   608,   610,   612,   614,   616,   618,   620,   623,   626,
     629,   632,   635,   638,   641,   644,   647,   650,   653,   656,
     658,   660,   662,   664,   666,   668,   670,   672,   675,   678,
     680,   683,   688,   692,   696,   700,   704,   709,   711,   715,
     718,   721,   724,   727,   729,   733,   738,   745,   751,   757,
     762,   764,   767,   775,   782,   785,   790,   794,   795
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    78,    -1,    79,    -1,    78,    79,    -1,
      80,     5,    55,    46,    82,    47,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    83,    -1,    84,    -1,    83,    84,    -1,   105,
      -1,    92,    -1,    81,    92,    -1,    90,    -1,    81,    90,
      -1,    46,    47,    -1,    46,    83,    47,    -1,    85,    86,
      -1,    86,    -1,   105,    -1,   104,    -1,    46,    47,    -1,
      46,    85,    47,    -1,    87,    52,    88,    -1,    88,    -1,
      55,    21,    89,    -1,    18,    55,    44,   112,    45,    -1,
      55,    44,    93,    45,    46,    91,    47,    -1,    -1,    85,
      -1,   133,    55,    44,    93,    45,    46,    85,    47,    -1,
     134,    55,    44,    93,    45,    46,    85,    47,    -1,    14,
      55,    44,    93,    45,    46,    85,    47,    -1,   135,    55,
      44,    93,    45,    46,    85,    47,    -1,   133,    55,    44,
      93,    45,    46,    47,    -1,   134,    55,    44,    93,    45,
      46,    47,    -1,    14,    55,    44,    93,    45,    46,    47,
      -1,   135,    55,    44,    93,    45,    46,    47,    -1,    -1,
      94,    -1,    95,    -1,    94,    52,    95,    -1,   133,    55,
      -1,   134,    55,    -1,   135,    55,    -1,    55,    21,   130,
      -1,   140,    98,   130,    -1,   141,    98,   130,    -1,   142,
      98,   130,    -1,   132,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,   135,    87,    -1,
     133,   101,    -1,     8,   135,   102,    -1,     8,   133,   102,
      -1,   101,    52,   103,    -1,   103,    -1,   102,    52,    96,
      -1,    96,    -1,    55,    -1,    96,    -1,   106,    51,    -1,
     111,    51,    -1,   129,    51,    -1,   144,    -1,   115,    -1,
     119,    -1,   120,    -1,   123,    -1,   124,    -1,    97,    51,
      -1,   136,    51,    -1,    81,   136,    51,    -1,    99,    51,
      -1,    81,    99,    51,    -1,   100,    51,    -1,    81,   100,
      51,    -1,    58,    53,    59,    53,    60,    44,   130,    45,
      -1,    58,    53,    59,    53,    61,    44,   130,    45,    -1,
      58,    53,    59,    53,    60,    44,    45,    -1,    58,    53,
      59,    53,    61,    44,    45,    -1,    19,    53,    -1,    55,
      53,    -1,   108,    55,    53,    -1,   107,    55,    44,   112,
      45,    -1,   108,    55,    44,   112,    45,    -1,    55,    44,
     112,    45,    -1,   109,    -1,   110,    -1,    -1,   113,    -1,
     114,    -1,   113,    52,   114,    -1,   130,    -1,    89,    -1,
      65,    44,   130,    45,   116,    -1,    65,    44,   130,    45,
     116,    71,   117,    -1,    65,    44,   130,    45,   116,    71,
     115,    -1,    46,    47,    -1,    46,    85,    47,    -1,    97,
      51,    -1,   104,    -1,    46,    47,    -1,    46,    85,    47,
      -1,    97,    51,    -1,   118,    -1,   106,    51,    -1,   111,
      51,    -1,   129,    51,    -1,   144,    -1,   119,    -1,   120,
      -1,   123,    -1,   124,    -1,    66,    44,   130,    45,   116,
      -1,    67,    44,   121,    51,   130,    51,   122,    45,   116,
      -1,    96,    -1,    99,    -1,    -1,    96,    -1,    -1,    67,
      44,   133,    55,    54,    55,    45,   116,    -1,    67,    44,
     135,    55,    54,    55,    45,   116,    -1,    67,    44,   134,
      55,    54,    55,    45,   116,    -1,    68,    44,   130,    45,
      46,   125,   128,    47,    -1,    -1,   125,   126,    -1,    69,
     130,    54,    85,   127,    -1,    -1,    72,    51,    -1,    -1,
      70,    54,    85,    -1,    17,    -1,    17,   130,    -1,    17,
      89,    -1,   130,    38,   131,    -1,   130,    39,   131,    -1,
     130,    40,   131,    -1,   130,    41,   131,    -1,   130,    42,
     131,    -1,   130,    29,   131,    -1,   130,    30,   131,    -1,
     130,    31,   131,    -1,   130,    32,   131,    -1,   130,    33,
     131,    -1,   130,    34,   131,    -1,   130,    35,   131,    -1,
     130,    36,   131,    -1,    39,   130,    -1,    44,   133,    45,
     130,    -1,    44,   134,    45,   130,    -1,   131,    -1,    37,
     131,    -1,    44,   130,    45,    -1,   141,    -1,   142,    -1,
     140,    -1,   132,    -1,   111,    -1,    56,    -1,    43,    -1,
     141,    27,    -1,    27,   141,    -1,   141,    28,    -1,    28,
     141,    -1,   142,    27,    -1,   142,    28,    -1,    27,   142,
      -1,    28,   142,    -1,    27,   140,    -1,    28,   140,    -1,
     140,    27,    -1,   140,    28,    -1,     9,    -1,     7,    -1,
       3,    -1,     4,    -1,     6,    -1,    10,    -1,    11,    -1,
      16,    -1,   133,    50,    -1,    55,    50,    -1,    55,    -1,
     134,    55,    -1,   134,    55,    21,   137,    -1,    18,   135,
     138,    -1,    18,   133,   138,    -1,    46,   139,    47,    -1,
      48,   130,    49,    -1,   138,    48,   130,    49,    -1,   130,
      -1,   139,    52,   130,    -1,   141,   143,    -1,   142,   143,
      -1,   108,    55,    -1,   107,    55,    -1,    55,    -1,    48,
     130,    49,    -1,   143,    48,   130,    49,    -1,    62,    46,
      85,    47,   145,   149,    -1,    62,    46,    85,    47,   148,
      -1,    62,    46,    47,   145,   149,    -1,    62,    46,    47,
     148,    -1,   146,    -1,   145,   146,    -1,    63,    44,   147,
      45,    46,    85,    47,    -1,    63,    44,   147,    45,    46,
      47,    -1,   135,    55,    -1,    64,    46,    85,    47,    -1,
      64,    46,    47,    -1,    -1,   148,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    54,    54,    58,    62,    63,    64,    64,
      68,    69,    70,    71,    72,    73,    74,    77,    79,    83,
      84,    88,    89,    90,    91,    92,    93,    94,    98,    99,
     103,   104,   105,   106,   110,   111,   115,   119,   123,   126,
     128,   133,   134,   135,   136,   137,   138,   139,   140,   143,
     145,   149,   149,   153,   154,   155,   159,   163,   164,   165,
     166,   170,   170,   170,   170,   170,   170,   174,   175,   180,
     181,   189,   190,   194,   195,   199,   199,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   215,   216,   217,   218,
     219,   220,   221,   225,   226,   227,   228,   233,   238,   239,
     243,   244,   248,   252,   253,   257,   259,   263,   263,   267,
     268,   276,   277,   278,   282,   283,   284,   285,   290,   291,
     292,   293,   298,   299,   300,   301,   302,   303,   304,   305,
     310,   314,   318,   319,   320,   324,   325,   330,   331,   332,
     336,   339,   341,   345,   348,   350,   353,   355,   361,   362,
     363,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   415,
     415,   415,   415,   415,   415,   415,   415,   419,   420,   424,
     430,   431,   435,   436,   437,   441,   442,   446,   447,   451,
     452,   456,   457,   461,   465,   466,   472,   473,   474,   475,
     479,   480,   484,   485,   489,   493,   494,   497,   499
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
  "FOR", "SWITCH", "CASE", "DEFAULT", "ELSE", "BREAK", "LOWER_THAN_ELSE",
  "CAST", "UMINUS", "$accept", "program", "class_declaration_list",
  "class_declaration", "modificator", "object_modificators", "class_body",
  "core_body_sequence", "core_body", "block_body_sequence", "block_body",
  "instanciation_list", "instanciation", "creation_object",
  "constructor_declaration", "constructor_body", "method_declaration",
  "params", "param_list", "param_def", "assignment",
  "assignment_statement", "assign_statement", "variables_declaration",
  "constantes_declaration", "variables_init", "constantes_init",
  "variable_init", "block_statement", "statement", "print_statement",
  "method_prefix", "sufix_methode_list", "qualified_method_call",
  "simple_method_call", "method_call", "args", "arg_list", "arg_type",
  "if_statement", "control_body", "else_body",
  "block_statement_without_if", "while_statement", "for_statement",
  "for_init", "for_update", "foreach_statement", "switch_statement",
  "case_clauses", "case_clause", "break_opt", "default_clause_opt",
  "return_statement", "expression", "simple_expression",
  "inc_dec_statement", "premitive_type", "array_type", "type_abstract",
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
     325,   326,   327,   328,   329,   330
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      86,    86,    86,    86,    87,    87,    88,    89,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    96,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   106,   106,   107,   108,   108,
     109,   109,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   117,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   120,   121,   121,   121,   122,   122,   123,   123,   123,
     124,   125,   125,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     136,   136,   137,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   143,   143,   144,   144,   144,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149
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
       1,     5,     7,     7,     2,     3,     2,     1,     2,     3,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       5,     9,     1,     1,     0,     1,     0,     8,     8,     8,
       8,     0,     2,     5,     0,     2,     0,     3,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     4,     4,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
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
       0,     0,    17,   191,   192,   193,   190,     0,   189,   194,
     195,    10,    12,     0,    11,   196,     0,    16,     0,     0,
       0,   213,     0,     0,    18,    19,    24,    22,     0,     0,
       0,    21,     0,     0,    60,     0,     0,     0,     0,     0,
       0,     0,   199,     0,     0,    13,    15,     0,    14,    97,
     213,   185,   178,   183,   186,   180,   184,    26,     0,    49,
     198,    98,   199,    25,    23,     0,     0,     0,     5,    20,
      86,    89,    91,   212,   211,   197,    75,    76,    68,    72,
     200,     0,    67,    35,    87,    61,    62,    63,    64,    65,
      66,   187,   188,     0,   177,   179,     0,     0,   209,   181,
     182,     0,   210,     0,    74,    70,    69,    49,    27,   199,
       0,    50,    51,     0,     0,     0,    90,    92,    88,    99,
       0,    49,     0,     0,    49,     0,    49,     0,     0,     0,
     176,     0,   213,   175,     0,     0,   103,   104,   174,    57,
     167,   173,   172,   170,   171,     0,    58,     0,    59,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    75,    71,
       0,     0,   201,     0,     0,    36,     0,     0,    34,     0,
     168,   164,   213,     0,     0,     0,   105,   212,   211,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214,     0,    73,     0,    39,    52,     0,     0,
       0,   207,     0,     0,     0,     0,   169,     0,     0,   110,
       0,   106,   107,   109,   105,   105,   156,   157,   158,   159,
     160,   161,   162,   163,   151,   152,   153,   154,   155,   215,
       0,   148,     0,   213,     0,     0,     0,     0,     0,     0,
       0,    40,    29,     0,    31,    30,     0,     0,    81,    82,
      83,    84,    85,     0,     0,     0,     0,    80,     0,     0,
     203,   202,   204,     0,     0,   105,     0,   165,   166,   102,
       0,     0,     0,    47,     0,   150,   149,    32,     0,     0,
       0,     0,     0,   134,     0,    28,    38,    77,    78,    79,
     200,    45,     0,     0,     0,   208,    46,     0,     0,    48,
       0,   108,   100,   101,    43,    33,     0,     0,     0,     0,
       0,   199,   132,   133,     0,     0,     0,     0,     0,    41,
     205,     0,    42,    37,    44,     0,     0,     0,   227,   220,
     219,     0,     0,     0,     0,    75,     0,     0,     0,   206,
       0,     0,     0,     0,   221,   228,   218,   227,   217,     0,
       0,   117,   111,   130,     0,     0,     0,     0,   141,     0,
       0,     0,     0,   226,     0,   216,   114,     0,   116,     0,
     136,     0,     0,     0,   146,    95,     0,    96,     0,   224,
       0,   225,   115,     0,     0,     0,     0,   113,   112,   121,
     126,   127,   128,   129,     0,   125,   135,     0,     0,     0,
       0,     0,     0,   142,     0,    93,    94,     0,   118,     0,
     120,   122,   123,   124,     0,   137,   139,   138,     0,     0,
     140,   223,     0,   119,   131,     0,   147,   222,   144,     0,
     143,   145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   250,    33,    34,    35,   251,
     252,    92,    93,   219,    36,   253,    37,   120,   121,   122,
      87,    38,   103,    39,    40,    88,   115,    89,   254,   255,
     256,   144,   145,   146,   147,   148,   220,   221,   222,   258,
     362,   398,   399,   259,   260,   324,   407,   261,   262,   384,
     413,   440,   414,   263,   223,   150,   151,   264,   265,   266,
      48,   172,   270,   212,   152,   153,   154,   108,   267,   338,
     339,   372,   355,   356
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -324
static const yytype_int16 yypact[] =
{
     232,  -324,  -324,  -324,    47,   268,  -324,    50,  -324,  -324,
      37,    54,  2309,  -324,  -324,  -324,  -324,   373,  -324,  -324,
    -324,    84,   103,    71,   119,  -324,    63,  -324,    -4,    -4,
    2230,   135,   456,    98,  2309,  -324,  -324,  -324,   104,   113,
     117,  -324,    92,   121,  -324,    34,   134,   147,   123,   575,
     227,   735,  -324,   157,   157,  -324,  -324,   175,  -324,  -324,
     178,  -324,   187,   187,  -324,   187,   187,  -324,  2280,   520,
    -324,  -324,    29,  -324,  -324,   189,   191,   226,  -324,  -324,
    -324,  -324,  -324,  -324,   185,  -324,    46,  -324,   230,  -324,
      61,    70,   233,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,   615,  -324,  -324,   615,   615,   239,  -324,
    -324,   615,   239,   258,  -324,   236,   236,   520,  -324,   241,
     244,   240,  -324,    96,   242,   246,  -324,  -324,  -324,  -324,
     615,   520,   247,    60,   520,   286,   520,   250,   886,   615,
    -324,   711,    -1,  -324,   252,   254,  -324,  -324,  -324,  1872,
    -324,  -324,    30,    83,   106,  1212,  1872,   615,  1872,   157,
     269,   267,   520,  -324,  -324,  -324,  1872,   270,   258,  -324,
     373,   615,  -324,   271,   262,  -324,   273,   299,  -324,   615,
    -324,  -324,   164,  1478,   130,   276,   154,   278,    59,   886,
     886,   886,   886,   886,   886,   886,   886,   886,   886,   886,
     886,   886,  -324,  1278,  -324,   277,  2201,  -324,   279,   281,
     281,  1872,   140,   280,   288,   287,  -324,   615,   615,  -324,
     289,   272,  -324,  1872,   154,   154,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
     881,   154,   947,   151,   282,   291,   296,   302,   304,   305,
     384,  2201,  -324,   303,  -324,  -324,   308,   309,  -324,  -324,
    -324,  -324,  -324,   310,   170,   311,   250,  -324,  1013,   615,
     306,   306,  -324,   615,  1079,   154,  1145,  -324,  -324,  -324,
     154,   318,   319,  -324,  1211,  -324,  1872,  -324,  1277,   312,
    1343,   615,   615,   576,   615,  -324,  -324,  -324,  -324,  -324,
     347,  -324,  1409,  1344,   615,  1872,  -324,  1475,   324,  -324,
    1541,  -324,  -324,  -324,  -324,  -324,   320,    56,  1607,  1544,
    1610,   -14,  -324,  -324,   321,   177,   330,   344,  1676,  -324,
    -324,  1410,  -324,  -324,  -324,   197,   357,   328,    56,  -324,
    -324,    56,   807,   807,   615,    17,   348,    23,   358,  -324,
     359,   362,   353,  1673,  -324,  -324,  -324,    56,  -324,  1739,
     363,  -324,   338,  -324,  1146,   360,   361,   364,  -324,   942,
    1008,   367,   368,  -324,  1805,  -324,  -324,  1871,  -324,  2313,
     157,   380,   385,   386,   198,  -324,  1742,  -324,  1808,  -324,
     372,  -324,  -324,  1937,   378,   381,   382,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,   387,  -324,  -324,   390,   807,   807,
     807,   615,   389,  -324,   393,  -324,  -324,  2003,  -324,  2069,
    -324,  -324,  -324,  -324,   807,  -324,  -324,  -324,  1081,  2201,
    -324,  -324,  2135,  -324,  -324,  2201,  2201,  -324,   549,   395,
    -324,  -324
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,  -324,   431,  -324,     0,  -324,   411,     6,   -90,
     -81,  -324,   307,  -126,   416,  -324,   417,    82,  -324,   292,
     -52,  -315,   220,   -27,   -28,  -324,   396,   323,  -280,    20,
      72,   128,   137,  -324,  -324,   502,  -214,  -324,   173,    78,
    -323,  -324,  -324,    79,    89,  -324,  -324,    90,    95,  -324,
    -324,  -324,  -324,   100,   -58,   485,   422,     7,     1,    -9,
     -26,  -324,   265,  -324,   -12,    68,   231,   -37,   101,   142,
    -292,  -324,  -275,   124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -200
static const yytype_int16 yytable[] =
{
      49,   114,   114,    47,    76,    75,    77,   130,    54,   175,
     281,   282,    32,    46,   112,    26,    61,    64,    49,    45,
     363,    47,    49,    47,    53,    47,   112,   360,   360,   112,
      32,    46,    41,    46,    32,    46,    70,    45,   130,    45,
      79,    45,   340,   186,   135,   149,   354,     8,   155,   156,
      41,    60,    71,   158,    41,    10,    49,   101,   102,    47,
     125,   308,   361,   361,   394,   354,   358,   130,    32,    46,
     124,   365,   166,    69,    79,    45,   123,   367,   170,    70,
      50,   181,   133,   183,    85,   425,   426,   427,    41,    86,
     131,   135,    11,   360,   360,   360,    62,    65,    50,   203,
      12,   434,    50,   225,    55,   134,   171,   204,   125,   360,
     104,   105,   129,   211,   136,   285,    59,   112,   124,   336,
     337,   183,   125,    56,   123,   125,    57,   125,   361,   361,
     361,   106,   124,   109,   110,   124,    50,   124,   123,    58,
      42,   123,   185,   123,   361,    78,    85,    83,   184,    43,
     284,   163,   288,   125,   106,    80,    42,    42,    42,   277,
     278,   210,    42,   124,    81,    43,    43,    43,    82,   123,
     295,    43,   174,    26,    94,   217,    84,   209,   302,    69,
      85,    28,    29,   286,   307,    70,   310,   272,    71,    90,
    -199,   138,   273,   139,    49,   186,    42,   140,   141,   160,
     318,    70,    91,   295,    71,    43,  -199,   295,   186,   142,
     143,   303,   113,   167,    70,   305,   173,    71,   176,   117,
      85,   295,    76,    75,    77,   168,   295,    85,    49,   295,
      49,    71,   345,   319,   320,   106,   328,   295,   129,    49,
     126,   322,   127,    51,     1,     2,   331,     3,    95,    96,
      97,    98,    99,   100,   104,   105,    49,   350,   351,    63,
      66,    51,    49,   374,    49,    51,   323,   411,   412,   377,
     107,   111,    49,    -9,    50,   106,    49,   128,    49,   130,
       1,     2,   132,     3,   327,   137,   364,   157,   159,   161,
      49,    70,   162,   295,   326,    49,   295,   164,    49,    51,
     325,   165,   168,   419,   174,   177,    49,   187,    50,   188,
      50,   386,   388,   206,   205,   208,   213,   214,   215,    50,
     135,   218,   224,   240,   280,   268,   274,   432,   406,   269,
      49,    49,   275,   276,   279,   289,    50,   290,   295,   436,
     291,    49,    50,   371,    50,   438,   292,    49,   293,   294,
     296,   295,    50,   428,   304,   295,    50,   295,    50,   297,
     298,   299,    49,   312,   313,    49,   300,    49,   133,   333,
      50,   316,   344,   335,   353,    50,    13,    14,    50,    15,
      16,    49,    18,    19,    20,   346,    50,    13,    14,    25,
      15,    16,    17,    18,    19,    20,    49,    49,    49,   347,
      25,   352,   366,   369,   368,    49,   370,    49,    52,   379,
      50,    50,    49,   390,   378,   381,   382,    49,   417,   383,
      49,    50,   389,    49,    49,   408,    49,    50,    52,   420,
     409,   410,   421,   422,    44,   424,     9,    51,   423,   119,
     430,    68,    50,   429,   178,    50,   441,    50,    73,    74,
     116,   395,    44,   311,   207,   169,    44,   397,   400,    13,
      14,    50,    15,    16,    17,    18,    19,    20,   401,   402,
      23,    51,    25,    51,   403,   271,    50,    50,    50,   404,
     405,   375,    51,   357,     0,    50,     0,    50,     0,     0,
      44,     0,    50,     0,     0,     0,     0,    50,     0,    51,
      50,     0,     0,    50,    50,    51,    50,    51,     0,     0,
       0,    72,     0,     0,     0,    51,     0,     0,     0,    51,
       0,    51,     0,    13,    14,     0,    15,    16,     0,    18,
      19,    20,     0,    51,     0,     0,    25,     0,    51,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   241,     0,    26,    27,
       0,     0,     0,    51,    51,   119,    28,    29,     0,    13,
      14,     0,    15,    16,    51,    18,    19,    20,     0,     0,
      51,     0,    25,     0,     0,   242,    95,    96,    97,    98,
      99,   100,   101,   102,   243,    51,     0,   244,    51,     0,
      51,   245,     0,     0,   246,   247,   248,   249,     0,     0,
       0,   439,     0,   180,    51,     0,     0,     0,    44,     0,
       0,   321,     0,     0,    26,     0,     0,     0,     0,    51,
      51,    51,    28,    29,     0,     0,     0,     0,    51,     0,
      51,     0,   138,     0,   139,    51,     0,     0,   140,   141,
      51,     0,    44,    51,    44,     0,    51,    51,     0,    51,
     142,   143,     0,    44,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,     0,     0,     0,
      44,     0,     0,     0,     0,     0,    44,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    44,     0,   257,     0,
      44,     0,    44,     0,    13,    14,     0,    15,    16,     0,
      18,    19,    20,     0,    44,     0,     0,    25,     0,    44,
      26,     0,    44,     0,     0,     0,     0,     0,    28,    29,
      44,     0,   257,     0,   257,     0,     0,     0,   138,     0,
     139,     0,     0,   257,   140,   141,    95,    96,    97,    98,
      99,   100,   109,   110,    44,    44,   182,   143,     0,     0,
     257,     0,     0,     0,     0,    44,   257,     0,   257,     0,
       0,    44,     0,   106,     0,     0,   257,     0,     0,     0,
     257,     0,   257,     0,     0,     0,    44,     0,     0,    44,
       0,    44,     0,     0,   257,     0,     0,     0,     0,   257,
       0,     0,   257,     0,     0,    44,     0,     0,     0,     0,
     257,     0,     0,     0,   241,     0,    26,     0,     0,     0,
      44,    44,    44,     0,    28,    29,     0,     0,     0,    44,
       0,    44,     0,     0,   257,   257,    44,     0,     0,     0,
       0,    44,     0,   359,    44,   257,     0,    44,    44,     0,
      44,   257,   142,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   247,   248,   249,   257,     0,     0,   257,
       0,   396,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,   257,    24,    25,   241,     0,
      26,    27,     0,     0,     0,    26,     0,     0,    28,    29,
     257,   257,   257,    28,    29,     0,     0,     0,     0,   257,
       0,   257,     0,   138,     0,     0,   257,   242,   283,   140,
     179,   257,     0,     0,   257,     0,   243,   257,   257,   244,
     257,   142,   143,   245,     0,     0,   246,   247,   248,   249,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    26,    24,    25,   241,     0,    26,    27,     0,    28,
      29,     0,     0,     0,    28,    29,     0,     0,     0,   138,
       0,   139,     0,     0,     0,   140,   141,   385,     0,     0,
       0,     0,     0,   242,   287,     0,     0,   142,   143,     0,
       0,     0,   243,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   247,   248,   249,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    26,    24,    25,
     241,     0,    26,    27,     0,    28,    29,     0,     0,     0,
      28,    29,     0,     0,     0,   138,     0,   139,     0,     0,
       0,   140,   141,   387,     0,     0,     0,     0,     0,   242,
     301,     0,     0,   142,   143,     0,     0,     0,   243,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,   247,
     248,   249,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   241,     0,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,     0,   197,
     198,   199,   200,   201,     0,   242,   306,     0,     0,     0,
       0,     0,     0,     0,   243,   435,     0,   244,     0,     0,
       0,   245,     0,     0,   246,   247,   248,   249,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   241,     0,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,     0,   189,   190,   191,   192,   193,
     194,   195,   196,     0,   197,   198,   199,   200,   201,     0,
       0,   242,   309,     0,     0,     0,     0,   380,     0,     0,
     243,     0,     0,   244,     0,     0,     0,   245,     0,     0,
     246,   247,   248,   249,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   241,     0,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
       0,   189,   190,   191,   192,   193,   194,   195,   196,     0,
     197,   198,   199,   200,   201,     0,     0,   242,   314,     0,
       0,   202,     0,     0,     0,     0,   243,     0,     0,   244,
       0,     0,     0,   245,     0,     0,   246,   247,   248,   249,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   241,     0,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,     0,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   199,   200,
     201,     0,     0,   242,   315,     0,     0,   239,     0,     0,
       0,     0,   243,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   247,   248,   249,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     241,     0,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,     0,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,   200,   201,     0,     0,   242,
     317,     0,     0,   330,     0,     0,     0,     0,   243,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,   247,
     248,   249,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   241,     0,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,     0,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
     199,   200,   201,     0,     0,   242,   329,     0,     0,   349,
       0,     0,     0,     0,   243,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,   247,   248,   249,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   241,     0,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   199,   200,
     201,   242,   332,   216,     0,     0,     0,     0,     0,     0,
     243,     0,     0,   244,     0,     0,     0,   245,     0,     0,
     246,   247,   248,   249,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   241,     0,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,     0,   197,   198,   199,   200,   201,   242,   334,   342,
       0,     0,     0,     0,     0,     0,   243,     0,     0,   244,
       0,     0,     0,   245,     0,     0,   246,   247,   248,   249,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   241,     0,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,     0,   197,   198,
     199,   200,   201,   242,   341,   343,     0,     0,     0,     0,
       0,     0,   243,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   247,   248,   249,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     241,     0,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,     0,   197,   198,   199,   200,   201,   242,
     373,   348,     0,     0,     0,     0,     0,     0,   243,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,   247,
     248,   249,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   241,     0,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,     0,
     197,   198,   199,   200,   201,   242,   376,   415,     0,     0,
       0,     0,     0,     0,   243,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,   247,   248,   249,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   241,     0,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,     0,   197,   198,   199,   200,
     201,   242,   391,   416,     0,     0,     0,     0,     0,     0,
     243,     0,     0,   244,     0,     0,     0,   245,     0,     0,
     246,   247,   248,   249,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   241,     0,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
       0,   189,   190,   191,   192,   193,   194,   195,   196,     0,
     197,   198,   199,   200,   201,     0,     0,   242,   392,     0,
       0,     0,     0,     0,     0,     0,   243,     0,     0,   244,
       0,     0,     0,   245,     0,     0,   246,   247,   248,   249,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   241,     0,    26,    27,     0,     0,
       0,     0,     0,     0,    28,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   242,   418,     0,     0,     0,     0,     0,
       0,     0,   243,     0,     0,   244,     0,     0,     0,   245,
       0,     0,   246,   247,   248,   249,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     241,     0,    26,    27,     0,     0,     0,     0,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
     431,     0,     0,     0,     0,     0,     0,     0,   243,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,   247,
     248,   249,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   241,     0,    26,    27,
       0,     0,     0,     0,     0,     0,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   433,     0,     0,     0,
       0,     0,     0,     0,   243,     0,     0,   244,     0,     0,
       0,   245,     0,     0,   246,   247,   248,   249,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   241,     0,    26,    27,     0,     0,     0,     0,
       0,     0,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   437,     0,     0,     0,     0,     0,     0,     0,
     243,     0,     0,   244,     0,     0,     0,   245,     0,     0,
     246,   247,   248,   249,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   241,     0,
      26,    27,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   242,     0,    26,
      27,     0,     0,     0,     0,     0,   243,    28,    29,   244,
       0,     0,     0,   245,     0,     0,   246,   247,   248,   249,
       0,     0,     0,     0,     0,     0,    30,    67,     0,     0,
       0,     0,     0,    13,    14,    31,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
      27,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    30,   118,    26,    27,
     241,     0,    26,     0,     0,    31,    28,    29,     0,     0,
      28,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,   393,
       0,     0,     0,     0,    31,     0,     0,     0,   142,     0,
       0,   244,     0,     0,     0,   245,     0,     0,   246,   247,
     248,   249
};

static const yytype_int16 yycheck[] =
{
      12,    53,    54,    12,    32,    32,    32,    21,    17,   135,
     224,   225,    12,    12,    51,    19,    28,    29,    30,    12,
     343,    30,    34,    32,    17,    34,    63,   342,   343,    66,
      30,    30,    12,    32,    34,    34,    50,    30,    21,    32,
      34,    34,   317,    44,    21,   103,   338,     0,   106,   107,
      30,    55,    53,   111,    34,     5,    68,    27,    28,    68,
      69,   275,   342,   343,   379,   357,   341,    21,    68,    68,
      69,    54,   130,    44,    68,    68,    69,    54,    18,    50,
      12,   139,    21,   141,    50,   408,   409,   410,    68,    55,
      44,    21,    55,   408,   409,   410,    28,    29,    30,   157,
      46,   424,    34,    44,    20,    44,    46,   159,   117,   424,
      27,    28,    53,   171,    44,   241,    53,   154,   117,    63,
      64,   179,   131,    20,   117,   134,    55,   136,   408,   409,
     410,    48,   131,    27,    28,   134,    68,   136,   131,    20,
      12,   134,   141,   136,   424,    47,    50,    55,   141,    12,
     240,    55,   242,   162,    48,    51,    28,    29,    30,   217,
     218,   170,    34,   162,    51,    28,    29,    30,    51,   162,
     251,    34,    18,    19,    51,    45,    55,   170,   268,    44,
      50,    27,    28,   241,   274,    50,   276,    47,    53,    55,
      55,    37,    52,    39,   206,    44,    68,    43,    44,   117,
     290,    50,    55,   284,    53,    68,    55,   288,    44,    55,
      56,   269,    55,   131,    50,   273,   134,    53,   136,    44,
      50,   302,   250,   250,   250,    55,   307,    50,   240,   310,
     242,    53,    55,   291,   292,    48,   294,   318,    53,   251,
      51,   293,    51,    12,    12,    13,   304,    15,    21,    22,
      23,    24,    25,    26,    27,    28,   268,    60,    61,    28,
      29,    30,   274,   353,   276,    34,   293,    69,    70,   359,
      50,    51,   284,     5,   206,    48,   288,    51,   290,    21,
      12,    13,    52,    15,   293,    52,   344,    48,    52,    45,
     302,    50,    52,   374,   293,   307,   377,    55,   310,    68,
     293,    55,    55,   393,    18,    55,   318,    55,   240,    55,
     242,   369,   370,    46,    45,    45,    45,    55,    45,   251,
      21,    45,    44,    46,    52,    46,    46,   417,   380,    48,
     342,   343,    44,    46,    45,    53,   268,    46,   419,   429,
      44,   353,   274,   352,   276,   435,    44,   359,    44,    44,
      47,   432,   284,   411,    48,   436,   288,   438,   290,    51,
      51,    51,   374,    45,    45,   377,    55,   379,    21,    45,
     302,    59,    51,    53,    46,   307,     3,     4,   310,     6,
       7,   393,     9,    10,    11,    55,   318,     3,     4,    16,
       6,     7,     8,     9,    10,    11,   408,   409,   410,    55,
      16,    44,    54,    44,    46,   417,    44,   419,    55,    71,
     342,   343,   424,    45,    51,    55,    55,   429,    46,    55,
     432,   353,    55,   435,   436,    45,   438,   359,    55,    51,
      45,    45,    51,    51,    12,    45,     5,   206,    51,    55,
      47,    30,   374,    54,   137,   377,    51,   379,    32,    32,
      54,   379,    30,   280,   162,   132,    34,   379,   379,     3,
       4,   393,     6,     7,     8,     9,    10,    11,   379,   379,
      14,   240,    16,   242,   379,   210,   408,   409,   410,   379,
     379,   357,   251,   341,    -1,   417,    -1,   419,    -1,    -1,
      68,    -1,   424,    -1,    -1,    -1,    -1,   429,    -1,   268,
     432,    -1,    -1,   435,   436,   274,   438,   276,    -1,    -1,
      -1,    55,    -1,    -1,    -1,   284,    -1,    -1,    -1,   288,
      -1,   290,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    -1,   302,    -1,    -1,    16,    -1,   307,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,   342,   343,    55,    27,    28,    -1,     3,
       4,    -1,     6,     7,   353,     9,    10,    11,    -1,    -1,
     359,    -1,    16,    -1,    -1,    46,    21,    22,    23,    24,
      25,    26,    27,    28,    55,   374,    -1,    58,   377,    -1,
     379,    62,    -1,    -1,    65,    66,    67,    68,    -1,    -1,
      -1,    72,    -1,   138,   393,    -1,    -1,    -1,   206,    -1,
      -1,    55,    -1,    -1,    19,    -1,    -1,    -1,    -1,   408,
     409,   410,    27,    28,    -1,    -1,    -1,    -1,   417,    -1,
     419,    -1,    37,    -1,    39,   424,    -1,    -1,    43,    44,
     429,    -1,   240,   432,   242,    -1,   435,   436,    -1,   438,
      55,    56,    -1,   251,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    -1,    -1,   274,    -1,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,   206,    -1,
     288,    -1,   290,    -1,     3,     4,    -1,     6,     7,    -1,
       9,    10,    11,    -1,   302,    -1,    -1,    16,    -1,   307,
      19,    -1,   310,    -1,    -1,    -1,    -1,    -1,    27,    28,
     318,    -1,   240,    -1,   242,    -1,    -1,    -1,    37,    -1,
      39,    -1,    -1,   251,    43,    44,    21,    22,    23,    24,
      25,    26,    27,    28,   342,   343,    55,    56,    -1,    -1,
     268,    -1,    -1,    -1,    -1,   353,   274,    -1,   276,    -1,
      -1,   359,    -1,    48,    -1,    -1,   284,    -1,    -1,    -1,
     288,    -1,   290,    -1,    -1,    -1,   374,    -1,    -1,   377,
      -1,   379,    -1,    -1,   302,    -1,    -1,    -1,    -1,   307,
      -1,    -1,   310,    -1,    -1,   393,    -1,    -1,    -1,    -1,
     318,    -1,    -1,    -1,    17,    -1,    19,    -1,    -1,    -1,
     408,   409,   410,    -1,    27,    28,    -1,    -1,    -1,   417,
      -1,   419,    -1,    -1,   342,   343,   424,    -1,    -1,    -1,
      -1,   429,    -1,    46,   432,   353,    -1,   435,   436,    -1,
     438,   359,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,   374,    -1,    -1,   377,
      -1,   379,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,   393,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    19,    -1,    -1,    27,    28,
     408,   409,   410,    27,    28,    -1,    -1,    -1,    -1,   417,
      -1,   419,    -1,    37,    -1,    -1,   424,    46,    47,    43,
      44,   429,    -1,    -1,   432,    -1,    55,   435,   436,    58,
     438,    55,    56,    62,    -1,    -1,    65,    66,    67,    68,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    19,    15,    16,    17,    -1,    19,    20,    -1,    27,
      28,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    37,
      -1,    39,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    55,    56,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    19,    15,    16,
      17,    -1,    19,    20,    -1,    27,    28,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    37,    -1,    39,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    55,    56,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    42,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    54,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    46,    47,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    46,    47,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    -1,    -1,    46,
      47,    -1,    -1,    49,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    46,    47,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    46,    47,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    46,    47,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    39,
      40,    41,    42,    46,    47,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    40,    41,    42,    46,
      47,    45,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    46,    47,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    40,    41,
      42,    46,    47,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    -1,    65,    66,    67,    68,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    62,    -1,    -1,    65,    66,    67,    68,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    66,    67,    68,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    46,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    55,    27,    28,    58,
      -1,    -1,    -1,    62,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,     3,     4,    55,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    46,    47,    19,    20,
      17,    -1,    19,    -1,    -1,    55,    27,    28,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,    66,
      67,    68
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    77,    78,    79,    80,     0,    79,
       5,    55,    46,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    27,    28,
      46,    55,    81,    82,    83,    84,    90,    92,    97,    99,
     100,   105,   107,   108,   132,   133,   134,   135,   136,   140,
     141,   142,    55,   133,   135,    20,    20,    55,    20,    53,
      55,   140,   141,   142,   140,   141,   142,    47,    83,    44,
      50,    53,    55,    90,    92,    99,   100,   136,    47,    84,
      51,    51,    51,    55,    55,    50,    55,    96,   101,   103,
      55,    55,    87,    88,    51,    21,    22,    23,    24,    25,
      26,    27,    28,    98,    27,    28,    48,    98,   143,    27,
      28,    98,   143,    55,    96,   102,   102,    44,    47,    55,
      93,    94,    95,   133,   134,   135,    51,    51,    51,    53,
      21,    44,    52,    21,    44,    21,    44,    52,    37,    39,
      43,    44,    55,    56,   107,   108,   109,   110,   111,   130,
     131,   132,   140,   141,   142,   130,   130,    48,   130,    52,
      93,    45,    52,    55,    55,    55,   130,    93,    55,   103,
      18,    46,   137,    93,    18,    89,    93,    55,    88,    44,
     131,   130,    55,   130,   133,   134,    44,    55,    55,    29,
      30,    31,    32,    33,    34,    35,    36,    38,    39,    40,
      41,    42,    49,   130,    96,    45,    46,    95,    45,   133,
     135,   130,   139,    45,    55,    45,    45,    45,    45,    89,
     112,   113,   114,   130,    44,    44,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,    49,
      46,    17,    46,    55,    58,    62,    65,    66,    67,    68,
      81,    85,    86,    91,   104,   105,   106,   111,   115,   119,
     120,   123,   124,   129,   133,   134,   135,   144,    46,    48,
     138,   138,    47,    52,    46,    44,    46,   130,   130,    45,
      52,   112,   112,    47,    85,    89,   130,    47,    85,    53,
      46,    44,    44,    44,    44,    86,    47,    51,    51,    51,
      55,    47,    85,   130,    48,   130,    47,    85,   112,    47,
      85,   114,    45,    45,    47,    47,    59,    47,    85,   130,
     130,    55,    96,    99,   121,   133,   134,   135,   130,    47,
      49,   130,    47,    45,    47,    53,    63,    64,   145,   146,
     148,    47,    45,    45,    51,    55,    55,    55,    45,    49,
      60,    61,    44,    46,   146,   148,   149,   145,   148,    46,
      97,   104,   116,   116,   130,    54,    54,    54,    46,    44,
      44,   135,   147,    47,    85,   149,    47,    85,    51,    71,
      51,    55,    55,    55,   125,    45,   130,    45,   130,    55,
      45,    47,    47,    46,    97,   106,   111,   115,   117,   118,
     119,   120,   123,   124,   129,   144,    96,   122,    45,    45,
      45,    69,    70,   126,   128,    45,    45,    46,    47,    85,
      51,    51,    51,    51,    45,   116,   116,   116,   130,    54,
      47,    47,    85,    47,   116,    54,    85,    47,    85,    72,
     127,    51
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
#line 2226 "parse.tab.c"
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
#line 502 "parse.y"


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
