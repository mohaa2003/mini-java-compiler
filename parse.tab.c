
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
     UMINUS = 311
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
#line 185 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "parse.tab.c"

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
#define YYLAST   1310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNRULES -- Number of states.  */
#define YYNSTATES  315

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      55,    56
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
     247,   250,   253,   256,   258,   261,   263,   266,   268,   271,
     273,   276,   285,   288,   291,   295,   301,   307,   312,   314,
     316,   317,   319,   321,   325,   327,   329,   331,   334,   337,
     341,   345,   349,   353,   357,   361,   365,   369,   373,   377,
     381,   385,   389,   391,   393,   396,   398,   401,   405,   407,
     409,   411,   413,   415,   417,   419,   421,   423,   425,   427,
     429,   432,   435,   437,   441,   447,   451,   455,   459,   463,
     468,   470,   474,   477,   480,   483,   486,   488,   492,   497,
     504,   510,   516,   521,   523,   526,   534,   541,   544,   549,
     553,   554
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    60,    -1,    59,    60,    -1,
      61,     5,    47,    39,    63,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    64,    -1,    65,    -1,    64,    65,    -1,    85,
      -1,    73,    -1,    62,    73,    -1,    71,    -1,    62,    71,
      -1,    39,    40,    -1,    39,    64,    40,    -1,    66,    67,
      -1,    67,    -1,    85,    -1,    84,    -1,    39,    40,    -1,
      39,    66,    40,    -1,    68,    45,    69,    -1,    69,    -1,
      47,    21,    70,    -1,    18,    47,    37,    92,    38,    -1,
      47,    37,    74,    38,    39,    72,    40,    -1,    -1,    66,
      -1,    98,    47,    37,    74,    38,    39,    66,    40,    -1,
      99,    47,    37,    74,    38,    39,    66,    40,    -1,    14,
      47,    37,    74,    38,    39,    66,    40,    -1,   100,    47,
      37,    74,    38,    39,    66,    40,    -1,    98,    47,    37,
      74,    38,    39,    40,    -1,    99,    47,    37,    74,    38,
      39,    40,    -1,    14,    47,    37,    74,    38,    39,    40,
      -1,   100,    47,    37,    74,    38,    39,    40,    -1,    -1,
      75,    -1,    76,    -1,    75,    45,    76,    -1,    98,    47,
      -1,    99,    47,    -1,   100,    47,    -1,    47,    21,    96,
      -1,   105,    21,    96,    -1,   106,    21,    96,    -1,   107,
      21,    96,    -1,   100,    68,    44,    -1,    98,    81,    44,
      -1,     8,   100,    82,    44,    -1,     8,    98,    82,    44,
      -1,    81,    45,    83,    -1,    83,    -1,    82,    45,    77,
      -1,    77,    -1,    47,    -1,    77,    -1,    86,    44,    -1,
      91,    44,    -1,    95,    44,    -1,   109,    -1,    78,    44,
      -1,   101,    -1,    62,   101,    -1,    79,    -1,    62,    79,
      -1,    80,    -1,    62,    80,    -1,    50,    46,    51,    46,
      52,    37,    96,    38,    -1,    19,    46,    -1,    47,    46,
      -1,    88,    47,    46,    -1,    87,    47,    37,    92,    38,
      -1,    88,    47,    37,    92,    38,    -1,    47,    37,    92,
      38,    -1,    89,    -1,    90,    -1,    -1,    93,    -1,    94,
      -1,    93,    45,    94,    -1,    96,    -1,    70,    -1,    17,
      -1,    17,    96,    -1,    17,    70,    -1,    96,    31,    97,
      -1,    96,    32,    97,    -1,    96,    33,    97,    -1,    96,
      34,    97,    -1,    96,    35,    97,    -1,    96,    22,    97,
      -1,    96,    23,    97,    -1,    96,    24,    97,    -1,    96,
      25,    97,    -1,    96,    26,    97,    -1,    96,    27,    97,
      -1,    96,    28,    97,    -1,    96,    29,    97,    -1,   105,
      -1,    91,    -1,    32,    96,    -1,    97,    -1,    30,    97,
      -1,    37,    96,    38,    -1,   106,    -1,   107,    -1,    48,
      -1,    36,    -1,     9,    -1,     7,    -1,     3,    -1,     4,
      -1,     6,    -1,    10,    -1,    11,    -1,    16,    -1,    98,
      43,    -1,    47,    43,    -1,    47,    -1,    99,    47,    44,
      -1,    99,    47,    21,   102,    44,    -1,    18,   100,   103,
      -1,    18,    98,   103,    -1,    39,   104,    40,    -1,    41,
      96,    42,    -1,   103,    41,    96,    42,    -1,    96,    -1,
     104,    45,    96,    -1,   106,   108,    -1,   107,   108,    -1,
      88,    47,    -1,    87,    47,    -1,    47,    -1,    41,    96,
      42,    -1,   108,    41,    96,    42,    -1,    53,    39,    66,
      40,   110,   114,    -1,    53,    39,    66,    40,   113,    -1,
      53,    39,    40,   110,   114,    -1,    53,    39,    40,   113,
      -1,   111,    -1,   110,   111,    -1,    54,    37,   112,    38,
      39,    66,    40,    -1,    54,    37,   112,    38,    39,    40,
      -1,   100,    47,    -1,    55,    39,    66,    40,    -1,    55,
      39,    40,    -1,    -1,   113,    -1
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
     167,   168,   173,   174,   183,   184,   188,   189,   193,   193,
     197,   198,   199,   200,   207,   208,   209,   210,   211,   212,
     213,   217,   222,   227,   228,   232,   233,   237,   241,   242,
     246,   248,   252,   252,   256,   257,   285,   286,   287,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   312,   313,   314,   315,
     316,   317,   321,   321,   321,   321,   321,   321,   321,   321,
     325,   326,   330,   336,   337,   341,   342,   343,   347,   348,
     352,   353,   357,   358,   362,   363,   367,   371,   372,   378,
     379,   380,   381,   385,   386,   390,   391,   395,   399,   400,
     403,   405
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
  "PRINTLN", "TRY", "CATCH", "FINALLY", "UMINUS", "$accept", "program",
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
  "arg_list", "arg_type", "return_statement", "expression",
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    67,    67,    68,    68,    69,    70,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    77,    78,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    86,    87,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   101,   101,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   111,   111,   112,   113,   113,
     114,   114
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
       2,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     8,     2,     2,     3,     5,     5,     4,     1,     1,
       0,     1,     1,     3,     1,     1,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     2,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     3,     5,     3,     3,     3,     3,     4,
       1,     3,     2,     2,     2,     2,     1,     3,     4,     6,
       5,     5,     4,     1,     2,     7,     6,     2,     4,     3,
       0,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   124,   125,   126,   123,     0,   122,   127,
     128,    10,    12,     0,    11,   129,     0,    16,     0,   146,
       0,     0,    18,    19,    24,    22,     0,    77,    79,    21,
       0,     0,     0,     0,     0,    75,     0,     0,     0,   132,
       0,     0,    13,    15,     0,    14,    82,    26,     0,    49,
     131,    83,   132,    25,    23,    78,    80,    76,     5,    20,
      74,   145,   144,   130,    68,    69,     0,    65,     0,     0,
       0,    35,     0,     0,     0,   142,     0,   143,     0,    67,
       0,     0,    49,    27,   132,     0,    50,    51,     0,     0,
       0,    84,     0,    49,    61,     0,     0,    49,   133,     0,
      49,    60,     0,     0,     0,   121,     0,   146,   120,     0,
       0,    88,    89,   113,    57,   115,   112,   118,   119,    58,
       0,     0,    59,    63,     0,    62,     0,     0,     0,    53,
      54,    55,    56,     0,    68,    64,     0,     0,     0,     0,
       0,    36,     0,     0,    34,   146,   116,   118,   119,   114,
       0,    90,   145,   144,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,    66,
       0,    39,    52,     0,     0,     0,   140,     0,   134,     0,
       0,     0,   117,    95,     0,    91,    92,    94,    90,    90,
     104,   105,   106,   107,   108,   109,   110,   111,    99,   100,
     101,   102,   103,   148,     0,    96,     0,   146,     0,     0,
       0,    40,    29,     0,    31,    30,     0,     0,     0,     0,
       0,     0,    73,     0,     0,   136,   135,   137,     0,     0,
      90,     0,    87,     0,     0,     0,    47,     0,    98,    97,
      32,     0,     0,     0,    28,    38,    70,    71,    72,     0,
      45,     0,     0,     0,   141,    46,     0,     0,    48,     0,
      93,    85,    86,    43,    33,     0,     0,     0,    41,   138,
       0,    42,    37,    44,     0,     0,     0,   160,   153,   152,
       0,   139,     0,     0,     0,   154,   161,   151,   160,   150,
       0,     0,     0,   159,     0,   149,     0,   157,     0,   158,
      81,     0,   156,     0,   155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   220,    31,    32,    33,   221,
     222,    80,    81,   193,    34,   223,    35,    95,    96,    97,
      75,    36,    37,    38,    76,    90,    77,   224,   225,   226,
     119,   120,   121,   122,   123,   194,   195,   196,   228,   197,
     125,   229,   230,   231,    45,   148,   235,   187,    46,    47,
      48,    85,   232,   287,   288,   302,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -206
static const yytype_int16 yypact[] =
{
     175,  -206,  -206,  -206,    19,   163,  -206,    37,  -206,  -206,
      32,    45,  1131,  -206,  -206,  -206,  -206,   319,  -206,  -206,
    -206,    74,    82,    72,   109,  -206,    86,  -206,  1071,   137,
     217,   103,  1131,  -206,  -206,  -206,   101,  -206,  -206,  -206,
     100,   102,   -11,   104,   111,  -206,   135,    -7,    52,  -206,
     113,   113,  -206,  -206,   125,  -206,  -206,  -206,  1089,   514,
    -206,  -206,    -8,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,   120,  -206,    40,  -206,    95,  -206,    28,    46,
     173,  -206,  1129,  1129,  1129,   130,  1129,   130,   164,  -206,
     199,   203,   514,  -206,   153,   159,   156,  -206,    31,   172,
     187,  -206,  1129,   514,  -206,   193,    20,   514,  -206,   227,
     514,  -206,   205,    21,  1129,  -206,  1129,    29,  -206,   209,
     210,  -206,  -206,  -206,  1275,  -206,  -206,   181,   181,  1275,
    1157,  1129,  1275,  -206,   113,  -206,   213,   219,   514,  -206,
    -206,  -206,  1275,   225,   164,  -206,   319,  1129,   222,   229,
     231,  -206,   246,   265,  -206,   242,  -206,  -206,  -206,  -206,
    1241,   223,   253,    87,    21,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,  -206,  1178,  -206,
     254,  1023,  -206,   255,   251,   251,  1275,    -1,  -206,   256,
     259,   260,  -206,  -206,   271,   266,  -206,  1275,   223,   223,
    -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,   495,   223,   543,   152,   252,   273,
     297,  1023,  -206,   270,  -206,  -206,   275,   276,   277,    88,
     267,   205,  -206,   561,  1129,   283,   283,  -206,  1129,   609,
     223,   627,  -206,   223,   294,   295,  -206,   675,  -206,  1275,
    -206,   693,   285,   741,  -206,  -206,  -206,  -206,  -206,     6,
    -206,   759,  1199,  1129,  1275,  -206,   807,   299,  -206,   825,
    -206,  -206,  -206,  -206,  -206,   292,    42,   873,  -206,  -206,
    1220,  -206,  -206,  -206,   288,   304,   303,    42,  -206,  -206,
      42,  -206,   306,   300,   891,  -206,  -206,  -206,    42,  -206,
    1129,   301,   307,  -206,   939,  -206,  1258,  -206,   311,  -206,
    -206,   957,  -206,  1005,  -206
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -206,  -206,  -206,   341,  -206,    -2,  -206,   323,    -4,  -152,
      14,  -206,   240,   -85,   324,  -206,   325,    54,  -206,   215,
     -42,  -206,   -29,   -27,  -206,   305,   258,  -206,     5,  -206,
     204,   218,  -206,  -206,   184,  -192,  -206,   114,  -206,    34,
     298,   257,   384,   -12,   -26,  -206,   174,  -206,   -71,   -61,
      39,   -46,  -206,    68,  -199,  -206,  -205,    63
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -133
static const yytype_int16 yytable[] =
{
      44,    65,    87,    66,    67,    51,   244,   245,    89,    89,
      30,   126,   126,   126,    83,   126,    44,    39,    44,     8,
      44,   127,   127,   127,   151,   127,    30,   106,    69,    59,
      30,   126,    73,    39,    84,    60,    74,    39,   146,   237,
      26,   127,    10,   126,   238,   126,    44,   100,   267,   106,
     108,   113,   157,   127,    69,   127,    30,   115,   116,   147,
     126,   102,   247,    39,   251,   107,   161,   109,   155,   118,
     127,   289,   108,    86,    73,    61,   126,   103,   139,    11,
     100,   261,    87,   110,    12,   299,   127,   266,   295,   269,
     126,   100,   179,    84,    52,   100,   285,   286,   100,   295,
     127,   277,    53,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   124,   129,   130,    54,
     132,   128,   128,   128,   199,   128,   100,   126,   126,    55,
     248,    73,    56,   101,   185,   144,   142,   127,   127,   104,
     105,   128,   304,    68,   126,    70,   136,    71,   159,    72,
     160,    78,   158,   128,   127,   128,    82,   143,    79,   313,
      88,   149,    92,   126,   152,   178,   101,   126,    -9,   126,
     128,   131,   126,   127,    59,     1,     2,   127,     3,   127,
      60,   186,   127,    61,  -132,   102,   128,     1,     2,   161,
       3,    65,   126,    66,    67,    60,    60,   137,    61,  -132,
     128,   138,   127,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,    40,   111,   112,   140,
      13,    14,    84,    15,    16,    17,    18,    19,    20,   126,
      41,    23,    40,    25,   141,   254,    40,   128,   128,   127,
     144,   150,    26,   133,   134,   150,    41,   135,   134,   249,
      41,   180,   153,   113,   128,   114,   162,   163,   181,   115,
     116,   254,    40,   183,    62,   254,   188,   189,   262,    42,
     117,   118,   264,   128,    50,   254,    41,   128,   190,   128,
     254,   301,   128,   254,   191,    42,   109,    42,    61,    42,
     198,   254,   234,   214,   233,   239,   240,   280,   252,   241,
      13,    14,   128,    15,    16,    17,    18,    19,    20,   242,
     255,   243,   253,    25,   259,    42,    98,    40,   254,   256,
     257,   258,    13,    14,   263,    15,    16,   254,    18,    19,
      20,    41,   271,   272,   306,    25,   275,   282,   284,   128,
     292,   293,   294,   300,    94,   308,     9,    49,   307,    98,
     311,    58,   154,   182,    63,    64,    91,   270,   298,   236,
      98,   305,     0,   145,    98,   227,    49,    98,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,     0,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    98,    43,     0,   227,     0,
     227,     0,     0,   184,     0,   227,     0,     0,     0,     0,
       0,   156,    43,     0,    43,     0,    43,   227,     0,     0,
       0,     0,     0,   227,     0,   227,     0,     0,     0,     0,
       0,   227,     0,     0,     0,   227,     0,   227,     0,     0,
       0,     0,    43,    99,     0,   227,     0,     0,     0,     0,
     227,     0,     0,   227,     0,     0,     0,     0,     0,     0,
       0,   227,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,     0,    99,     0,   227,     0,
       0,     0,     0,     0,     0,     0,     0,    99,   227,     0,
       0,    99,     0,     0,    99,   227,     0,   227,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,    13,    14,     0,
      15,    16,    99,    18,    19,    20,     0,     0,     0,     0,
      25,     0,     0,     0,   216,   246,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,    13,    14,   219,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,    94,    26,    27,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,   216,   250,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,     0,
     216,   260,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,    13,    14,   219,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   216,   265,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,     0,   216,   268,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,    13,    14,
     219,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   216,   273,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,     0,   216,   274,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,    13,    14,   219,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     216,   276,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,     0,   216,   278,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
      13,    14,   219,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,   216,   281,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,     0,   216,   283,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,    13,    14,   219,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,   216,   290,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,     0,
     216,   303,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,    13,    14,   219,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   216,   309,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,     0,   216,   312,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,    13,    14,
     219,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   216,   314,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,     0,   216,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,    13,    14,   219,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
      28,    57,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,    93,
       0,     0,     0,     0,    13,    14,    29,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,   113,
       0,   114,     0,     0,     0,   115,   116,     0,     0,     0,
      28,     0,     0,     0,     0,     0,   117,   118,    29,   164,
     165,   166,   167,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,   177,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,     0,     0,     0,     0,
     213,   164,   165,   166,   167,   168,   169,   170,   171,     0,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
       0,   279,   164,   165,   166,   167,   168,   169,   170,   171,
       0,   172,   173,   174,   175,   176,     0,     0,     0,     0,
       0,     0,   291,   164,   165,   166,   167,   168,   169,   170,
     171,     0,   172,   173,   174,   175,   176,     0,     0,   192,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,   310,   164,   165,   166,
     167,   168,   169,   170,   171,     0,   172,   173,   174,   175,
     176
};

static const yytype_int16 yycheck[] =
{
      12,    30,    48,    30,    30,    17,   198,   199,    50,    51,
      12,    82,    83,    84,    21,    86,    28,    12,    30,     0,
      32,    82,    83,    84,   109,    86,    28,    21,    32,    37,
      32,   102,    43,    28,    41,    43,    47,    32,    18,    40,
      19,   102,     5,   114,    45,   116,    58,    59,   240,    21,
      44,    30,   113,   114,    58,   116,    58,    36,    37,    39,
     131,    21,   214,    58,   216,    37,    37,    21,    47,    48,
     131,   276,    44,    21,    43,    46,   147,    37,    47,    47,
      92,   233,   128,    37,    39,   290,   147,   239,   287,   241,
     161,   103,   134,    41,    20,   107,    54,    55,   110,   298,
     161,   253,    20,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    82,    83,    84,    47,
      86,    82,    83,    84,    37,    86,   138,   198,   199,    20,
     215,    43,    46,    46,   146,    47,   102,   198,   199,    44,
      45,   102,   294,    40,   215,    44,    92,    47,   114,    47,
     116,    47,   113,   114,   215,   116,    21,   103,    47,   311,
      47,   107,    37,   234,   110,   131,    46,   238,     5,   240,
     131,    41,   243,   234,    37,    12,    13,   238,    15,   240,
      43,   147,   243,    46,    47,    21,   147,    12,    13,    37,
      15,   220,   263,   220,   220,    43,    43,    38,    46,    47,
     161,    45,   263,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,    12,    44,    45,    47,
       3,     4,    41,     6,     7,     8,     9,    10,    11,   300,
      12,    14,    28,    16,    47,   221,    32,   198,   199,   300,
      47,    18,    19,    44,    45,    18,    28,    44,    45,   215,
      32,    38,    47,    30,   215,    32,    47,    47,    39,    36,
      37,   247,    58,    38,    47,   251,    44,    38,   234,    12,
      47,    48,   238,   234,    17,   261,    58,   238,    47,   240,
     266,   293,   243,   269,    38,    28,    21,    30,    46,    32,
      37,   277,    41,    39,    39,    39,    37,   263,    46,    39,
       3,     4,   263,     6,     7,     8,     9,    10,    11,    38,
      40,    45,    39,    16,    47,    58,    59,   113,   304,    44,
      44,    44,     3,     4,    41,     6,     7,   313,     9,    10,
      11,   113,    38,    38,   300,    16,    51,    38,    46,   300,
      52,    37,    39,    37,    47,    38,     5,    47,    47,    92,
      39,    28,   112,   138,    30,    30,    51,   243,   290,   185,
     103,   298,    -1,   105,   107,   181,    47,   110,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   138,    12,    -1,   214,    -1,
     216,    -1,    -1,   146,    -1,   221,    -1,    -1,    -1,    -1,
      -1,   113,    28,    -1,    30,    -1,    32,   233,    -1,    -1,
      -1,    -1,    -1,   239,    -1,   241,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,
      -1,    -1,    58,    59,    -1,   261,    -1,    -1,    -1,    -1,
     266,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   277,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    -1,    92,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   304,    -1,
      -1,   107,    -1,    -1,   110,   311,    -1,   313,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,     3,     4,    -1,
       6,     7,   138,     9,    10,    11,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,     3,     4,    53,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    47,    19,    20,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,     3,     4,    53,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,     3,     4,
      53,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,     3,     4,    53,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
       3,     4,    53,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,     3,     4,    53,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,     3,     4,    53,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,     3,     4,
      53,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,     3,     4,    53,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    20,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,     3,     4,    47,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    19,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    47,    48,    47,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    -1,    38,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    38,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    58,    59,    60,    61,     0,    60,
       5,    47,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    39,    47,
      62,    63,    64,    65,    71,    73,    78,    79,    80,    85,
      87,    88,    98,    99,   100,   101,   105,   106,   107,    47,
      98,   100,    20,    20,    47,    20,    46,    40,    64,    37,
      43,    46,    47,    71,    73,    79,    80,   101,    40,    65,
      44,    47,    47,    43,    47,    77,    81,    83,    47,    47,
      68,    69,    21,    21,    41,   108,    21,   108,    47,    77,
      82,    82,    37,    40,    47,    74,    75,    76,    98,    99,
     100,    46,    21,    37,    44,    45,    21,    37,    44,    21,
      37,    44,    45,    30,    32,    36,    37,    47,    48,    87,
      88,    89,    90,    91,    96,    97,   105,   106,   107,    96,
      96,    41,    96,    44,    45,    44,    74,    38,    45,    47,
      47,    47,    96,    74,    47,    83,    18,    39,   102,    74,
      18,    70,    74,    47,    69,    47,    97,   106,   107,    96,
      96,    37,    47,    47,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    32,    33,    34,    35,    42,    96,    77,
      38,    39,    76,    38,    98,   100,    96,   104,    44,    38,
      47,    38,    38,    70,    92,    93,    94,    96,    37,    37,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    42,    39,    17,    39,    47,    50,    53,
      62,    66,    67,    72,    84,    85,    86,    91,    95,    98,
      99,   100,   109,    39,    41,   103,   103,    40,    45,    39,
      37,    39,    38,    45,    92,    92,    40,    66,    70,    96,
      40,    66,    46,    39,    67,    40,    44,    44,    44,    47,
      40,    66,    96,    41,    96,    40,    66,    92,    40,    66,
      94,    38,    38,    40,    40,    51,    40,    66,    40,    42,
      96,    40,    38,    40,    46,    54,    55,   110,   111,   113,
      40,    42,    52,    37,    39,   111,   113,   114,   110,   113,
      37,   100,   112,    40,    66,   114,    96,    47,    38,    40,
      38,    39,    40,    66,    40
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
#line 1891 "parse.tab.c"
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
#line 408 "parse.y"


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
