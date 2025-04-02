
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
     SYSTEM = 304,
     OUT = 305,
     PRINTLN = 306,
     UMINUS = 307
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
#line 181 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "parse.tab.c"

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
#define YYLAST   946

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    19,    21,    23,
      24,    25,    27,    29,    32,    34,    36,    38,    41,    45,
      48,    50,    52,    54,    57,    61,    65,    67,    71,    77,
      85,    86,    88,    97,   106,   115,   124,   132,   140,   148,
     156,   157,   159,   161,   165,   168,   171,   174,   178,   182,
     186,   190,   194,   198,   203,   208,   212,   214,   218,   220,
     222,   224,   227,   230,   233,   236,   238,   240,   242,   251,
     254,   257,   260,   266,   272,   277,   279,   281,   282,   284,
     286,   290,   292,   294,   296,   299,   302,   306,   310,   314,
     318,   322,   326,   330,   334,   338,   342,   346,   350,   354,
     356,   358,   361,   363,   366,   370,   372,   374,   376,   378,
     380,   382,   384,   386,   388,   390,   392,   394,   397,   400,
     402,   406,   412,   416,   420,   424,   428,   433,   435,   439,
     442,   445,   448,   451,   453,   457
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    -1,    55,    56,    -1,
      57,     5,    47,    39,    58,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    -1,    59,    -1,    60,    -1,    59,
      60,    -1,    80,    -1,    68,    -1,    66,    -1,    39,    40,
      -1,    39,    59,    40,    -1,    61,    62,    -1,    62,    -1,
      80,    -1,    79,    -1,    39,    40,    -1,    39,    61,    40,
      -1,    63,    45,    64,    -1,    64,    -1,    47,    21,    65,
      -1,    18,    47,    37,    87,    38,    -1,    47,    37,    69,
      38,    39,    67,    40,    -1,    -1,    61,    -1,    93,    47,
      37,    69,    38,    39,    61,    40,    -1,    94,    47,    37,
      69,    38,    39,    61,    40,    -1,    14,    47,    37,    69,
      38,    39,    61,    40,    -1,    95,    47,    37,    69,    38,
      39,    61,    40,    -1,    93,    47,    37,    69,    38,    39,
      40,    -1,    94,    47,    37,    69,    38,    39,    40,    -1,
      14,    47,    37,    69,    38,    39,    40,    -1,    95,    47,
      37,    69,    38,    39,    40,    -1,    -1,    70,    -1,    71,
      -1,    70,    45,    71,    -1,    93,    47,    -1,    94,    47,
      -1,    95,    47,    -1,    47,    21,    91,    -1,   100,    21,
      91,    -1,   101,    21,    91,    -1,   102,    21,    91,    -1,
      95,    63,    44,    -1,    93,    76,    44,    -1,     8,    95,
      77,    44,    -1,     8,    93,    77,    44,    -1,    76,    45,
      78,    -1,    78,    -1,    77,    45,    72,    -1,    72,    -1,
      47,    -1,    72,    -1,    81,    44,    -1,    86,    44,    -1,
      90,    44,    -1,    73,    44,    -1,    96,    -1,    74,    -1,
      75,    -1,    49,    46,    50,    46,    51,    37,    91,    38,
      -1,    19,    46,    -1,    47,    46,    -1,    83,    46,    -1,
      82,    47,    37,    87,    38,    -1,    83,    47,    37,    87,
      38,    -1,    47,    37,    87,    38,    -1,    84,    -1,    85,
      -1,    -1,    88,    -1,    89,    -1,    88,    45,    89,    -1,
      91,    -1,    65,    -1,    17,    -1,    17,    91,    -1,    17,
      65,    -1,    91,    31,    92,    -1,    91,    32,    92,    -1,
      91,    33,    92,    -1,    91,    34,    92,    -1,    91,    35,
      92,    -1,    91,    22,    92,    -1,    91,    23,    92,    -1,
      91,    24,    92,    -1,    91,    25,    92,    -1,    91,    26,
      92,    -1,    91,    27,    92,    -1,    91,    28,    92,    -1,
      91,    29,    92,    -1,   100,    -1,    86,    -1,    32,    91,
      -1,    92,    -1,    30,    92,    -1,    37,    91,    38,    -1,
     101,    -1,   102,    -1,    48,    -1,    36,    -1,     9,    -1,
       7,    -1,     3,    -1,     4,    -1,     6,    -1,    10,    -1,
      11,    -1,    16,    -1,    93,    43,    -1,    47,    43,    -1,
      47,    -1,    94,    47,    44,    -1,    94,    47,    21,    97,
      44,    -1,    18,    95,    98,    -1,    18,    93,    98,    -1,
      39,    99,    40,    -1,    41,    91,    42,    -1,    98,    41,
      91,    42,    -1,    91,    -1,    99,    45,    91,    -1,   101,
     103,    -1,   102,   103,    -1,    83,    47,    -1,    82,    47,
      -1,    47,    -1,    41,    91,    42,    -1,   103,    41,    91,
      42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    51,    55,    59,    60,    61,    61,
      64,    66,    70,    71,    75,    76,    77,    78,    79,    83,
      84,    88,    89,    90,    91,    95,    96,   100,   104,   108,
     111,   113,   118,   119,   120,   121,   122,   123,   124,   125,
     142,   144,   148,   148,   152,   153,   154,   158,   162,   163,
     164,   168,   169,   174,   175,   184,   185,   189,   190,   194,
     194,   198,   199,   200,   207,   208,   209,   210,   214,   219,
     224,   225,   229,   230,   234,   238,   239,   243,   245,   249,
     249,   253,   254,   282,   283,   284,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   309,   310,   311,   312,   313,   314,   318,
     318,   318,   318,   318,   318,   318,   318,   322,   323,   327,
     333,   334,   338,   339,   340,   344,   345,   349,   350,   354,
     355,   359,   360,   364,   368,   369
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
  "SEMICOLON", "COMMA", "DOT", "IDENT", "NUM", "SYSTEM", "OUT", "PRINTLN",
  "UMINUS", "$accept", "program", "class_declaration_list",
  "class_declaration", "modificator", "class_body", "core_body_sequence",
  "core_body", "block_body_sequence", "block_body", "instanciation_list",
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
  "array_indices", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    57,    57,    57,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    62,    62,    63,    63,    64,    65,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    72,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    80,    80,    80,    80,    81,    82,
      83,    83,    84,    84,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      96,    96,    97,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   103,   103
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     1,     1,     1,     0,
       0,     1,     1,     2,     1,     1,     1,     2,     3,     2,
       1,     1,     1,     2,     3,     3,     1,     3,     5,     7,
       0,     1,     8,     8,     8,     8,     7,     7,     7,     7,
       0,     1,     1,     3,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     4,     4,     3,     1,     3,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     8,     2,
       2,     2,     5,     5,     4,     1,     1,     0,     1,     1,
       3,     1,     1,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       3,     5,     3,     3,     3,     3,     4,     1,     3,     2,
       2,     2,     2,     1,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    10,   111,   112,   113,   110,     0,   109,   114,
     115,     0,   116,     0,     0,   133,     0,    11,    12,    16,
      15,     0,    66,    67,    14,     0,     0,     0,     0,     0,
      65,     0,     0,     0,   119,     0,     0,     0,    69,    17,
       0,    40,   118,    70,     5,    13,    64,   132,    71,   131,
     117,    59,    60,     0,    56,     0,     0,     0,    26,     0,
       0,     0,   129,     0,   130,     0,    58,     0,     0,    40,
      18,   119,     0,    41,    42,     0,     0,     0,     0,    40,
      52,     0,     0,    40,   120,     0,    40,    51,     0,     0,
       0,   108,     0,   133,   107,     0,     0,    75,    76,   100,
      48,   102,    99,   105,   106,    49,     0,     0,    50,    54,
       0,    53,     0,     0,     0,    44,    45,    46,    47,     0,
      59,    55,     0,     0,     0,     0,     0,    27,     0,     0,
      25,   133,   103,   105,   106,   101,     0,    77,   132,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,    57,     0,    30,    43,     0,
       0,     0,   127,     0,   121,     0,     0,     0,   104,    82,
       0,    78,    79,    81,    77,    77,    91,    92,    93,    94,
      95,    96,    97,    98,    86,    87,    88,    89,    90,   135,
       0,    83,     0,   133,     0,    31,    20,     0,    22,    21,
       0,     0,     0,     0,     0,     0,     0,     0,   123,   122,
     124,     0,     0,    77,     0,    74,     0,     0,     0,    38,
       0,    85,    84,    23,     0,     0,    19,    29,    61,    62,
      63,     0,    36,     0,     0,     0,   128,    37,     0,     0,
      39,     0,    80,    72,    73,    34,    24,     0,    32,   125,
       0,    33,    28,    35,     0,   126,     0,     0,     0,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    26,    27,    28,   205,   206,
      67,    68,   179,    29,   207,    30,    82,    83,    84,    62,
      31,    32,    33,    63,    77,    64,   208,   209,   210,   105,
     106,   107,   108,   109,   180,   181,   182,   212,   183,   111,
     213,   214,   215,    40,   134,   218,   173,   112,   113,   114,
      72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -183
static const yytype_int16 yypact[] =
{
     112,  -183,  -183,  -183,    18,   104,  -183,    15,  -183,  -183,
     -22,    22,   788,  -183,  -183,  -183,  -183,   272,  -183,  -183,
    -183,    10,  -183,    36,   732,   116,    40,   788,  -183,  -183,
    -183,    45,  -183,  -183,  -183,    65,    13,   -13,    83,   109,
    -183,    76,    23,    34,  -183,   119,   119,   117,  -183,  -183,
     746,   395,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,    21,  -183,    88,  -183,    -4,    73,    91,  -183,   210,
     210,   210,   127,   210,   127,   163,  -183,   107,   113,   395,
    -183,   142,   153,   147,  -183,    24,   148,   149,   210,   395,
    -183,   154,    14,   395,  -183,   182,   395,  -183,   158,   179,
     210,  -183,   210,    26,  -183,   160,   118,  -183,  -183,  -183,
     911,  -183,  -183,   161,   161,   911,   786,   210,   911,  -183,
     119,  -183,   176,   169,   395,  -183,  -183,  -183,   911,   185,
     163,  -183,   272,   210,   186,   194,   190,  -183,   200,   223,
    -183,   199,  -183,  -183,  -183,  -183,   877,    66,   211,   219,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,  -183,   814,  -183,   220,   331,  -183,   221,
     222,   222,   911,   -32,  -183,   225,   224,   226,  -183,  -183,
     230,   228,  -183,   911,    66,    66,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
     412,    66,   429,   248,   231,   331,  -183,   246,  -183,  -183,
     227,   243,   245,    68,   249,   158,   476,   210,   251,   251,
    -183,   210,   493,    66,   540,  -183,    66,   252,   259,  -183,
     557,  -183,   911,  -183,   604,   253,  -183,  -183,  -183,  -183,
    -183,   -15,  -183,   621,   835,   210,   911,  -183,   668,   261,
    -183,   685,  -183,  -183,  -183,  -183,  -183,   256,  -183,  -183,
     856,  -183,  -183,  -183,   267,  -183,   299,   210,   894,  -183
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,  -183,  -183,   338,  -183,  -183,   280,     1,   -96,  -178,
    -183,   247,   -94,  -183,  -183,  -183,    12,  -183,   240,   -41,
    -183,  -183,  -183,  -183,   298,   255,  -183,    -5,  -183,   170,
     201,  -183,  -183,   166,  -182,  -183,   123,  -183,   -34,   155,
      -3,   110,    -1,  -183,  -183,   196,  -183,    50,   -12,    19,
     -33
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -120
static const yytype_int16 yytable[] =
{
      42,   137,   227,   228,    76,    76,    92,    34,   220,    37,
      74,    39,    42,   221,    45,    42,    46,    92,     8,    34,
      10,    37,    34,    39,    37,    11,    39,   236,    55,    94,
      60,    43,   132,    93,    61,   110,   115,   116,    42,   118,
      94,   249,    88,    43,    70,    34,    43,    37,    85,    39,
      87,    55,   236,   133,   128,    73,   236,    47,    89,    58,
      59,    12,    41,   147,    71,   236,   145,    60,   146,    43,
     236,   125,    53,   236,    41,    71,    85,    41,    87,   165,
      54,    74,    48,   164,   136,    23,    85,   143,    87,    56,
      85,   122,    87,    85,    95,    87,    99,    69,   100,   172,
      41,   129,   101,   102,   230,   135,   234,   231,   138,    -9,
      96,    60,    57,   103,   104,   130,     1,     2,   144,     3,
     243,    85,    38,    87,     1,     2,   248,     3,   251,   170,
      65,   171,    90,    91,    38,    97,    98,    38,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   119,   120,    51,    79,    42,    66,   121,   120,    52,
      38,    86,    53,  -119,    58,   149,    75,   232,   117,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,    35,   244,    88,    52,    43,   246,    42,    86,
      42,   123,   124,    42,    35,   126,   127,    35,    23,    86,
     136,   130,    71,    86,    42,   139,    86,   148,   167,    99,
      42,   260,    42,    36,   166,   101,   102,    41,    42,    43,
      35,    43,    42,   169,    43,    36,   141,   104,    36,    23,
     174,    42,   175,   268,    86,    43,    42,   176,   177,    42,
      99,    43,   100,    43,    95,    53,   101,   102,   184,    43,
      41,    36,    41,    43,   142,    41,   185,   103,   104,   200,
     216,   223,    43,   217,   222,   224,    41,    43,   225,    35,
      43,   238,    41,   226,    41,    13,    14,   235,    15,    16,
      41,    18,    19,    20,    41,   147,   237,   239,    22,   240,
     253,    52,   245,    41,    53,  -119,   241,   254,    41,   262,
      36,    41,   264,   257,    50,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   266,    44,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      35,    35,    35,   211,    13,    14,   267,    15,    16,    17,
      18,    19,    20,     9,    78,   140,   131,    22,   201,   252,
      23,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,   168,     0,   211,   219,   211,     0,
     202,   211,     0,     0,     0,     0,     0,     0,   203,     0,
     204,     0,   211,     0,     0,     0,     0,     0,   211,     0,
     211,     0,     0,     0,     0,     0,   211,     0,    13,    14,
     211,    15,    16,     0,    18,    19,    20,     0,     0,   211,
       0,    22,     0,     0,   211,    13,    14,   211,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    22,   201,
       0,    23,    13,    14,     0,    15,    16,    17,    18,    19,
      20,     0,    81,     0,     0,    22,   201,     0,    23,     0,
       0,   202,   229,     0,     0,     0,     0,     0,     0,   203,
       0,   204,     0,     0,     0,     0,     0,     0,   202,   233,
       0,     0,     0,     0,     0,     0,   203,     0,   204,    13,
      14,     0,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    22,   201,     0,    23,    13,    14,     0,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,    22,
     201,     0,    23,     0,     0,   202,   242,     0,     0,     0,
       0,     0,     0,   203,     0,   204,     0,     0,     0,     0,
       0,     0,   202,   247,     0,     0,     0,     0,     0,     0,
     203,     0,   204,    13,    14,     0,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    22,   201,     0,    23,
      13,    14,     0,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,    22,   201,     0,    23,     0,     0,   202,
     250,     0,     0,     0,     0,     0,     0,   203,     0,   204,
       0,     0,     0,     0,     0,     0,   202,   255,     0,     0,
       0,     0,     0,     0,   203,     0,   204,    13,    14,     0,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
      22,   201,     0,    23,    13,    14,     0,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,    22,   201,     0,
      23,     0,     0,   202,   256,     0,     0,     0,     0,     0,
       0,   203,     0,   204,     0,     0,     0,     0,     0,     0,
     202,   258,     0,     0,     0,     0,     0,     0,   203,     0,
     204,    13,    14,     0,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    22,   201,     0,    23,    13,    14,
       0,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,    22,   201,     0,    23,     0,     0,   202,   261,     0,
       0,     0,     0,     0,     0,   203,     0,   204,     0,     0,
       0,     0,     0,     0,   202,   263,     0,     0,     0,     0,
       0,     0,   203,     0,   204,    13,    14,     0,    15,    16,
      17,    18,    19,    20,     0,     0,    21,     0,    22,    13,
      14,    23,    15,    16,    17,    18,    19,    20,     0,     0,
      21,     0,    22,     0,     0,    23,     0,     0,     0,     0,
       0,    24,    49,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    24,    80,     0,     0,     0,
       0,    13,    14,    25,    15,    16,    17,    18,    19,    20,
       0,     0,    21,     0,    22,     0,     0,    23,   150,   151,
     152,   153,   154,   155,   156,   157,     0,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,    24,   163,     0,
       0,     0,     0,     0,     0,    25,   150,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,   199,   150,   151,   152,
     153,   154,   155,   156,   157,     0,   158,   159,   160,   161,
     162,     0,     0,     0,     0,     0,     0,   259,   150,   151,
     152,   153,   154,   155,   156,   157,     0,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,   265,   150,
     151,   152,   153,   154,   155,   156,   157,     0,   158,   159,
     160,   161,   162,     0,     0,   178,   150,   151,   152,   153,
     154,   155,   156,   157,     0,   158,   159,   160,   161,   162,
       0,     0,   269,   150,   151,   152,   153,   154,   155,   156,
     157,     0,   158,   159,   160,   161,   162
};

static const yytype_int16 yycheck[] =
{
      12,    95,   184,   185,    45,    46,    21,    12,    40,    12,
      43,    12,    24,    45,    17,    27,    17,    21,     0,    24,
       5,    24,    27,    24,    27,    47,    27,   205,    27,    44,
      43,    12,    18,    37,    47,    69,    70,    71,    50,    73,
      44,   223,    21,    24,    21,    50,    27,    50,    51,    50,
      51,    50,   230,    39,    88,    21,   234,    47,    37,    46,
      47,    39,    12,    37,    41,   243,   100,    43,   102,    50,
     248,    47,    46,   251,    24,    41,    79,    27,    79,   120,
      40,   114,    46,   117,    18,    19,    89,    99,    89,    44,
      93,    79,    93,    96,    21,    96,    30,    21,    32,   133,
      50,    89,    36,    37,   200,    93,   202,   201,    96,     5,
      37,    43,    47,    47,    48,    47,    12,    13,    99,    15,
     216,   124,    12,   124,    12,    13,   222,    15,   224,   132,
      47,   132,    44,    45,    24,    44,    45,    27,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,    44,    45,    37,    37,   167,    47,    44,    45,    43,
      50,    51,    46,    47,    46,    47,    47,   201,    41,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,    12,   217,    21,    43,   167,   221,   200,    79,
     202,    38,    45,   205,    24,    47,    47,    27,    19,    89,
      18,    47,    41,    93,   216,    47,    96,    47,    39,    30,
     222,   245,   224,    12,    38,    36,    37,   167,   230,   200,
      50,   202,   234,    38,   205,    24,    47,    48,    27,    19,
      44,   243,    38,   267,   124,   216,   248,    47,    38,   251,
      30,   222,    32,   224,    21,    46,    36,    37,    37,   230,
     200,    50,   202,   234,    99,   205,    37,    47,    48,    39,
      39,    37,   243,    41,    39,    39,   216,   248,    38,    99,
     251,    44,   222,    45,   224,     3,     4,    46,     6,     7,
     230,     9,    10,    11,   234,    37,    40,    44,    16,    44,
      38,    43,    41,   243,    46,    47,    47,    38,   248,    38,
      99,   251,    46,    50,    24,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,    51,    47,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   167,     3,     4,    37,     6,     7,     8,
       9,    10,    11,     5,    46,    98,    91,    16,    17,   226,
      19,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   124,    -1,   200,   171,   202,    -1,
      39,   205,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,   216,    -1,    -1,    -1,    -1,    -1,   222,    -1,
     224,    -1,    -1,    -1,    -1,    -1,   230,    -1,     3,     4,
     234,     6,     7,    -1,     9,    10,    11,    -1,    -1,   243,
      -1,    16,    -1,    -1,   248,     3,     4,   251,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,
      -1,    19,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    -1,    47,    -1,    -1,    16,    17,    -1,    19,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    17,    -1,    19,     3,     4,    -1,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    49,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,    19,
       3,     4,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,    19,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    49,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      16,    17,    -1,    19,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    16,    17,    -1,    19,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    16,    17,    -1,    19,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    49,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    14,    -1,    16,     3,
       4,    19,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    -1,    16,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,     3,     4,    47,     6,     7,     8,     9,    10,    11,
      -1,    -1,    14,    -1,    16,    -1,    -1,    19,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    39,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    -1,    38,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    -1,    38,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    54,    55,    56,    57,     0,    56,
       5,    47,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    14,    16,    19,    39,    47,    58,    59,    60,    66,
      68,    73,    74,    75,    80,    82,    83,    93,    94,    95,
      96,   100,   101,   102,    47,    93,    95,    47,    46,    40,
      59,    37,    43,    46,    40,    60,    44,    47,    46,    47,
      43,    47,    72,    76,    78,    47,    47,    63,    64,    21,
      21,    41,   103,    21,   103,    47,    72,    77,    77,    37,
      40,    47,    69,    70,    71,    93,    94,    95,    21,    37,
      44,    45,    21,    37,    44,    21,    37,    44,    45,    30,
      32,    36,    37,    47,    48,    82,    83,    84,    85,    86,
      91,    92,   100,   101,   102,    91,    91,    41,    91,    44,
      45,    44,    69,    38,    45,    47,    47,    47,    91,    69,
      47,    78,    18,    39,    97,    69,    18,    65,    69,    47,
      64,    47,    92,   101,   102,    91,    91,    37,    47,    47,
      22,    23,    24,    25,    26,    27,    28,    29,    31,    32,
      33,    34,    35,    42,    91,    72,    38,    39,    71,    38,
      93,    95,    91,    99,    44,    38,    47,    38,    38,    65,
      87,    88,    89,    91,    37,    37,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    42,
      39,    17,    39,    47,    49,    61,    62,    67,    79,    80,
      81,    86,    90,    93,    94,    95,    39,    41,    98,    98,
      40,    45,    39,    37,    39,    38,    45,    87,    87,    40,
      61,    65,    91,    40,    61,    46,    62,    40,    44,    44,
      44,    47,    40,    61,    91,    41,    91,    40,    61,    87,
      40,    61,    89,    38,    38,    40,    40,    50,    40,    42,
      91,    40,    38,    40,    46,    42,    51,    37,    91,    38
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
#line 1774 "parse.tab.c"
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
#line 372 "parse.y"


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
