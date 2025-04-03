
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
     UMINUS = 308
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
#line 182 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 194 "parse.tab.c"

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
#define YYLAST   999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
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
     247,   250,   253,   256,   259,   261,   264,   266,   269,   271,
     274,   283,   286,   289,   293,   299,   305,   310,   312,   314,
     315,   317,   319,   323,   325,   327,   329,   332,   335,   339,
     343,   347,   351,   355,   359,   363,   367,   371,   375,   379,
     383,   387,   389,   391,   394,   396,   399,   403,   405,   407,
     409,   411,   413,   415,   417,   419,   421,   423,   425,   427,
     430,   433,   435,   439,   445,   449,   453,   457,   461,   466,
     468,   472,   475,   478,   481,   484,   486,   490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    57,    -1,    56,    57,    -1,
      58,     5,    47,    39,    60,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    61,    -1,    62,    -1,    61,    62,    -1,    82,
      -1,    70,    -1,    59,    70,    -1,    68,    -1,    59,    68,
      -1,    39,    40,    -1,    39,    61,    40,    -1,    63,    64,
      -1,    64,    -1,    82,    -1,    81,    -1,    39,    40,    -1,
      39,    63,    40,    -1,    65,    45,    66,    -1,    66,    -1,
      47,    21,    67,    -1,    18,    47,    37,    89,    38,    -1,
      47,    37,    71,    38,    39,    69,    40,    -1,    -1,    63,
      -1,    95,    47,    37,    71,    38,    39,    63,    40,    -1,
      96,    47,    37,    71,    38,    39,    63,    40,    -1,    14,
      47,    37,    71,    38,    39,    63,    40,    -1,    97,    47,
      37,    71,    38,    39,    63,    40,    -1,    95,    47,    37,
      71,    38,    39,    40,    -1,    96,    47,    37,    71,    38,
      39,    40,    -1,    14,    47,    37,    71,    38,    39,    40,
      -1,    97,    47,    37,    71,    38,    39,    40,    -1,    -1,
      72,    -1,    73,    -1,    72,    45,    73,    -1,    95,    47,
      -1,    96,    47,    -1,    97,    47,    -1,    47,    21,    93,
      -1,   102,    21,    93,    -1,   103,    21,    93,    -1,   104,
      21,    93,    -1,    97,    65,    44,    -1,    95,    78,    44,
      -1,     8,    97,    79,    44,    -1,     8,    95,    79,    44,
      -1,    78,    45,    80,    -1,    80,    -1,    79,    45,    74,
      -1,    74,    -1,    47,    -1,    74,    -1,    83,    44,    -1,
      88,    44,    -1,    92,    44,    -1,    75,    44,    -1,    98,
      -1,    59,    98,    -1,    76,    -1,    59,    76,    -1,    77,
      -1,    59,    77,    -1,    50,    46,    51,    46,    52,    37,
      93,    38,    -1,    19,    46,    -1,    47,    46,    -1,    85,
      47,    46,    -1,    84,    47,    37,    89,    38,    -1,    85,
      47,    37,    89,    38,    -1,    47,    37,    89,    38,    -1,
      86,    -1,    87,    -1,    -1,    90,    -1,    91,    -1,    90,
      45,    91,    -1,    93,    -1,    67,    -1,    17,    -1,    17,
      93,    -1,    17,    67,    -1,    93,    31,    94,    -1,    93,
      32,    94,    -1,    93,    33,    94,    -1,    93,    34,    94,
      -1,    93,    35,    94,    -1,    93,    22,    94,    -1,    93,
      23,    94,    -1,    93,    24,    94,    -1,    93,    25,    94,
      -1,    93,    26,    94,    -1,    93,    27,    94,    -1,    93,
      28,    94,    -1,    93,    29,    94,    -1,   102,    -1,    88,
      -1,    32,    93,    -1,    94,    -1,    30,    94,    -1,    37,
      93,    38,    -1,   103,    -1,   104,    -1,    48,    -1,    36,
      -1,     9,    -1,     7,    -1,     3,    -1,     4,    -1,     6,
      -1,    10,    -1,    11,    -1,    16,    -1,    95,    43,    -1,
      47,    43,    -1,    47,    -1,    96,    47,    44,    -1,    96,
      47,    21,    99,    44,    -1,    18,    97,   100,    -1,    18,
      95,   100,    -1,    39,   101,    40,    -1,    41,    93,    42,
      -1,   100,    41,    93,    42,    -1,    93,    -1,   101,    45,
      93,    -1,   103,   105,    -1,   104,   105,    -1,    85,    47,
      -1,    84,    47,    -1,    47,    -1,    41,    93,    42,    -1,
     105,    41,    93,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    51,    55,    59,    60,    61,    61,
      65,    66,    67,    68,    69,    70,    71,    74,    76,    80,
      81,    85,    86,    87,    88,    89,    90,    91,    95,    96,
     100,   101,   102,   103,   107,   108,   112,   116,   120,   123,
     125,   130,   131,   132,   133,   134,   135,   136,   137,   140,
     142,   146,   146,   150,   151,   152,   156,   160,   161,   162,
     166,   167,   172,   173,   182,   183,   187,   188,   192,   192,
     196,   197,   198,   205,   206,   207,   208,   209,   210,   211,
     215,   220,   225,   226,   230,   231,   235,   239,   240,   244,
     246,   250,   250,   254,   255,   283,   284,   285,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   310,   311,   312,   313,   314,
     315,   319,   319,   319,   319,   319,   319,   319,   319,   323,
     324,   328,   334,   335,   339,   340,   341,   345,   346,   350,
     351,   355,   356,   360,   361,   365,   369,   370
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
  "PRINTLN", "UMINUS", "$accept", "program", "class_declaration_list",
  "class_declaration", "modificator", "object_modificators", "class_body",
  "core_body_sequence", "core_body", "block_body_sequence", "block_body",
  "instanciation_list", "instanciation", "creation_object",
  "constructor_declaration", "constructor_body", "method_declaration",
  "params", "param_list", "param_def", "assignment",
  "assignment_statement", "variables_declaration",
  "constantes_declaration", "variables_init", "constantes_init",
  "variable_init", "block_statement", "statement", "print_statement",
  "method_prefix", "sufix_methode_list", "qualified_method_call",
  "simple_method_call", "method_call", "args", "arg_list", "arg_type",
  "return_statement", "expression", "simple_expression", "premitive_type",
  "array_type", "type_abstract", "array_declaration",
  "array_initialization", "array_dimensions", "array_elements",
  "array_access", "qualified_access", "simple_access", "array_indices", 0
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    58,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    64,    64,    64,    65,    65,    66,    67,    68,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    72,    72,    73,    73,    73,    74,    75,    75,    75,
      76,    76,    77,    77,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      83,    84,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      96,    97,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   105,   105
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
       2,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       8,     2,     2,     3,     5,     5,     4,     1,     1,     0,
       1,     1,     3,     1,     1,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     3,     5,     3,     3,     3,     3,     4,     1,
       3,     2,     2,     2,     2,     1,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    17,   123,   124,   125,   122,     0,   121,   126,
     127,    10,    12,     0,    11,   128,     0,    16,     0,   145,
       0,     0,    18,    19,    24,    22,     0,    76,    78,    21,
       0,     0,     0,     0,     0,    74,     0,     0,     0,   131,
       0,     0,    13,    15,     0,    14,    81,    26,     0,    49,
     130,    82,   131,    25,    23,    77,    79,    75,     5,    20,
      73,   144,   143,   129,    68,    69,     0,    65,     0,     0,
       0,    35,     0,     0,     0,   141,     0,   142,     0,    67,
       0,     0,    49,    27,   131,     0,    50,    51,     0,     0,
       0,    83,     0,    49,    61,     0,     0,    49,   132,     0,
      49,    60,     0,     0,     0,   120,     0,   145,   119,     0,
       0,    87,    88,   112,    57,   114,   111,   117,   118,    58,
       0,     0,    59,    63,     0,    62,     0,     0,     0,    53,
      54,    55,    56,     0,    68,    64,     0,     0,     0,     0,
       0,    36,     0,     0,    34,   145,   115,   117,   118,   113,
       0,    89,   144,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,    66,
       0,    39,    52,     0,     0,     0,   139,     0,   133,     0,
       0,     0,   116,    94,     0,    90,    91,    93,    89,    89,
     103,   104,   105,   106,   107,   108,   109,   110,    98,    99,
     100,   101,   102,   147,     0,    95,     0,   145,     0,     0,
      40,    29,     0,    31,    30,     0,     0,     0,     0,     0,
       0,     0,     0,   135,   134,   136,     0,     0,    89,     0,
      86,     0,     0,     0,    47,     0,    97,    96,    32,     0,
       0,    28,    38,    70,    71,    72,     0,    45,     0,     0,
       0,   140,    46,     0,     0,    48,     0,    92,    84,    85,
      43,    33,     0,    41,   137,     0,    42,    37,    44,     0,
     138,     0,     0,     0,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   219,    31,    32,    33,   220,
     221,    80,    81,   193,    34,   222,    35,    95,    96,    97,
      75,    36,    37,    38,    76,    90,    77,   223,   224,   225,
     119,   120,   121,   122,   123,   194,   195,   196,   227,   197,
     125,   228,   229,   230,    45,   148,   233,   187,   126,   127,
     128,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -214
static const yytype_int16 yypact[] =
{
      82,  -214,  -214,  -214,    12,   132,  -214,    24,  -214,  -214,
      17,    32,   841,  -214,  -214,  -214,  -214,   442,  -214,  -214,
    -214,    61,    90,    83,    94,  -214,    93,  -214,   781,    81,
     312,    89,   841,  -214,  -214,  -214,    97,  -214,  -214,  -214,
      99,   118,    27,   123,   126,  -214,   130,     6,    31,  -214,
     147,   147,  -214,  -214,   159,  -214,  -214,  -214,   799,   820,
    -214,  -214,    20,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,   152,  -214,    41,  -214,   104,  -214,     4,    56,
     143,  -214,    85,    85,    85,   162,    85,   162,   179,  -214,
     168,   194,   820,  -214,   163,   180,   170,  -214,    66,   174,
     176,  -214,    85,   820,  -214,   182,    -9,   820,  -214,   213,
     820,  -214,   187,   839,    85,  -214,    85,   -23,  -214,   193,
     195,  -214,  -214,  -214,   964,  -214,  -214,   202,   202,   964,
     359,    85,   964,  -214,   147,  -214,   206,   209,   820,  -214,
    -214,  -214,   964,   207,   179,  -214,   442,    85,   212,   219,
     203,  -214,   220,   239,  -214,   223,  -214,  -214,  -214,  -214,
     930,   234,   228,    39,   839,   839,   839,   839,   839,   839,
     839,   839,   839,   839,   839,   839,   839,  -214,   867,  -214,
     233,   736,  -214,   235,   236,   236,   964,    67,  -214,   240,
     238,   241,  -214,  -214,   245,   242,  -214,   964,   234,   234,
    -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,  -214,
    -214,  -214,  -214,  -214,   421,   234,   466,   164,   243,   291,
     736,  -214,   248,  -214,  -214,   247,   249,   259,   125,   257,
     187,   484,    85,   265,   265,  -214,    85,   529,   234,   547,
    -214,   234,   270,   273,  -214,   592,  -214,   964,  -214,   610,
     261,  -214,  -214,  -214,  -214,  -214,   -11,  -214,   655,   888,
      85,   964,  -214,   673,   286,  -214,   718,  -214,  -214,  -214,
    -214,  -214,   284,  -214,  -214,   909,  -214,  -214,  -214,   279,
    -214,   295,    85,   947,  -214
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -214,  -214,  -214,   280,  -214,     3,  -214,   305,     7,   -17,
    -213,  -214,   222,  -107,   306,  -214,   307,    33,  -214,   197,
     -45,  -214,   -29,   -27,  -214,   288,   253,  -214,    68,  -214,
     177,   204,  -214,  -214,  -147,  -155,  -214,   113,  -214,   -65,
     244,    -4,    28,   297,   -26,  -214,   155,  -214,    47,   -12,
      10,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -132
static const yytype_int16 yytable[] =
{
      47,    65,   151,    66,    67,    89,    89,   251,    42,   146,
     106,    87,     8,    50,   161,    30,    47,   124,   129,   130,
      47,   132,    48,    61,    42,   106,    42,    83,    42,    10,
     147,    30,   251,   108,   226,    30,   251,   142,    48,    69,
      43,   107,    48,   242,   243,   251,    47,    84,   108,   159,
     251,   160,    86,   251,    42,    98,    43,    59,    43,    46,
      43,    30,   102,    60,    11,    69,   178,   226,    48,   226,
      73,    12,    84,   226,    74,    46,   199,   109,   103,    46,
      39,    52,   186,   264,   226,   101,    43,    99,    98,   179,
     226,    87,   226,   110,     1,     2,    39,     3,   226,    98,
      39,   157,   226,    98,    26,    46,    98,   235,   246,    73,
      53,   226,   236,   139,    55,   113,   226,   114,    59,   226,
      99,   115,   116,   158,    60,   136,    39,    61,  -131,    68,
      54,    99,   117,   118,    98,    99,   143,    -9,    99,    56,
     149,    70,   184,   152,     1,     2,    71,     3,   104,   105,
     247,    82,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,    72,    99,   259,    73,    47,
      78,   261,   144,    79,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   111,   112,    40,
      65,    48,    66,    67,    88,   275,    92,   245,   101,   249,
     102,   161,    47,   131,    47,    40,    60,    60,    47,    40,
      61,  -131,   133,   134,   258,   138,    41,   283,   137,    47,
     263,   140,   266,   141,    48,    47,    48,    47,    46,   144,
      48,   150,    41,    47,   153,    40,    41,    47,   135,   134,
     162,    48,   163,    84,   180,   183,    47,    48,   181,    48,
     190,    47,   150,    26,    47,    48,   188,   189,   191,    48,
     109,    46,    41,    46,   113,   198,   114,    46,    48,    61,
     115,   116,   214,    48,   231,   238,    48,   232,    46,   237,
     239,   117,   118,   240,    46,     9,    46,   241,   252,   250,
      40,   253,    46,   254,    13,    14,    46,    15,    16,    17,
      18,    19,    20,   255,   256,    46,   260,    25,   268,    44,
      46,   269,   272,    46,    51,    13,    14,    41,    15,    16,
      17,    18,    19,    20,   277,    44,    23,    44,    25,    44,
     279,   281,   282,    58,   154,   182,    63,    64,    94,    91,
     234,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,   267,    44,   100,   156,   145,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   100,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
     100,   177,     0,     0,   100,     0,     0,   100,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,     0,     0,     0,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,   100,    24,    25,   215,     0,
      26,    27,     0,   185,     0,    13,    14,     0,    15,    16,
       0,    18,    19,    20,     0,     0,     0,     0,    25,     0,
     216,   244,     0,     0,     0,     0,     0,     0,   217,    13,
      14,   218,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   215,     0,    26,    27,    13,    14,    49,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   216,   248,     0,     0,     0,
       0,     0,     0,   217,     0,     0,   218,     0,     0,     0,
       0,     0,     0,   216,   257,     0,     0,     0,     0,     0,
       0,   217,    13,    14,   218,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   216,   262,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,     0,     0,     0,     0,   216,   265,     0,     0,
       0,     0,     0,     0,   217,    13,    14,   218,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   215,
       0,    26,    27,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   215,     0,    26,
      27,   216,   270,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,     0,     0,     0,     0,     0,   216,
     271,     0,     0,     0,     0,     0,     0,   217,    13,    14,
     218,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   216,   273,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,     0,     0,
       0,     0,   216,   276,     0,     0,     0,     0,     0,     0,
     217,    13,    14,   218,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   215,     0,    26,    27,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   215,     0,    26,    27,   216,   278,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   218,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,   217,    13,    14,   218,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,    27,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,    27,
      28,    57,     0,    13,    14,     0,    15,    16,    29,    18,
      19,    20,     0,     0,     0,     0,    25,     0,    28,    93,
       0,     0,     0,     0,    13,    14,    29,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
      26,    27,     0,     0,     0,     0,     0,    94,     0,   113,
       0,     0,     0,     0,     0,   115,   116,     0,     0,     0,
      28,     0,     0,     0,     0,     0,   155,   118,    29,   164,
     165,   166,   167,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,     0,     0,     0,     0,   213,
     164,   165,   166,   167,   168,   169,   170,   171,     0,   172,
     173,   174,   175,   176,     0,     0,     0,     0,     0,     0,
     274,   164,   165,   166,   167,   168,   169,   170,   171,     0,
     172,   173,   174,   175,   176,     0,     0,     0,     0,     0,
       0,   280,   164,   165,   166,   167,   168,   169,   170,   171,
       0,   172,   173,   174,   175,   176,     0,     0,   192,   164,
     165,   166,   167,   168,   169,   170,   171,     0,   172,   173,
     174,   175,   176,     0,     0,   284,   164,   165,   166,   167,
     168,   169,   170,   171,     0,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
      12,    30,   109,    30,    30,    50,    51,   220,    12,    18,
      21,    48,     0,    17,    37,    12,    28,    82,    83,    84,
      32,    86,    12,    46,    28,    21,    30,    21,    32,     5,
      39,    28,   245,    44,   181,    32,   249,   102,    28,    32,
      12,    37,    32,   198,   199,   258,    58,    41,    44,   114,
     263,   116,    21,   266,    58,    59,    28,    37,    30,    12,
      32,    58,    21,    43,    47,    58,   131,   214,    58,   216,
      43,    39,    41,   220,    47,    28,    37,    21,    37,    32,
      12,    20,   147,   238,   231,    46,    58,    59,    92,   134,
     237,   128,   239,    37,    12,    13,    28,    15,   245,   103,
      32,   113,   249,   107,    19,    58,   110,    40,   215,    43,
      20,   258,    45,    47,    20,    30,   263,    32,    37,   266,
      92,    36,    37,   113,    43,    92,    58,    46,    47,    40,
      47,   103,    47,    48,   138,   107,   103,     5,   110,    46,
     107,    44,   146,   110,    12,    13,    47,    15,    44,    45,
     215,    21,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,    47,   138,   232,    43,   181,
      47,   236,    47,    47,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,    44,    45,    12,
     219,   181,   219,   219,    47,   260,    37,   214,    46,   216,
      21,    37,   214,    41,   216,    28,    43,    43,   220,    32,
      46,    47,    44,    45,   231,    45,    12,   282,    38,   231,
     237,    47,   239,    47,   214,   237,   216,   239,   181,    47,
     220,    18,    28,   245,    47,    58,    32,   249,    44,    45,
      47,   231,    47,    41,    38,    38,   258,   237,    39,   239,
      47,   263,    18,    19,   266,   245,    44,    38,    38,   249,
      21,   214,    58,   216,    30,    37,    32,   220,   258,    46,
      36,    37,    39,   263,    39,    37,   266,    41,   231,    39,
      39,    47,    48,    38,   237,     5,   239,    45,    40,    46,
     113,    44,   245,    44,     3,     4,   249,     6,     7,     8,
       9,    10,    11,    44,    47,   258,    41,    16,    38,    12,
     263,    38,    51,   266,    17,     3,     4,   113,     6,     7,
       8,     9,    10,    11,    38,    28,    14,    30,    16,    32,
      46,    52,    37,    28,   112,   138,    30,    30,    47,    51,
     185,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   241,    58,    59,   113,   105,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    22,    23,    24,    25,    26,    27,    28,    29,    92,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
     103,    42,    -1,    -1,   107,    -1,    -1,   110,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,    -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,   138,    15,    16,    17,    -1,
      19,    20,    -1,   146,    -1,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,     3,
       4,    50,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,     3,     4,    47,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,    50,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,     3,     4,    50,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,
      50,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,     3,     4,    50,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,     3,     4,    50,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    -1,    -1,
      19,    20,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    19,    20,
      39,    40,    -1,     3,     4,    -1,     6,     7,    47,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    -1,    39,    40,
      -1,    -1,    -1,    -1,     3,     4,    47,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    19,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    47,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    47,    48,    47,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    38,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    38,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    55,    56,    57,    58,     0,    57,
       5,    47,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    39,    47,
      59,    60,    61,    62,    68,    70,    75,    76,    77,    82,
      84,    85,    95,    96,    97,    98,   102,   103,   104,    47,
      95,    97,    20,    20,    47,    20,    46,    40,    61,    37,
      43,    46,    47,    68,    70,    76,    77,    98,    40,    62,
      44,    47,    47,    43,    47,    74,    78,    80,    47,    47,
      65,    66,    21,    21,    41,   105,    21,   105,    47,    74,
      79,    79,    37,    40,    47,    71,    72,    73,    95,    96,
      97,    46,    21,    37,    44,    45,    21,    37,    44,    21,
      37,    44,    45,    30,    32,    36,    37,    47,    48,    84,
      85,    86,    87,    88,    93,    94,   102,   103,   104,    93,
      93,    41,    93,    44,    45,    44,    71,    38,    45,    47,
      47,    47,    93,    71,    47,    80,    18,    39,    99,    71,
      18,    67,    71,    47,    66,    47,    94,   103,   104,    93,
      93,    37,    47,    47,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    32,    33,    34,    35,    42,    93,    74,
      38,    39,    73,    38,    95,    97,    93,   101,    44,    38,
      47,    38,    38,    67,    89,    90,    91,    93,    37,    37,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    42,    39,    17,    39,    47,    50,    59,
      63,    64,    69,    81,    82,    83,    88,    92,    95,    96,
      97,    39,    41,   100,   100,    40,    45,    39,    37,    39,
      38,    45,    89,    89,    40,    63,    67,    93,    40,    63,
      46,    64,    40,    44,    44,    44,    47,    40,    63,    93,
      41,    93,    40,    63,    89,    40,    63,    91,    38,    38,
      40,    40,    51,    40,    42,    93,    40,    38,    40,    46,
      42,    52,    37,    93,    38
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
#line 1798 "parse.tab.c"
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
#line 373 "parse.y"


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
