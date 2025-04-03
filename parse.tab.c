
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
#define YYLAST   1913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  351

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
     213,   216,   219,   223,   227,   231,   233,   237,   239,   241,
     243,   246,   249,   252,   254,   256,   258,   260,   263,   266,
     270,   273,   277,   280,   284,   293,   296,   299,   303,   309,
     315,   320,   322,   324,   325,   327,   329,   333,   335,   337,
     344,   352,   360,   367,   379,   390,   392,   394,   395,   397,
     398,   400,   403,   406,   410,   414,   418,   422,   426,   430,
     434,   438,   442,   446,   450,   454,   458,   460,   462,   465,
     467,   470,   474,   476,   478,   480,   482,   484,   486,   488,
     490,   492,   494,   496,   498,   501,   504,   506,   509,   514,
     518,   522,   526,   530,   535,   537,   541,   544,   547,   550,
     553,   555,   559,   564,   571,   577,   583,   588,   590,   593,
     601,   608,   611,   616,   620,   621
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
      -1,   110,    47,    37,    81,    38,    39,    73,    40,    -1,
     111,    47,    37,    81,    38,    39,    73,    40,    -1,    14,
      47,    37,    81,    38,    39,    73,    40,    -1,   112,    47,
      37,    81,    38,    39,    73,    40,    -1,   110,    47,    37,
      81,    38,    39,    40,    -1,   111,    47,    37,    81,    38,
      39,    40,    -1,    14,    47,    37,    81,    38,    39,    40,
      -1,   112,    47,    37,    81,    38,    39,    40,    -1,    -1,
      82,    -1,    83,    -1,    82,    45,    83,    -1,   110,    47,
      -1,   111,    47,    -1,   112,    47,    -1,    47,    21,   108,
      -1,   117,    21,   108,    -1,   118,    21,   108,    -1,   119,
      21,   108,    -1,   112,    75,    -1,   110,    88,    -1,     8,
     112,    89,    -1,     8,   110,    89,    -1,    88,    45,    90,
      -1,    90,    -1,    89,    45,    84,    -1,    84,    -1,    47,
      -1,    84,    -1,    93,    44,    -1,    98,    44,    -1,   107,
      44,    -1,   121,    -1,   102,    -1,   103,    -1,   104,    -1,
      85,    44,    -1,   113,    44,    -1,    69,   113,    44,    -1,
      86,    44,    -1,    69,    86,    44,    -1,    87,    44,    -1,
      69,    87,    44,    -1,    50,    46,    51,    46,    52,    37,
     108,    38,    -1,    19,    46,    -1,    47,    46,    -1,    95,
      47,    46,    -1,    94,    47,    37,    99,    38,    -1,    95,
      47,    37,    99,    38,    -1,    47,    37,    99,    38,    -1,
      96,    -1,    97,    -1,    -1,   100,    -1,   101,    -1,   100,
      45,   101,    -1,   108,    -1,    77,    -1,    56,    37,   108,
      38,    39,    40,    -1,    56,    37,   108,    38,    39,    73,
      40,    -1,    57,    37,   108,    38,    39,    73,    40,    -1,
      57,    37,   108,    38,    39,    40,    -1,    58,    37,   105,
      44,   108,    44,   106,    38,    39,    73,    40,    -1,    58,
      37,   105,    44,   108,    44,   106,    38,    39,    40,    -1,
      84,    -1,    86,    -1,    -1,    84,    -1,    -1,    17,    -1,
      17,   108,    -1,    17,    77,    -1,   108,    31,   109,    -1,
     108,    32,   109,    -1,   108,    33,   109,    -1,   108,    34,
     109,    -1,   108,    35,   109,    -1,   108,    22,   109,    -1,
     108,    23,   109,    -1,   108,    24,   109,    -1,   108,    25,
     109,    -1,   108,    26,   109,    -1,   108,    27,   109,    -1,
     108,    28,   109,    -1,   108,    29,   109,    -1,   117,    -1,
      98,    -1,    32,   108,    -1,   109,    -1,    30,   109,    -1,
      37,   108,    38,    -1,   118,    -1,   119,    -1,    48,    -1,
      36,    -1,     9,    -1,     7,    -1,     3,    -1,     4,    -1,
       6,    -1,    10,    -1,    11,    -1,    16,    -1,   110,    43,
      -1,    47,    43,    -1,    47,    -1,   111,    47,    -1,   111,
      47,    21,   114,    -1,    18,   112,   115,    -1,    18,   110,
     115,    -1,    39,   116,    40,    -1,    41,   108,    42,    -1,
     115,    41,   108,    42,    -1,   108,    -1,   116,    45,   108,
      -1,   118,   120,    -1,   119,   120,    -1,    95,    47,    -1,
      94,    47,    -1,    47,    -1,    41,   108,    42,    -1,   120,
      41,   108,    42,    -1,    53,    39,    73,    40,   122,   126,
      -1,    53,    39,    73,    40,   125,    -1,    53,    39,    40,
     122,   126,    -1,    53,    39,    40,   125,    -1,   123,    -1,
     122,   123,    -1,    54,    37,   124,    38,    39,    73,    40,
      -1,    54,    37,   124,    38,    39,    40,    -1,   112,    47,
      -1,    55,    39,    73,    40,    -1,    55,    39,    40,    -1,
      -1,   125,    -1
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
     197,   198,   199,   200,   201,   202,   203,   207,   208,   209,
     210,   211,   212,   213,   217,   222,   227,   228,   232,   233,
     237,   241,   242,   246,   248,   252,   252,   256,   257,   261,
     264,   270,   271,   275,   276,   280,   281,   282,   286,   287,
     316,   317,   318,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     343,   344,   345,   346,   347,   348,   352,   352,   352,   352,
     352,   352,   352,   352,   356,   357,   361,   367,   368,   372,
     373,   374,   378,   379,   383,   384,   388,   389,   393,   394,
     398,   402,   403,   409,   410,   411,   412,   416,   417,   421,
     422,   426,   430,   431,   434,   436
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
  "for_statement", "for_init", "for_update", "return_statement",
  "expression", "simple_expression", "premitive_type", "array_type",
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
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    93,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     107,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   113,   113,   114,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   120,   120,   121,   121,   121,   121,   122,   122,   123,
     123,   124,   125,   125,   126,   126
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
       2,     2,     2,     1,     1,     1,     1,     2,     2,     3,
       2,     3,     2,     3,     8,     2,     2,     3,     5,     5,
       4,     1,     1,     0,     1,     1,     3,     1,     1,     6,
       7,     7,     6,    11,    10,     1,     1,     0,     1,     0,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,    17,   138,   139,   140,   137,     0,   136,   141,
     142,    10,    12,     0,    11,   143,     0,    16,     0,   160,
       0,     0,    18,    19,    24,    22,     0,     0,     0,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,     0,    13,    15,     0,    14,    85,    26,     0,    49,
     145,    86,   146,    25,    23,     0,     0,     0,     5,    20,
      77,    80,    82,   159,   158,   144,    68,    69,    61,    65,
     147,     0,    60,    35,    78,     0,     0,     0,   156,     0,
     157,     0,    67,    63,    62,    49,    27,   146,     0,    50,
      51,     0,     0,     0,    81,    83,    79,    87,     0,    49,
       0,     0,    49,     0,    49,     0,     0,     0,   135,     0,
     160,   134,     0,     0,    91,    92,   127,    57,   129,   126,
     132,   133,    58,     0,     0,    59,     0,     0,     0,     0,
      53,    54,    55,    56,     0,    68,    64,     0,     0,   148,
       0,     0,    36,     0,     0,    34,   160,   130,   132,   133,
     128,     0,    93,   159,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,     0,
      66,     0,    39,    52,     0,     0,     0,   154,     0,     0,
       0,     0,   131,    98,     0,    94,    95,    97,    93,    93,
     118,   119,   120,   121,   122,   123,   124,   125,   113,   114,
     115,   116,   117,   162,     0,   110,     0,   160,     0,     0,
       0,     0,     0,     0,    40,    29,     0,    31,    30,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    73,     0,
       0,   150,   149,   151,     0,     0,    93,     0,    90,     0,
       0,     0,    47,     0,   112,   111,    32,     0,     0,     0,
       0,     0,   107,    28,    38,    70,    71,    72,   147,    45,
       0,     0,     0,   155,    46,     0,     0,    48,     0,    96,
      88,    89,    43,    33,     0,     0,     0,     0,     0,   146,
     105,   106,     0,     0,    41,   152,     0,    42,    37,    44,
       0,     0,     0,   174,   167,   166,     0,     0,     0,     0,
     153,     0,     0,     0,   168,   175,   165,   174,   164,     0,
       0,     0,     0,     0,     0,   173,     0,   163,    99,     0,
     102,     0,   109,     0,   171,     0,   172,   100,   101,   108,
       0,    84,     0,     0,   170,     0,     0,   169,   104,     0,
     103
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,   223,    31,    32,    33,   224,
     225,    82,    83,   193,    34,   226,    35,    98,    99,   100,
      77,    36,    37,    38,    78,    93,    79,   227,   228,   229,
     122,   123,   124,   125,   230,   194,   195,   196,   231,   232,
     233,   292,   340,   234,   197,   128,   235,   236,   237,    45,
     149,   241,   188,    46,    47,    48,    88,   238,   303,   304,
     324,   315,   316
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -267
static const yytype_int16 yypact[] =
{
     143,  -267,  -267,  -267,    10,   125,  -267,    16,  -267,  -267,
     -11,     9,  1866,  -267,  -267,  -267,  -267,   283,  -267,  -267,
    -267,    34,    61,    45,    78,  -267,    63,  -267,  1806,    58,
     492,    67,  1866,  -267,  -267,  -267,    92,    98,   104,  -267,
      87,   105,    30,   112,   113,   110,   149,    -9,    37,  -267,
     126,   126,  -267,  -267,   138,  -267,  -267,  -267,  1848,   580,
    -267,  -267,    12,  -267,  -267,   132,   133,   134,  -267,  -267,
    -267,  -267,  -267,  -267,   139,  -267,    23,  -267,   145,  -267,
      42,    51,   150,  -267,  -267,    38,    38,    38,   160,    38,
     160,   163,  -267,   154,   154,   580,  -267,   136,   169,   170,
    -267,    85,   172,   176,  -267,  -267,  -267,  -267,    38,   580,
     177,    -1,   580,   198,   580,   178,   174,    38,  -267,    38,
       5,  -267,   180,   181,  -267,  -267,  -267,  1168,  -267,  -267,
     206,   206,  1168,   720,    38,  1168,   126,   210,   211,   580,
    -267,  -267,  -267,  1168,   214,   163,  -267,   283,    38,  -267,
     215,   213,  -267,   223,   245,  -267,   221,  -267,  -267,  -267,
    -267,   944,   332,   232,    47,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,  -267,   776,
    -267,   233,  1785,  -267,   236,   237,   237,  1168,    54,   238,
     248,   249,  -267,  -267,   257,   251,  -267,  1168,   332,   332,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,   553,   332,   609,   212,   255,   258,
     265,   269,   270,   158,  1785,  -267,   271,  -267,  -267,   272,
     273,  -267,  -267,  -267,   274,    96,   262,   178,  -267,   665,
      38,   279,   279,  -267,    38,   721,   332,   777,  -267,   332,
     277,   284,  -267,   833,  -267,  1168,  -267,   889,   275,   945,
      38,    38,   636,  -267,  -267,  -267,  -267,  -267,   306,  -267,
    1001,   832,    38,  1168,  -267,  1057,   293,  -267,  1113,  -267,
    -267,  -267,  -267,  -267,   286,    90,  1169,  1000,  1056,   163,
    -267,  -267,   289,   177,  -267,  -267,   888,  -267,  -267,  -267,
     282,   298,   300,    90,  -267,  -267,    90,   301,   302,    38,
    -267,   305,   290,  1225,  -267,  -267,  -267,    90,  -267,  1281,
    1337,   664,    38,   311,   307,  -267,  1393,  -267,  -267,  1449,
    -267,  1505,   126,  1112,  -267,   308,  -267,  -267,  -267,  -267,
     315,  -267,  1561,   310,  -267,  1617,  1673,  -267,  -267,  1729,
    -267
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -267,  -267,  -267,   354,  -267,    11,  -267,   333,   -28,   107,
     114,  -267,   260,  -104,   330,  -267,   340,    17,  -267,   224,
     -49,  -267,   -17,   -27,  -267,   325,   267,  -267,    13,  -267,
     316,   353,  -267,  -267,   157,  -184,  -267,   129,  -267,  -267,
    -267,  -267,  -267,  -267,   -58,   378,    -6,   159,   -12,   -23,
    -267,   196,  -267,   195,   -52,    64,   -40,  -267,    77,  -237,
    -267,  -266,    70
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -147
static const yytype_int16 yytable[] =
{
      44,    92,    92,    66,    69,    51,    42,    67,    90,   152,
       8,    50,    86,    65,   250,   251,    44,   147,    44,   305,
      44,    10,    42,    30,    42,    39,    42,   127,   132,   133,
      69,   135,    87,   130,   130,   130,    11,   130,   148,    30,
     318,    39,   162,    30,   108,    39,    44,   103,    12,    59,
     143,    61,    42,   101,    52,    60,   130,    26,    89,   160,
     109,   161,   276,   111,   158,   130,   314,   130,   116,    30,
     117,    39,   113,    75,   118,   119,   179,    76,    87,   112,
     314,    53,   130,   103,   199,   120,   121,   180,   114,   101,
     187,    90,    54,   107,   243,    59,   130,   103,    55,   244,
     103,    60,   103,   101,    61,  -146,   101,    68,   101,    56,
     130,   254,   137,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   144,   103,    75,   150,
      -9,   153,   140,   101,    73,   186,    70,     1,     2,    75,
       3,   185,    71,   145,   301,   302,   130,   130,    72,   131,
     131,   131,    74,   131,    84,     1,     2,   255,     3,    80,
      81,    13,    14,   130,    15,    16,    17,    18,    19,    20,
      85,    43,   131,    91,    25,    95,   104,   105,   106,    60,
     159,   131,   271,   131,   108,   107,   273,    43,   130,    43,
     110,    43,   130,    26,   130,   115,    66,   130,   131,   136,
      67,   134,   287,   288,   116,    97,    65,   138,   130,   130,
     118,   119,   131,   290,   296,   139,   151,    43,   102,   141,
     130,   156,   121,   142,   145,   154,   131,   163,   164,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   126,   126,   126,   291,   126,    87,   181,   162,
     182,   321,   184,   189,   102,    60,   293,   130,    61,  -146,
     190,   191,   131,   131,   333,   126,   113,    61,   102,   198,
     130,   102,   214,   102,   126,   239,   126,   245,   240,   131,
     129,   129,   129,   339,   129,   246,    13,    14,   247,    15,
      16,   126,    18,    19,    20,   248,   249,   259,   102,    25,
     323,   258,   260,   129,   131,   126,   261,   262,   131,   268,
     131,   264,   129,   131,   129,   280,   265,   266,   267,   126,
     272,   253,   281,   257,   131,   131,   284,   111,    40,   129,
      49,   298,   300,   309,   311,   312,   131,    49,   263,   313,
     319,   320,   322,   129,    40,   335,   270,   342,    40,   346,
     151,    26,   275,   343,   278,   126,   126,   129,   334,     9,
      63,    58,   116,   183,   117,    41,   286,   263,   118,   119,
      64,   263,   126,   131,    40,   155,    94,   146,   279,   120,
     121,    41,   242,   317,   263,    41,   131,   327,     0,   263,
       0,     0,   263,   129,   129,     0,     0,   126,     0,     0,
     263,   126,     0,   126,     0,     0,   126,     0,     0,     0,
     129,    41,     0,     0,     0,     0,     0,   126,   126,     0,
     326,     0,     0,     0,     0,     0,   329,   331,     0,   126,
       0,     0,    40,     0,     0,   129,     0,     0,     0,   129,
     263,   129,     0,   263,   129,   263,     0,     0,     0,   345,
       0,     0,     0,   349,     0,   129,   129,     0,     0,   263,
       0,     0,     0,   263,     0,     0,   126,   129,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
       0,    40,    40,    40,    40,    40,    40,    40,    40,    40,
      40,    40,    40,    40,   157,    13,    14,     0,    15,    16,
      17,    18,    19,    20,   129,     0,    23,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   129,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,     0,    15,    16,     0,    18,
      19,    20,   216,   252,     0,     0,    25,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,    97,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,     0,    15,    16,     0,    18,    19,    20,   216,   256,
       0,     0,    25,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,   289,    26,    27,   165,   166,   167,   168,
     169,   170,   171,   172,     0,   173,   174,   175,   176,   177,
       0,     0,     0,     0,   216,   269,     0,     0,   332,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,   165,   166,   167,   168,   169,   170,   171,   172,
       0,   173,   174,   175,   176,   177,     0,     0,     0,     0,
     216,   274,   178,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   165,   166,
     167,   168,   169,   170,   171,   172,     0,   173,   174,   175,
     176,   177,     0,     0,     0,     0,   216,   277,   213,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   165,   166,   167,   168,   169,   170,
     171,   172,     0,   173,   174,   175,   176,   177,     0,     0,
       0,     0,   216,   282,   295,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     165,   166,   167,   168,   169,   170,   171,   172,     0,   173,
     174,   175,   176,   177,     0,     0,     0,     0,   216,   283,
     310,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,   165,   166,   167,   168,
     169,   170,   171,   172,     0,   173,   174,   175,   176,   177,
       0,     0,   192,     0,   216,   285,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,   165,   166,   167,   168,   169,   170,   171,   172,
       0,   173,   174,   175,   176,   177,     0,     0,   307,     0,
     216,   294,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,   165,   166,
     167,   168,   169,   170,   171,   172,     0,   173,   174,   175,
     176,   177,     0,     0,   308,     0,   216,   297,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,   165,   166,   167,   168,   169,   170,
     171,   172,     0,   173,   174,   175,   176,   177,     0,     0,
     341,     0,   216,   299,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
     165,   166,   167,   168,   169,   170,   171,   172,     0,   173,
     174,   175,   176,   177,     0,     0,     0,     0,   216,   306,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   325,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   328,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   330,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   336,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   337,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,   338,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,     0,    24,    25,   215,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   344,     0,     0,     0,     0,     0,     0,   217,     0,
       0,   218,     0,     0,   219,     0,     0,   220,   221,   222,
      13,    14,     0,    15,    16,    17,    18,    19,    20,    21,
      22,     0,    24,    25,   215,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,   347,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,     0,
     219,     0,     0,   220,   221,   222,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    24,    25,
     215,     0,    26,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   348,     0,     0,     0,     0,     0,     0,
     217,     0,     0,   218,     0,     0,   219,     0,     0,   220,
     221,   222,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,     0,    24,    25,   215,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,   350,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,     0,   219,     0,     0,   220,   221,   222,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      24,    25,   215,     0,    26,    27,     0,     0,     0,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   216,    26,    27,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,     0,   219,     0,
       0,   220,   221,   222,     0,    28,    57,     0,     0,     0,
       0,    13,    14,    29,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,    27,    13,
      14,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,    26,    27,    28,    96,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    29
};

static const yytype_int16 yycheck[] =
{
      12,    50,    51,    30,    32,    17,    12,    30,    48,   113,
       0,    17,    21,    30,   198,   199,    28,    18,    30,   285,
      32,     5,    28,    12,    30,    12,    32,    85,    86,    87,
      58,    89,    41,    85,    86,    87,    47,    89,    39,    28,
     306,    28,    37,    32,    21,    32,    58,    59,    39,    37,
     108,    46,    58,    59,    20,    43,   108,    19,    21,   117,
      37,   119,   246,    21,   116,   117,   303,   119,    30,    58,
      32,    58,    21,    43,    36,    37,   134,    47,    41,    37,
     317,    20,   134,    95,    37,    47,    48,   136,    37,    95,
     148,   131,    47,    46,    40,    37,   148,   109,    20,    45,
     112,    43,   114,   109,    46,    47,   112,    40,   114,    46,
     162,   215,    95,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   109,   139,    43,   112,
       5,   114,    47,   139,    47,   147,    44,    12,    13,    43,
      15,   147,    44,    47,    54,    55,   198,   199,    44,    85,
      86,    87,    47,    89,    44,    12,    13,   215,    15,    47,
      47,     3,     4,   215,     6,     7,     8,     9,    10,    11,
      21,    12,   108,    47,    16,    37,    44,    44,    44,    43,
     116,   117,   240,   119,    21,    46,   244,    28,   240,    30,
      45,    32,   244,    19,   246,    45,   223,   249,   134,    45,
     223,    41,   260,   261,    30,    47,   223,    38,   260,   261,
      36,    37,   148,   262,   272,    45,    18,    58,    59,    47,
     272,    47,    48,    47,    47,    47,   162,    47,    47,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,    85,    86,    87,   262,    89,    41,    38,    37,
      39,   309,    38,    38,    95,    43,   262,   309,    46,    47,
      47,    38,   198,   199,   322,   108,    21,    46,   109,    37,
     322,   112,    39,   114,   117,    39,   119,    39,    41,   215,
      85,    86,    87,   332,    89,    37,     3,     4,    39,     6,
       7,   134,     9,    10,    11,    38,    45,    39,   139,    16,
     312,    46,    37,   108,   240,   148,    37,    37,   244,    47,
     246,    40,   117,   249,   119,    38,    44,    44,    44,   162,
      41,   214,    38,   216,   260,   261,    51,    21,    12,   134,
      47,    38,    46,    44,    52,    37,   272,    47,   224,    39,
      39,    39,    37,   148,    28,    38,   239,    39,    32,    39,
      18,    19,   245,    38,   247,   198,   199,   162,    47,     5,
      30,    28,    30,   139,    32,    12,   259,   253,    36,    37,
      30,   257,   215,   309,    58,   115,    51,   110,   249,    47,
      48,    28,   186,   306,   270,    32,   322,   317,    -1,   275,
      -1,    -1,   278,   198,   199,    -1,    -1,   240,    -1,    -1,
     286,   244,    -1,   246,    -1,    -1,   249,    -1,    -1,    -1,
     215,    58,    -1,    -1,    -1,    -1,    -1,   260,   261,    -1,
     313,    -1,    -1,    -1,    -1,    -1,   319,   320,    -1,   272,
      -1,    -1,   116,    -1,    -1,   240,    -1,    -1,    -1,   244,
     326,   246,    -1,   329,   249,   331,    -1,    -1,    -1,   342,
      -1,    -1,    -1,   346,    -1,   260,   261,    -1,    -1,   345,
      -1,    -1,    -1,   349,    -1,    -1,   309,   272,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   116,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,   309,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,    -1,     9,
      10,    11,    39,    40,    -1,    -1,    16,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    47,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,    -1,     9,    10,    11,    39,    40,
      -1,    -1,    16,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    47,    19,    20,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    44,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      39,    40,    42,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    39,    40,    42,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    39,    40,    42,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,    40,
      42,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    38,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    38,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    56,    57,    58,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,
      57,    58,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    57,    58,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    -1,    19,    20,    -1,    -1,    -1,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    39,    19,    20,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    56,    57,    58,    -1,    39,    40,    -1,    -1,    -1,
      -1,     3,     4,    47,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    65,    66,    67,    68,     0,    67,
       5,    47,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    19,    20,    39,    47,
      69,    70,    71,    72,    78,    80,    85,    86,    87,    92,
      94,    95,   110,   111,   112,   113,   117,   118,   119,    47,
     110,   112,    20,    20,    47,    20,    46,    40,    71,    37,
      43,    46,    47,    78,    80,    86,    87,   113,    40,    72,
      44,    44,    44,    47,    47,    43,    47,    84,    88,    90,
      47,    47,    75,    76,    44,    21,    21,    41,   120,    21,
     120,    47,    84,    89,    89,    37,    40,    47,    81,    82,
      83,   110,   111,   112,    44,    44,    44,    46,    21,    37,
      45,    21,    37,    21,    37,    45,    30,    32,    36,    37,
      47,    48,    94,    95,    96,    97,    98,   108,   109,   117,
     118,   119,   108,   108,    41,   108,    45,    81,    38,    45,
      47,    47,    47,   108,    81,    47,    90,    18,    39,   114,
      81,    18,    77,    81,    47,    76,    47,   109,   118,   119,
     108,   108,    37,    47,    47,    22,    23,    24,    25,    26,
      27,    28,    29,    31,    32,    33,    34,    35,    42,   108,
      84,    38,    39,    83,    38,   110,   112,   108,   116,    38,
      47,    38,    38,    77,    99,   100,   101,   108,    37,    37,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,    42,    39,    17,    39,    47,    50,    53,
      56,    57,    58,    69,    73,    74,    79,    91,    92,    93,
      98,   102,   103,   104,   107,   110,   111,   112,   121,    39,
      41,   115,   115,    40,    45,    39,    37,    39,    38,    45,
      99,    99,    40,    73,    77,   108,    40,    73,    46,    39,
      37,    37,    37,    74,    40,    44,    44,    44,    47,    40,
      73,   108,    41,   108,    40,    73,    99,    40,    73,   101,
      38,    38,    40,    40,    51,    40,    73,   108,   108,    47,
      84,    86,   105,   110,    40,    42,   108,    40,    38,    40,
      46,    54,    55,   122,   123,   125,    40,    38,    38,    44,
      42,    52,    37,    39,   123,   125,   126,   122,   125,    39,
      39,   108,    37,   112,   124,    40,    73,   126,    40,    73,
      40,    73,    44,   108,    47,    38,    40,    40,    40,    84,
     106,    38,    39,    38,    40,    73,    39,    40,    40,    73,
      40
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
#line 2047 "parse.tab.c"
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
#line 439 "parse.y"


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
