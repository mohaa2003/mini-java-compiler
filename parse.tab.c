
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
     COLON = 302,
     IDENT = 303,
     NUM = 304,
     ERR = 305,
     SYSTEM = 306,
     OUT = 307,
     PRINTLN = 308,
     TRY = 309,
     CATCH = 310,
     FINALLY = 311,
     IF = 312,
     WHILE = 313,
     FOR = 314,
     SWITCH = 315,
     CASE = 316,
     DEFAULT = 317,
     ELSE = 318,
     UMINUS = 319
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
#line 193 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 205 "parse.tab.c"

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
#define YYLAST   2311

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNRULES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
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
     213,   216,   219,   223,   227,   231,   233,   237,   239,   241,
     243,   246,   249,   252,   254,   256,   258,   260,   262,   265,
     268,   272,   275,   279,   282,   286,   295,   298,   301,   305,
     311,   317,   322,   324,   326,   327,   329,   331,   335,   337,
     339,   346,   354,   362,   369,   381,   392,   394,   396,   397,
     399,   400,   410,   420,   430,   441,   452,   463,   465,   468,
     471,   475,   479,   483,   487,   491,   495,   499,   503,   507,
     511,   515,   519,   523,   525,   527,   530,   532,   535,   539,
     541,   543,   545,   547,   549,   551,   553,   555,   557,   559,
     561,   563,   566,   569,   571,   574,   579,   583,   587,   591,
     595,   600,   602,   606,   609,   612,   615,   618,   620,   624,
     629,   636,   642,   648,   653,   655,   658,   666,   673,   676,
     681,   685,   686
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    67,    -1,    68,    -1,    67,    68,    -1,
      69,     5,    48,    39,    71,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    12,    -1,    15,    -1,    13,    -1,
      12,    20,    -1,    15,    20,    -1,    13,    20,    -1,    20,
      -1,    -1,    72,    -1,    73,    -1,    72,    73,    -1,    93,
      -1,    81,    -1,    70,    81,    -1,    79,    -1,    70,    79,
      -1,    39,    40,    -1,    39,    72,    40,    -1,    74,    75,
      -1,    75,    -1,    93,    -1,    92,    -1,    39,    40,    -1,
      39,    74,    40,    -1,    76,    45,    77,    -1,    77,    -1,
      48,    21,    78,    -1,    18,    48,    37,   100,    38,    -1,
      48,    37,    82,    38,    39,    80,    40,    -1,    -1,    74,
      -1,   112,    48,    37,    82,    38,    39,    74,    40,    -1,
     113,    48,    37,    82,    38,    39,    74,    40,    -1,    14,
      48,    37,    82,    38,    39,    74,    40,    -1,   114,    48,
      37,    82,    38,    39,    74,    40,    -1,   112,    48,    37,
      82,    38,    39,    40,    -1,   113,    48,    37,    82,    38,
      39,    40,    -1,    14,    48,    37,    82,    38,    39,    40,
      -1,   114,    48,    37,    82,    38,    39,    40,    -1,    -1,
      83,    -1,    84,    -1,    83,    45,    84,    -1,   112,    48,
      -1,   113,    48,    -1,   114,    48,    -1,    48,    21,   110,
      -1,   119,    21,   110,    -1,   120,    21,   110,    -1,   121,
      21,   110,    -1,   114,    76,    -1,   112,    89,    -1,     8,
     114,    90,    -1,     8,   112,    90,    -1,    89,    45,    91,
      -1,    91,    -1,    90,    45,    85,    -1,    85,    -1,    48,
      -1,    85,    -1,    94,    44,    -1,    99,    44,    -1,   109,
      44,    -1,   123,    -1,   103,    -1,   104,    -1,   105,    -1,
     108,    -1,    86,    44,    -1,   115,    44,    -1,    70,   115,
      44,    -1,    87,    44,    -1,    70,    87,    44,    -1,    88,
      44,    -1,    70,    88,    44,    -1,    51,    46,    52,    46,
      53,    37,   110,    38,    -1,    19,    46,    -1,    48,    46,
      -1,    96,    48,    46,    -1,    95,    48,    37,   100,    38,
      -1,    96,    48,    37,   100,    38,    -1,    48,    37,   100,
      38,    -1,    97,    -1,    98,    -1,    -1,   101,    -1,   102,
      -1,   101,    45,   102,    -1,   110,    -1,    78,    -1,    57,
      37,   110,    38,    39,    40,    -1,    57,    37,   110,    38,
      39,    74,    40,    -1,    58,    37,   110,    38,    39,    74,
      40,    -1,    58,    37,   110,    38,    39,    40,    -1,    59,
      37,   106,    44,   110,    44,   107,    38,    39,    74,    40,
      -1,    59,    37,   106,    44,   110,    44,   107,    38,    39,
      40,    -1,    85,    -1,    87,    -1,    -1,    85,    -1,    -1,
      59,    37,   112,    48,    47,    48,    38,    39,    40,    -1,
      59,    37,   114,    48,    47,    48,    38,    39,    40,    -1,
      59,    37,   113,    48,    47,    48,    38,    39,    40,    -1,
      59,    37,   112,    48,    47,    48,    38,    39,    74,    40,
      -1,    59,    37,   114,    48,    47,    48,    38,    39,    74,
      40,    -1,    59,    37,   113,    48,    47,    48,    38,    39,
      74,    40,    -1,    17,    -1,    17,   110,    -1,    17,    78,
      -1,   110,    31,   111,    -1,   110,    32,   111,    -1,   110,
      33,   111,    -1,   110,    34,   111,    -1,   110,    35,   111,
      -1,   110,    22,   111,    -1,   110,    23,   111,    -1,   110,
      24,   111,    -1,   110,    25,   111,    -1,   110,    26,   111,
      -1,   110,    27,   111,    -1,   110,    28,   111,    -1,   110,
      29,   111,    -1,   119,    -1,    99,    -1,    32,   110,    -1,
     111,    -1,    30,   111,    -1,    37,   110,    38,    -1,   120,
      -1,   121,    -1,    49,    -1,    36,    -1,     9,    -1,     7,
      -1,     3,    -1,     4,    -1,     6,    -1,    10,    -1,    11,
      -1,    16,    -1,   112,    43,    -1,    48,    43,    -1,    48,
      -1,   113,    48,    -1,   113,    48,    21,   116,    -1,    18,
     114,   117,    -1,    18,   112,   117,    -1,    39,   118,    40,
      -1,    41,   110,    42,    -1,   117,    41,   110,    42,    -1,
     110,    -1,   118,    45,   110,    -1,   120,   122,    -1,   121,
     122,    -1,    96,    48,    -1,    95,    48,    -1,    48,    -1,
      41,   110,    42,    -1,   122,    41,   110,    42,    -1,    54,
      39,    74,    40,   124,   128,    -1,    54,    39,    74,    40,
     127,    -1,    54,    39,    40,   124,   128,    -1,    54,    39,
      40,   127,    -1,   125,    -1,   124,   125,    -1,    55,    37,
     126,    38,    39,    74,    40,    -1,    55,    37,   126,    38,
      39,    40,    -1,   114,    48,    -1,    56,    39,    74,    40,
      -1,    56,    39,    40,    -1,    -1,   127,    -1
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
     197,   198,   199,   200,   201,   202,   203,   204,   208,   209,
     210,   211,   212,   213,   214,   218,   223,   228,   229,   233,
     234,   238,   242,   243,   247,   249,   253,   253,   257,   258,
     264,   267,   273,   274,   278,   279,   283,   284,   285,   289,
     290,   295,   296,   297,   298,   299,   300,   329,   330,   331,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   356,   357,   358,
     359,   360,   361,   365,   365,   365,   365,   365,   365,   365,
     365,   369,   370,   374,   380,   381,   385,   386,   387,   391,
     392,   396,   397,   401,   402,   406,   407,   411,   415,   416,
     422,   423,   424,   425,   429,   430,   434,   435,   439,   443,
     444,   447,   449
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
  "SEMICOLON", "COMMA", "DOT", "COLON", "IDENT", "NUM", "ERR", "SYSTEM",
  "OUT", "PRINTLN", "TRY", "CATCH", "FINALLY", "IF", "WHILE", "FOR",
  "SWITCH", "CASE", "DEFAULT", "ELSE", "UMINUS", "$accept", "program",
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
  "for_statement", "for_init", "for_update", "foreach_statement",
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
     315,   316,   317,   318,   319
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    73,    73,    73,    74,    74,
      75,    75,    75,    75,    76,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    85,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    94,    95,    96,    96,    97,
      97,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   115,   115,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   122,   122,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   127,
     127,   128,   128
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
       2,     2,     3,     3,     3,     1,     3,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     3,     2,     3,     8,     2,     2,     3,     5,
       5,     4,     1,     1,     0,     1,     1,     3,     1,     1,
       6,     7,     7,     6,    11,    10,     1,     1,     0,     1,
       0,     9,     9,     9,    10,    10,    10,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,    17,   145,   146,   147,   144,     0,   143,   148,
     149,    10,    12,     0,    11,   150,     0,    16,     0,   167,
       0,     0,    18,    19,    24,    22,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,    13,    15,     0,    14,    86,    26,     0,    49,
     152,    87,   153,    25,    23,     0,     0,     0,     5,    20,
      78,    81,    83,   166,   165,   151,    68,    69,    61,    65,
     154,     0,    60,    35,    79,     0,     0,     0,   163,     0,
     164,     0,    67,    63,    62,    49,    27,   153,     0,    50,
      51,     0,     0,     0,    82,    84,    80,    88,     0,    49,
       0,     0,    49,     0,    49,     0,     0,     0,   142,     0,
     167,   141,     0,     0,    92,    93,   134,    57,   136,   133,
     139,   140,    58,     0,     0,    59,     0,     0,     0,     0,
      53,    54,    55,    56,     0,    68,    64,     0,     0,   155,
       0,     0,    36,     0,     0,    34,   167,   137,   139,   140,
     135,     0,    94,   166,   165,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
      66,     0,    39,    52,     0,     0,     0,   161,     0,     0,
       0,     0,   138,    99,     0,    95,    96,    98,    94,    94,
     125,   126,   127,   128,   129,   130,   131,   132,   120,   121,
     122,   123,   124,   169,     0,   117,     0,   167,     0,     0,
       0,     0,     0,     0,    40,    29,     0,    31,    30,     0,
       0,    74,    75,    76,    77,     0,     0,     0,     0,    73,
       0,     0,   157,   156,   158,     0,     0,    94,     0,    91,
       0,     0,     0,    47,     0,   119,   118,    32,     0,     0,
       0,     0,     0,   108,    28,    38,    70,    71,    72,   154,
      45,     0,     0,     0,   162,    46,     0,     0,    48,     0,
      97,    89,    90,    43,    33,     0,     0,     0,     0,     0,
     153,   106,   107,     0,     0,     0,     0,    41,   159,     0,
      42,    37,    44,     0,     0,     0,   181,   174,   173,     0,
       0,     0,     0,    68,     0,     0,   160,     0,     0,     0,
     175,   182,   172,   181,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   180,     0,   170,   100,     0,   103,
       0,   110,     0,     0,     0,     0,   178,     0,   179,   101,
     102,   109,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   177,     0,     0,   111,     0,   113,     0,   112,
       0,   176,   105,     0,   114,   116,   115,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   223,    31,    32,    33,   224,
     225,    82,    83,   193,    34,   226,    35,    98,    99,   100,
      77,    36,    37,    38,    78,    93,    79,   227,   228,   229,
     122,   123,   124,   125,   230,   194,   195,   196,   231,   232,
     233,   293,   352,   234,   235,   197,   128,   236,   237,   238,
      45,   149,   242,   188,    46,    47,    48,    88,   239,   306,
     307,   333,   321,   322
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -250
static const yytype_int16 yypact[] =
{
     197,  -250,  -250,  -250,    23,   177,  -250,    16,  -250,  -250,
     -15,    34,  2263,  -250,  -250,  -250,  -250,    75,  -250,  -250,
    -250,    50,    93,    69,   100,  -250,    96,  -250,  2202,   131,
     568,   106,  2263,  -250,  -250,  -250,    90,   132,   143,  -250,
     121,   147,    -7,   150,   160,   169,   170,    51,    55,  -250,
     171,   171,  -250,  -250,   180,  -250,  -250,  -250,  2245,   669,
    -250,  -250,    95,  -250,  -250,   181,   182,   184,  -250,  -250,
    -250,  -250,  -250,  -250,   178,  -250,    67,  -250,   185,  -250,
      84,    94,   186,  -250,  -250,     8,     8,     8,   194,     8,
     194,   216,  -250,   193,   193,   669,  -250,   196,   202,   200,
    -250,   118,   198,   201,  -250,  -250,  -250,  -250,     8,   669,
     205,   -14,   669,   223,   669,   206,    88,     8,  -250,     8,
      29,  -250,   208,   210,  -250,  -250,  -250,  1211,  -250,  -250,
     209,   209,  1211,   755,     8,  1211,   171,   214,   203,   669,
    -250,  -250,  -250,  1211,   221,   216,  -250,    75,     8,  -250,
     224,   212,  -250,   239,   257,  -250,   233,  -250,  -250,  -250,
    -250,   983,   390,   243,    73,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,  -250,   812,
    -250,   242,  2181,  -250,   244,   241,   241,  1211,   125,   247,
     250,   249,  -250,  -250,   258,   254,  -250,  1211,   390,   390,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,   585,   390,   642,   156,   256,   261,
     266,   267,   268,   384,  2181,  -250,   255,  -250,  -250,   271,
     272,  -250,  -250,  -250,  -250,   273,   135,   262,   206,  -250,
     699,     8,   277,   277,  -250,     8,   756,   390,   813,  -250,
     390,   281,   282,  -250,   870,  -250,  1211,  -250,   927,   270,
     984,     8,     8,   726,  -250,  -250,  -250,  -250,  -250,   303,
    -250,  1041,   869,     8,  1211,  -250,  1098,   287,  -250,  1155,
    -250,  -250,  -250,  -250,  -250,   280,   166,  1212,  1040,  1097,
      21,  -250,  -250,   284,   163,   286,   289,  -250,  -250,   926,
    -250,  -250,  -250,   276,   295,   296,   166,  -250,  -250,   166,
     304,   306,     8,    18,   307,    27,  -250,   305,   302,  1269,
    -250,  -250,  -250,   166,  -250,  1326,  1383,   586,   309,   310,
     314,     8,   315,   313,  -250,  1440,  -250,  -250,  1497,  -250,
    1554,   171,   317,   327,   329,  1154,  -250,   330,  -250,  -250,
    -250,  -250,   333,   334,   335,   336,  -250,  1611,   337,  1668,
    1725,  1782,  -250,  1839,  1896,  -250,  1953,  -250,  2010,  -250,
    2067,  -250,  -250,  2124,  -250,  -250,  -250,  -250
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -250,   348,  -250,     3,  -250,   340,    -3,  -197,
     217,  -250,   263,  -104,   347,  -250,   349,    31,  -250,   260,
     -49,  -250,   -27,   -23,  -250,   331,   279,  -250,    22,  -250,
     352,   373,  -250,  -250,    86,  -185,  -250,   133,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,   222,   393,    -6,     0,   -12,
     -22,  -250,   195,  -250,   204,   -18,    99,   -38,  -250,    77,
    -229,  -250,  -249,    74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -154
static const yytype_int16 yytable[] =
{
      44,    92,    92,    65,   147,    51,    42,    66,    67,   152,
      90,    50,    43,   251,   252,    30,    44,   254,    44,   258,
      44,    10,    42,     8,    42,   148,    42,    26,    43,    69,
      43,    30,    43,    11,    39,    30,    75,   308,   116,   108,
     117,    76,   108,   271,   118,   119,    44,   103,   113,   276,
      39,   279,    42,   101,    39,    69,   120,   121,    43,   102,
     324,    30,   277,   287,    60,   328,   162,   130,   130,   130,
      52,   130,    86,    12,   330,    61,    89,   320,    13,    14,
      39,    15,    16,   103,    18,    19,    20,   180,   108,   101,
     130,    25,    87,    90,   320,   102,    87,   103,   158,   130,
     103,   130,   103,   101,   109,   111,   101,    26,   101,   102,
     199,   255,   102,    53,   102,   113,   130,    54,   116,   107,
      55,   112,   335,    49,   118,   119,   137,   103,   338,   340,
     130,   114,    59,   101,    70,   186,   156,   121,    60,   102,
     144,   185,    56,   150,   130,   153,    68,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     363,    75,   366,   368,   370,   244,   140,   373,    59,    73,
     245,   126,   126,   126,    60,   126,    71,    61,    75,  -153,
     130,   130,    -9,   145,   131,   131,   131,    72,   131,     1,
       2,    85,     3,   162,   126,    74,    65,   130,    80,    60,
      66,    67,    61,   126,  -153,   126,    75,   131,    81,     1,
       2,   313,     3,    84,   291,   159,   131,    95,   131,    91,
     126,   304,   305,   130,   107,   104,   105,   130,   106,   130,
     110,   115,   130,   131,   126,   134,   292,   108,   136,    60,
     138,   151,   182,   130,   130,   139,   141,   131,   126,   142,
      87,   296,   181,   145,   154,   130,   163,   294,   164,   184,
     190,   131,   189,   295,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   191,   113,    61,
     198,   214,   241,   240,   126,   126,   246,   247,   248,   129,
     129,   129,   351,   129,   130,   265,   249,   131,   131,   250,
     260,   126,   259,   261,   262,   263,   332,   127,   132,   133,
     269,   135,   129,   130,   131,   266,   267,   268,   273,   281,
     282,   129,   285,   129,   111,   301,   303,   126,   312,   317,
     143,   126,   318,   126,   314,   319,   126,   315,   129,   160,
     131,   161,   331,   325,   131,   326,   131,   126,   126,   131,
      49,   347,   129,     9,   329,   353,   179,   342,   343,   126,
     131,   131,   344,   346,    40,   354,   129,   355,    58,   357,
     187,   358,   131,   359,   360,   361,   364,    63,   155,    64,
      40,   243,    94,   280,    40,    41,   323,    13,    14,   146,
      15,    16,    17,    18,    19,    20,     0,   336,   126,   183,
      25,    41,   129,   129,     0,    41,     0,     0,   151,    26,
      40,   131,     0,     0,     0,     0,     0,   126,     0,   129,
     116,     0,   117,     0,     0,     0,   118,   119,     0,     0,
     131,    41,    97,     0,     0,     0,     0,   256,   120,   121,
       0,   264,     0,     0,     0,   129,     0,     0,     0,   129,
       0,   129,     0,     0,   129,     0,     0,     0,     0,     0,
       0,     0,     0,   272,     0,   129,   129,   274,    40,     0,
       0,   264,     0,     0,     0,   264,     0,   129,     0,     0,
       0,     0,     0,   288,   289,     0,     0,     0,   264,    41,
       0,     0,     0,   264,     0,   299,   264,     0,     0,     0,
       0,     0,     0,     0,   264,     0,     0,     0,     0,   157,
       0,     0,     0,     0,     0,     0,   129,    40,    40,    40,
      40,    40,    40,    40,    40,    40,    40,    40,    40,    40,
       0,     0,     0,     0,   327,   129,     0,     0,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,     0,   264,   345,     0,   264,     0,   264,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,    13,    14,     0,    15,    16,    17,    18,    19,    20,
     264,     0,    23,   264,    25,   264,     0,   264,    13,    14,
     264,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,     0,   165,   166,
     167,   168,   169,   170,   171,   172,    62,   173,   174,   175,
     176,   177,     0,     0,   216,   253,     0,     0,     0,     0,
     341,     0,     0,   217,     0,     0,   218,     0,     0,   219,
       0,     0,   220,   221,   222,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   215,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,    14,     0,    15,    16,     0,    18,    19,
      20,   216,   257,     0,     0,    25,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,    97,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,     0,    15,    16,     0,    18,    19,    20,   216,   270,
       0,     0,    25,     0,     0,     0,     0,   217,     0,     0,
     218,     0,     0,   219,     0,     0,   220,   221,   222,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   215,   290,    26,    27,   165,   166,   167,
     168,   169,   170,   171,   172,     0,   173,   174,   175,   176,
     177,     0,     0,     0,     0,   216,   275,   178,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   165,   166,   167,   168,   169,   170,
     171,   172,     0,   173,   174,   175,   176,   177,     0,     0,
       0,     0,   216,   278,   213,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,   222,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   215,     0,    26,
      27,   165,   166,   167,   168,   169,   170,   171,   172,     0,
     173,   174,   175,   176,   177,     0,     0,     0,     0,   216,
     283,   298,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   165,   166,
     167,   168,   169,   170,   171,   172,     0,   173,   174,   175,
     176,   177,     0,     0,     0,     0,   216,   284,   316,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   218,     0,
       0,   219,     0,     0,   220,   221,   222,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,   165,   166,   167,   168,   169,
     170,   171,   172,     0,   173,   174,   175,   176,   177,     0,
       0,   192,     0,   216,   286,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,   165,   166,   167,   168,   169,   170,   171,   172,
       0,   173,   174,   175,   176,   177,     0,     0,   310,     0,
     216,   297,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,     0,   219,     0,     0,   220,   221,
     222,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   215,     0,    26,    27,   165,
     166,   167,   168,   169,   170,   171,   172,     0,   173,   174,
     175,   176,   177,     0,     0,   311,     0,   216,   300,     0,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,   165,   166,   167,   168,
     169,   170,   171,   172,     0,   173,   174,   175,   176,   177,
       0,     0,   356,     0,   216,   302,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,   218,     0,     0,   219,
       0,     0,   220,   221,   222,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   215,
       0,    26,    27,   165,   166,   167,   168,   169,   170,   171,
     172,     0,   173,   174,   175,   176,   177,     0,     0,     0,
       0,   216,   309,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   334,
       0,     0,     0,     0,     0,     0,     0,   217,     0,     0,
     218,     0,     0,   219,     0,     0,   220,   221,   222,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   215,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   337,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   339,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,   222,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   215,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     348,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   349,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   218,     0,
       0,   219,     0,     0,   220,   221,   222,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   350,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   362,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,     0,   219,     0,     0,   220,   221,
     222,    13,    14,     0,    15,    16,    17,    18,    19,    20,
      21,    22,     0,    24,    25,   215,     0,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,   365,     0,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   367,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,   218,     0,     0,   219,
       0,     0,   220,   221,   222,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,     0,    24,    25,   215,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   216,   369,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   371,
       0,     0,     0,     0,     0,     0,     0,   217,     0,     0,
     218,     0,     0,   219,     0,     0,   220,   221,   222,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
       0,    24,    25,   215,     0,    26,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,   372,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   374,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,     0,   219,     0,     0,
     220,   221,   222,    13,    14,     0,    15,    16,    17,    18,
      19,    20,    21,    22,     0,    24,    25,   215,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     375,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   376,     0,     0,
       0,     0,     0,     0,     0,   217,     0,     0,   218,     0,
       0,   219,     0,     0,   220,   221,   222,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    24,
      25,   215,     0,    26,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,   377,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,     0,     0,     0,    13,    14,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
     216,    26,    27,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,     0,   219,     0,     0,   220,   221,
     222,    28,    57,     0,     0,     0,     0,     0,    13,    14,
      29,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,    27,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    26,    27,    28,    96,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,    29
};

static const yytype_int16 yycheck[] =
{
      12,    50,    51,    30,    18,    17,    12,    30,    30,   113,
      48,    17,    12,   198,   199,    12,    28,   214,    30,   216,
      32,     5,    28,     0,    30,    39,    32,    19,    28,    32,
      30,    28,    32,    48,    12,    32,    43,   286,    30,    21,
      32,    48,    21,   240,    36,    37,    58,    59,    21,   246,
      28,   248,    58,    59,    32,    58,    48,    49,    58,    59,
     309,    58,   247,   260,    43,    47,    37,    85,    86,    87,
      20,    89,    21,    39,    47,    46,    21,   306,     3,     4,
      58,     6,     7,    95,     9,    10,    11,   136,    21,    95,
     108,    16,    41,   131,   323,    95,    41,   109,   116,   117,
     112,   119,   114,   109,    37,    21,   112,    19,   114,   109,
      37,   215,   112,    20,   114,    21,   134,    48,    30,    46,
      20,    37,   319,    48,    36,    37,    95,   139,   325,   326,
     148,    37,    37,   139,    44,   147,    48,    49,    43,   139,
     109,   147,    46,   112,   162,   114,    40,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     357,    43,   359,   360,   361,    40,    48,   364,    37,    48,
      45,    85,    86,    87,    43,    89,    44,    46,    43,    48,
     198,   199,     5,    48,    85,    86,    87,    44,    89,    12,
      13,    21,    15,    37,   108,    48,   223,   215,    48,    43,
     223,   223,    46,   117,    48,   119,    43,   108,    48,    12,
      13,    48,    15,    44,   263,   116,   117,    37,   119,    48,
     134,    55,    56,   241,    46,    44,    44,   245,    44,   247,
      45,    45,   250,   134,   148,    41,   263,    21,    45,    43,
      38,    18,    39,   261,   262,    45,    48,   148,   162,    48,
      41,   263,    38,    48,    48,   273,    48,   263,    48,    38,
      48,   162,    38,   263,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,    38,    21,    46,
      37,    39,    41,    39,   198,   199,    39,    37,    39,    85,
      86,    87,   341,    89,   312,    40,    38,   198,   199,    45,
      39,   215,    46,    37,    37,    37,   318,    85,    86,    87,
      48,    89,   108,   331,   215,    44,    44,    44,    41,    38,
      38,   117,    52,   119,    21,    38,    46,   241,    44,    53,
     108,   245,    37,   247,    48,    39,   250,    48,   134,   117,
     241,   119,    37,    39,   245,    39,   247,   261,   262,   250,
      48,    38,   148,     5,    47,    38,   134,    48,    48,   273,
     261,   262,    48,    48,    12,    38,   162,    38,    28,    39,
     148,    38,   273,    39,    39,    39,    39,    30,   115,    30,
      28,   186,    51,   250,    32,    12,   309,     3,     4,   110,
       6,     7,     8,     9,    10,    11,    -1,   323,   312,   139,
      16,    28,   198,   199,    -1,    32,    -1,    -1,    18,    19,
      58,   312,    -1,    -1,    -1,    -1,    -1,   331,    -1,   215,
      30,    -1,    32,    -1,    -1,    -1,    36,    37,    -1,    -1,
     331,    58,    48,    -1,    -1,    -1,    -1,   215,    48,    49,
      -1,   224,    -1,    -1,    -1,   241,    -1,    -1,    -1,   245,
      -1,   247,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,   261,   262,   245,   116,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   273,    -1,    -1,
      -1,    -1,    -1,   261,   262,    -1,    -1,    -1,   271,   116,
      -1,    -1,    -1,   276,    -1,   273,   279,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,   312,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
      -1,    -1,    -1,    -1,   312,   331,    -1,    -1,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,    -1,   335,   331,    -1,   338,    -1,   340,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
     363,    -1,    14,   366,    16,   368,    -1,   370,     3,     4,
     373,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    48,    31,    32,    33,
      34,    35,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,     7,    -1,     9,    10,
      11,    39,    40,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      58,    59,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    48,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    39,    40,
      -1,    -1,    16,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    48,    19,    20,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    39,    40,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    39,    40,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,
      40,    42,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    39,    40,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    -1,
      -1,    38,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    38,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      58,    59,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    54,    -1,    -1,    57,    58,    59,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      58,    59,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      54,    -1,    -1,    57,    58,    59,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,    59,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    58,    59,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      39,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,    58,
      59,    39,    40,    -1,    -1,    -1,    -1,    -1,     3,     4,
      48,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    19,    20,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      -1,    -1,    19,    20,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    66,    67,    68,    69,     0,    68,
       5,    48,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    39,    48,
      70,    71,    72,    73,    79,    81,    86,    87,    88,    93,
      95,    96,   112,   113,   114,   115,   119,   120,   121,    48,
     112,   114,    20,    20,    48,    20,    46,    40,    72,    37,
      43,    46,    48,    79,    81,    87,    88,   115,    40,    73,
      44,    44,    44,    48,    48,    43,    48,    85,    89,    91,
      48,    48,    76,    77,    44,    21,    21,    41,   122,    21,
     122,    48,    85,    90,    90,    37,    40,    48,    82,    83,
      84,   112,   113,   114,    44,    44,    44,    46,    21,    37,
      45,    21,    37,    21,    37,    45,    30,    32,    36,    37,
      48,    49,    95,    96,    97,    98,    99,   110,   111,   119,
     120,   121,   110,   110,    41,   110,    45,    82,    38,    45,
      48,    48,    48,   110,    82,    48,    91,    18,    39,   116,
      82,    18,    78,    82,    48,    77,    48,   111,   120,   121,
     110,   110,    37,    48,    48,    22,    23,    24,    25,    26,
      27,    28,    29,    31,    32,    33,    34,    35,    42,   110,
      85,    38,    39,    84,    38,   112,   114,   110,   118,    38,
      48,    38,    38,    78,   100,   101,   102,   110,    37,    37,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,    42,    39,    17,    39,    48,    51,    54,
      57,    58,    59,    70,    74,    75,    80,    92,    93,    94,
      99,   103,   104,   105,   108,   109,   112,   113,   114,   123,
      39,    41,   117,   117,    40,    45,    39,    37,    39,    38,
      45,   100,   100,    40,    74,    78,   110,    40,    74,    46,
      39,    37,    37,    37,    75,    40,    44,    44,    44,    48,
      40,    74,   110,    41,   110,    40,    74,   100,    40,    74,
     102,    38,    38,    40,    40,    52,    40,    74,   110,   110,
      48,    85,    87,   106,   112,   113,   114,    40,    42,   110,
      40,    38,    40,    46,    55,    56,   124,   125,   127,    40,
      38,    38,    44,    48,    48,    48,    42,    53,    37,    39,
     125,   127,   128,   124,   127,    39,    39,   110,    47,    47,
      47,    37,   114,   126,    40,    74,   128,    40,    74,    40,
      74,    44,    48,    48,    48,   110,    48,    38,    40,    40,
      40,    85,   107,    38,    38,    38,    38,    39,    38,    39,
      39,    39,    40,    74,    39,    40,    74,    40,    74,    40,
      74,    40,    40,    74,    40,    40,    40,    40
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
#line 2144 "parse.tab.c"
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
#line 452 "parse.y"


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
