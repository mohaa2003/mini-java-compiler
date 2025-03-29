
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
     STATIC = 272,
     NEW = 273,
     THIS = 274,
     SELF = 275,
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
     SEMICOLON = 298,
     COMMA = 299,
     DOT = 300,
     IDENT = 301,
     NUM = 302,
     SYSTEM = 303,
     OUT = 304,
     PRINTLN = 305,
     UMINUS = 306
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
#line 180 "parse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 192 "parse.tab.c"

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
#define YYLAST   791

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    19,    21,    23,
      24,    25,    27,    29,    32,    34,    36,    38,    41,    45,
      48,    50,    52,    55,    59,    63,    65,    69,    75,    83,
      84,    88,    94,   103,   112,   121,   130,   138,   146,   154,
     162,   163,   165,   167,   171,   174,   177,   180,   184,   188,
     192,   196,   201,   206,   210,   212,   216,   218,   220,   222,
     225,   227,   229,   231,   234,   237,   246,   250,   254,   256,
     258,   263,   270,   271,   273,   275,   279,   281,   283,   287,
     291,   295,   299,   303,   307,   311,   315,   319,   323,   327,
     331,   335,   337,   339,   342,   344,   347,   351,   353,   355,
     357,   359,   361,   363,   365,   367,   369,   371,   373,   377,
     381,   383,   387,   393,   397,   401,   405,   409,   414,   416,
     420,   423,   427
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    55,    -1,    54,    55,    -1,
      56,     5,    46,    39,    57,    40,    -1,    12,    -1,    15,
      -1,    13,    -1,    -1,    -1,    58,    -1,    59,    -1,    58,
      59,    -1,    78,    -1,    68,    -1,    65,    -1,    39,    40,
      -1,    39,    60,    40,    -1,    60,    61,    -1,    61,    -1,
      78,    -1,    39,    40,    -1,    39,    60,    40,    -1,    62,
      44,    63,    -1,    63,    -1,    46,    21,    64,    -1,    18,
      46,    37,    83,    38,    -1,    46,    37,    69,    38,    39,
      66,    40,    -1,    -1,    66,    67,    43,    -1,    19,    45,
      46,    21,    86,    -1,    88,    46,    37,    69,    38,    39,
      60,    40,    -1,    89,    46,    37,    69,    38,    39,    60,
      40,    -1,    14,    46,    37,    69,    38,    39,    60,    40,
      -1,    90,    46,    37,    69,    38,    39,    60,    40,    -1,
      88,    46,    37,    69,    38,    39,    40,    -1,    89,    46,
      37,    69,    38,    39,    40,    -1,    14,    46,    37,    69,
      38,    39,    40,    -1,    90,    46,    37,    69,    38,    39,
      40,    -1,    -1,    70,    -1,    71,    -1,    70,    44,    71,
      -1,    88,    46,    -1,    89,    46,    -1,    90,    46,    -1,
      46,    21,    86,    -1,    95,    21,    86,    -1,    90,    62,
      43,    -1,    88,    75,    43,    -1,     8,    90,    76,    43,
      -1,     8,    88,    76,    43,    -1,    75,    44,    77,    -1,
      77,    -1,    76,    44,    72,    -1,    72,    -1,    46,    -1,
      72,    -1,    72,    43,    -1,    91,    -1,    73,    -1,    74,
      -1,    79,    43,    -1,    82,    43,    -1,    48,    45,    49,
      45,    50,    37,    86,    38,    -1,    46,    45,    46,    -1,
      80,    45,    46,    -1,    19,    -1,    20,    -1,    80,    37,
      83,    38,    -1,    81,    45,    46,    37,    83,    38,    -1,
      -1,    84,    -1,    85,    -1,    84,    44,    85,    -1,    86,
      -1,    64,    -1,    86,    31,    87,    -1,    86,    32,    87,
      -1,    86,    33,    87,    -1,    86,    34,    87,    -1,    86,
      35,    87,    -1,    86,    22,    87,    -1,    86,    23,    87,
      -1,    86,    24,    87,    -1,    86,    25,    87,    -1,    86,
      26,    87,    -1,    86,    27,    87,    -1,    86,    28,    87,
      -1,    86,    29,    87,    -1,    95,    -1,    82,    -1,    32,
      86,    -1,    87,    -1,    30,    87,    -1,    37,    86,    38,
      -1,    46,    -1,    47,    -1,    36,    -1,     9,    -1,     7,
      -1,     3,    -1,     4,    -1,     6,    -1,    10,    -1,    11,
      -1,    16,    -1,    88,    41,    42,    -1,    46,    41,    42,
      -1,    46,    -1,    89,    46,    43,    -1,    89,    46,    21,
      92,    43,    -1,    18,    90,    93,    -1,    18,    88,    93,
      -1,    39,    94,    40,    -1,    41,    86,    42,    -1,    93,
      41,    86,    42,    -1,    86,    -1,    94,    44,    86,    -1,
      46,    96,    -1,    41,    86,    42,    -1,    96,    41,    86,
      42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    47,    47,    51,    51,    55,    59,    60,    61,    61,
      64,    66,    70,    71,    75,    76,    77,    78,    79,    83,
      84,    88,    89,    90,    94,    95,    99,   103,   107,   110,
     112,   116,   121,   122,   123,   124,   125,   126,   127,   128,
     145,   147,   151,   151,   155,   156,   157,   161,   161,   165,
     166,   171,   172,   181,   182,   186,   187,   191,   191,   195,
     196,   197,   198,   203,   205,   211,   216,   217,   221,   221,
     225,   226,   230,   232,   236,   236,   240,   241,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   299,   300,   301,   302,   303,
     307,   307,   307,   307,   307,   307,   307,   307,   311,   312,
     316,   322,   323,   327,   328,   329,   333,   334,   338,   339,
     343,   347,   348
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "CHAR", "CLASS", "DOUBLE",
  "FLOAT", "FINAL", "INT", "STRING", "LONG", "PRIVATE", "PROTECTED",
  "VOID", "PUBLIC", "SHORT", "STATIC", "NEW", "THIS", "SELF", "ASSIGN",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "AND", "OR", "NOT", "PLUS",
  "MINUS", "MULTIPLY", "DIVIDE", "MOD", "STRING_LITERAL", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACKET", "RBRACKET", "SEMICOLON",
  "COMMA", "DOT", "IDENT", "NUM", "SYSTEM", "OUT", "PRINTLN", "UMINUS",
  "$accept", "program", "class_declaration_list", "class_declaration",
  "modificator", "class_body", "core_body_sequence", "core_body",
  "block_body_sequence", "block_body", "instanciation_list",
  "instanciation", "creation_object", "constructor_declaration",
  "constructor_body", "constructor_assignment", "method_declaration",
  "params", "param_list", "param_def", "assignment",
  "variables_declaration", "constantes_declaration", "variables_init",
  "constantes_init", "variable_init", "statement", "print_statement",
  "sufix_methode_list", "method_prefix", "method_call", "args", "arg_list",
  "arg_type", "expression", "simple_expression", "premitive_type",
  "array_type", "type_abstract", "array_declaration",
  "array_initialization", "array_dimensions", "array_elements",
  "array_access", "array_indices", 0
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
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    56,    56,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    60,
      60,    61,    61,    61,    62,    62,    63,    64,    65,    66,
      66,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    78,    78,    78,    78,    79,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      95,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     1,     1,     1,     0,
       0,     1,     1,     2,     1,     1,     1,     2,     3,     2,
       1,     1,     2,     3,     3,     1,     3,     5,     7,     0,
       3,     5,     8,     8,     8,     8,     7,     7,     7,     7,
       0,     1,     1,     3,     2,     2,     2,     3,     3,     3,
       3,     4,     4,     3,     1,     3,     1,     1,     1,     2,
       1,     1,     1,     2,     2,     8,     3,     3,     1,     1,
       4,     6,     0,     1,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     5,     3,     3,     3,     3,     4,     1,     3,
       2,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     6,     8,     7,     0,     2,     3,     0,     1,     4,
       0,     0,    10,   102,   103,   104,   101,     0,   100,   105,
     106,     0,   107,    68,    69,     0,   110,     0,     0,    11,
      12,    16,    15,     0,    61,    62,    14,     0,     0,     0,
       0,     0,     0,     0,    60,     0,   110,     0,     0,     0,
       0,    17,   110,     0,    20,    21,     0,     0,     0,     0,
      40,     0,     0,   120,     0,     5,    13,    59,    63,    72,
       0,     0,    64,     0,    57,    58,     0,    54,     0,     0,
       0,    25,     0,     0,    56,     0,     0,    40,    22,     0,
      18,    19,    57,     0,     0,     0,     0,    99,     0,    97,
      98,    92,    47,    94,    91,   110,     0,    41,    42,     0,
       0,     0,   109,     0,    66,     0,     0,     0,    77,     0,
      73,    74,    76,    67,     0,   108,    40,     0,    50,     0,
       0,    40,   111,     0,    40,    49,     0,    48,    52,     0,
      51,     0,    23,    97,    95,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,    46,   121,     0,     0,     0,
      70,     0,    72,     0,    53,     0,     0,     0,     0,    26,
       0,    24,    55,     0,    96,    83,    84,    85,    86,    87,
      88,    89,    90,    78,    79,    80,    81,    82,    29,    43,
     122,     0,    72,    75,     0,     0,     0,     0,   118,     0,
     112,     0,     0,     0,     0,     0,     0,    71,     0,     0,
     114,   113,   115,     0,     0,     0,    38,     0,     0,    28,
       0,     0,    27,    36,     0,     0,     0,   119,    37,     0,
      39,     0,    34,     0,    30,    65,    32,   116,     0,    33,
      35,     0,   117,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    28,    29,    30,    53,    54,
      80,    81,   118,    31,   214,   230,    32,   106,   107,   108,
      33,    34,    35,    76,    85,    77,    55,    37,    38,    39,
     101,   119,   120,   121,   122,   103,    56,    57,    58,    44,
     177,   220,   209,    45,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
      74,  -172,  -172,  -172,    21,    98,  -172,    50,  -172,  -172,
      10,    25,    88,  -172,  -172,  -172,  -172,   632,  -172,  -172,
    -172,    36,  -172,  -172,  -172,   248,    -5,    45,    35,    88,
    -172,  -172,  -172,    63,  -172,  -172,  -172,    69,    13,    90,
      71,   -32,    78,    92,  -172,   112,  -172,    93,    93,   105,
     266,  -172,   -19,   312,  -172,  -172,   -22,    97,    99,   389,
     643,   325,   101,   109,   104,  -172,  -172,  -172,  -172,   261,
     108,   110,  -172,   113,    42,  -172,    57,  -172,   -10,    30,
      77,  -172,   389,    31,  -172,    85,    87,   643,  -172,   330,
    -172,  -172,    31,    -9,   136,    79,   389,  -172,   389,    39,
    -172,  -172,   756,  -172,  -172,   117,   121,   116,  -172,    24,
     118,   125,  -172,   638,  -172,   389,   128,   129,  -172,   138,
     119,  -172,   756,  -172,   137,  -172,   643,   389,  -172,   141,
       7,   643,  -172,   170,   643,  -172,    99,   756,  -172,    93,
    -172,   154,  -172,  -172,  -172,  -172,   722,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
     152,   156,   643,  -172,  -172,  -172,  -172,   659,   146,   160,
    -172,   261,   261,   164,  -172,   632,   389,   155,   165,  -172,
     166,  -172,  -172,   168,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,   171,   261,  -172,   167,   172,   169,   169,   756,    41,
    -172,   175,   177,   376,    29,   389,   179,  -172,   394,   389,
     178,   178,  -172,   389,   440,   458,  -172,   504,   173,  -172,
     180,   739,  -172,  -172,   522,   680,   389,   756,  -172,   568,
    -172,   586,  -172,   163,  -172,  -172,  -172,  -172,   701,  -172,
    -172,   199,  -172,   389,   756
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,   219,  -172,  -172,  -172,   196,   -46,   -50,
    -172,    94,    95,  -172,  -172,  -172,  -172,   -77,  -172,    64,
      12,  -172,  -172,  -172,   183,   103,     8,  -172,  -172,  -172,
     -12,  -171,  -172,    62,   -53,    91,     6,    18,    59,  -172,
    -172,    28,  -172,   -54,  -172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -10
static const yytype_int16 yytable[] =
{
      40,   204,    59,    91,    89,   104,   102,   104,   113,    73,
     141,   130,   130,    40,    74,   104,    59,    40,    41,    73,
      36,     8,    61,    47,    92,   175,    62,   131,   104,   137,
      42,   216,    60,   132,   132,    41,    61,    36,    40,    91,
      62,    40,   104,   145,   104,   146,   176,    42,   228,   173,
      69,   133,    59,    75,   178,    10,    11,   180,    70,    84,
      84,   104,   167,    59,    12,    73,   109,   134,    75,   229,
     163,    43,   127,   104,   113,    65,    48,    40,   110,   126,
     127,   222,    49,   127,    62,   223,     1,     2,    43,     3,
      64,    13,    14,   109,    15,    16,    17,    18,    19,    20,
     128,   129,    21,    -9,    22,   110,    67,    23,    24,    95,
       1,     2,    68,     3,    72,    97,    98,   104,   104,   111,
     135,   136,   104,   208,    78,   143,   100,    25,   138,   139,
     140,   139,   109,    82,    26,    71,    27,   109,    79,    83,
     109,    75,    87,    93,   110,    94,   111,   114,   104,   110,
     115,   182,   110,   116,   123,   125,   124,   133,   160,   161,
     162,   104,   231,   171,   164,   104,   235,   227,   109,   104,
     237,   165,   234,   168,   172,   169,   170,    91,   239,   241,
     110,   206,   104,   248,    91,   111,   144,    92,   117,    91,
     111,    91,   183,   111,   112,   198,   201,   202,   210,   104,
     254,    40,   205,   211,   212,   217,    40,   213,   215,   251,
     219,   218,    40,    40,   224,    40,   225,   232,   243,   236,
     253,   111,    40,   244,     9,    66,   199,    40,   179,    40,
     181,    86,   174,   203,   207,   221,     0,     0,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,    13,    14,     0,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    22,     0,     0,    23,    24,    13,
      14,     0,    15,    16,    17,    18,    19,    20,     0,   117,
      23,    24,    22,     0,     0,    23,    24,    50,    51,     0,
       0,    95,     0,    96,    52,     0,    27,    97,    98,     0,
       0,     0,     0,     0,     0,    50,    88,    99,   100,     0,
       0,     0,    52,     0,    27,    13,    14,     0,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    22,     0,
       0,    23,    24,    13,    14,     0,    15,    16,    17,    18,
      19,    20,     0,     0,    23,    24,    22,     0,     0,    23,
      24,    50,    90,     0,     0,    95,     0,    96,    52,     0,
      27,    97,    98,     0,     0,     0,     0,   112,     0,    50,
     142,    99,   100,     0,     0,     0,    52,     0,    27,    13,
      14,     0,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    13,    14,     0,
      15,    16,    17,    18,    19,    20,     0,     0,    23,    24,
      22,     0,     0,    23,    24,    50,   226,     0,     0,    95,
       0,    96,    52,     0,    27,    97,    98,     0,     0,     0,
       0,     0,     0,    50,   233,    99,   100,     0,     0,     0,
      52,     0,    27,    13,    14,     0,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    22,     0,     0,    23,
      24,    13,    14,     0,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    22,     0,     0,    23,    24,    50,
     238,     0,     0,     0,     0,     0,    52,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   240,     0,
       0,     0,     0,     0,    52,     0,    27,    13,    14,     0,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
      22,     0,     0,    23,    24,    13,    14,     0,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    22,     0,
       0,    23,    24,    50,   242,     0,     0,     0,     0,     0,
      52,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,    50,   246,     0,     0,     0,     0,     0,    52,     0,
      27,    13,    14,     0,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    22,     0,     0,    23,    24,    13,
      14,     0,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    50,   249,     0,
       0,     0,     0,     0,    52,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,    50,   250,     0,     0,     0,
       0,     0,    52,     0,    27,    13,    14,     0,    15,    16,
       0,    18,    19,    20,     0,     0,    13,    14,    22,    15,
      16,     0,    18,    19,    20,     0,     0,     0,     0,    22,
     147,   148,   149,   150,   151,   152,   153,   154,     0,   155,
     156,   157,   158,   159,     0,     0,     0,     0,    46,     0,
     166,   147,   148,   149,   150,   151,   152,   153,   154,   105,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
       0,   200,   147,   148,   149,   150,   151,   152,   153,   154,
       0,   155,   156,   157,   158,   159,     0,     0,     0,     0,
       0,     0,   247,   147,   148,   149,   150,   151,   152,   153,
     154,     0,   155,   156,   157,   158,   159,     0,     0,     0,
       0,     0,     0,   252,   147,   148,   149,   150,   151,   152,
     153,   154,     0,   155,   156,   157,   158,   159,     0,     0,
     184,   147,   148,   149,   150,   151,   152,   153,   154,     0,
     155,   156,   157,   158,   159,     0,     0,   245,   147,   148,
     149,   150,   151,   152,   153,   154,     0,   155,   156,   157,
     158,   159
};

static const yytype_int16 yycheck[] =
{
      12,   172,    21,    53,    50,    59,    59,    61,    61,    41,
      87,    21,    21,    25,    46,    69,    21,    29,    12,    41,
      12,     0,    41,    17,    46,    18,    45,    37,    82,    82,
      12,   202,    37,    43,    43,    29,    41,    29,    50,    89,
      45,    53,    96,    96,    98,    98,    39,    29,    19,   126,
      37,    21,    21,    41,   131,     5,    46,   134,    45,    47,
      48,   115,   115,    21,    39,    41,    60,    37,    56,    40,
      46,    12,    41,   127,   127,    40,    17,    89,    60,    37,
      41,    40,    46,    41,    45,    44,    12,    13,    29,    15,
      45,     3,     4,    87,     6,     7,     8,     9,    10,    11,
      43,    44,    14,     5,    16,    87,    43,    19,    20,    30,
      12,    13,    43,    15,    43,    36,    37,   171,   172,    60,
      43,    44,   176,   176,    46,    46,    47,    39,    43,    44,
      43,    44,   126,    21,    46,    45,    48,   131,    46,    46,
     134,   129,    37,    46,   126,    46,    87,    46,   202,   131,
      41,   139,   134,    49,    46,    42,    46,    21,    41,    38,
      44,   215,   215,    44,    46,   219,   219,   213,   162,   223,
     223,    46,   218,    45,    37,    46,    38,   227,   224,   225,
     162,   175,   236,   236,   234,   126,    95,    46,    18,   239,
     131,   241,    38,   134,    42,    39,    50,    37,    43,   253,
     253,   213,    38,    38,    38,    38,   218,    39,    37,    46,
      41,    39,   224,   225,    39,   227,    39,    38,    45,    41,
      21,   162,   234,    43,     5,    29,   162,   239,   133,   241,
     136,    48,   129,   171,   175,   207,    -1,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    18,
      19,    20,    16,    -1,    -1,    19,    20,    39,    40,    -1,
      -1,    30,    -1,    32,    46,    -1,    48,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    46,    47,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    19,    20,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    19,    20,    16,    -1,    -1,    19,
      20,    39,    40,    -1,    -1,    30,    -1,    32,    46,    -1,
      48,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,    39,
      40,    46,    47,    -1,    -1,    -1,    46,    -1,    48,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    19,    20,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    19,    20,
      16,    -1,    -1,    19,    20,    39,    40,    -1,    -1,    30,
      -1,    32,    46,    -1,    48,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    46,    47,    -1,    -1,    -1,
      46,    -1,    48,     3,     4,    -1,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      20,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,    39,
      40,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    19,    20,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    16,    -1,
      -1,    19,    20,    39,    40,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    20,     3,
       4,    -1,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    16,    -1,    -1,    19,    20,    39,    40,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,    -1,     6,     7,
      -1,     9,    10,    11,    -1,    -1,     3,     4,    16,     6,
       7,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    16,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    46,    -1,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    46,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    33,    34,    35,    -1,    -1,
      38,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    -1,    38,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    33,
      34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    13,    15,    53,    54,    55,    56,     0,    55,
       5,    46,    39,     3,     4,     6,     7,     8,     9,    10,
      11,    14,    16,    19,    20,    39,    46,    48,    57,    58,
      59,    65,    68,    72,    73,    74,    78,    79,    80,    81,
      82,    88,    89,    90,    91,    95,    46,    88,    90,    46,
      39,    40,    46,    60,    61,    78,    88,    89,    90,    21,
      37,    41,    45,    96,    45,    40,    59,    43,    43,    37,
      45,    45,    43,    41,    46,    72,    75,    77,    46,    46,
      62,    63,    21,    46,    72,    76,    76,    37,    40,    60,
      40,    61,    46,    46,    46,    30,    32,    36,    37,    46,
      47,    82,    86,    87,    95,    46,    69,    70,    71,    88,
      89,    90,    42,    86,    46,    41,    49,    18,    64,    83,
      84,    85,    86,    46,    46,    42,    37,    41,    43,    44,
      21,    37,    43,    21,    37,    43,    44,    86,    43,    44,
      43,    69,    40,    46,    87,    86,    86,    22,    23,    24,
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      41,    38,    44,    46,    46,    46,    42,    86,    45,    46,
      38,    44,    37,    69,    77,    18,    39,    92,    69,    64,
      69,    63,    72,    38,    38,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    39,    71,
      42,    50,    37,    85,    83,    38,    88,    90,    86,    94,
      43,    38,    38,    39,    66,    37,    83,    38,    39,    41,
      93,    93,    40,    44,    39,    39,    40,    60,    19,    40,
      67,    86,    38,    40,    60,    86,    41,    86,    40,    60,
      40,    60,    40,    45,    43,    38,    40,    42,    86,    40,
      40,    46,    42,    21,    86
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
#line 1729 "parse.tab.c"
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
#line 351 "parse.y"


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
