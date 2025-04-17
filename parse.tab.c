/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "ts.h"
    int yylex(void);
    void yyerror(const char *msg);
    extern char *yytext;  // Dernier token lu par Flex

    int nb_ligne = 1;

#line 82 "parse.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BOOLEAN = 3,                    /* BOOLEAN  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_CLASS = 5,                      /* CLASS  */
  YYSYMBOL_DOUBLE = 6,                     /* DOUBLE  */
  YYSYMBOL_FLOAT = 7,                      /* FLOAT  */
  YYSYMBOL_FINAL = 8,                      /* FINAL  */
  YYSYMBOL_INT = 9,                        /* INT  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_LONG = 11,                      /* LONG  */
  YYSYMBOL_PRIVATE = 12,                   /* PRIVATE  */
  YYSYMBOL_PROTECTED = 13,                 /* PROTECTED  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_PUBLIC = 15,                    /* PUBLIC  */
  YYSYMBOL_SHORT = 16,                     /* SHORT  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_NEW = 18,                       /* NEW  */
  YYSYMBOL_THIS = 19,                      /* THIS  */
  YYSYMBOL_STATIC = 20,                    /* STATIC  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_ASSIGNPLUS = 22,                /* ASSIGNPLUS  */
  YYSYMBOL_ASSIGNMINUS = 23,               /* ASSIGNMINUS  */
  YYSYMBOL_ASSIGNMULT = 24,                /* ASSIGNMULT  */
  YYSYMBOL_ASSIGNMOD = 25,                 /* ASSIGNMOD  */
  YYSYMBOL_ASSIGNDIV = 26,                 /* ASSIGNDIV  */
  YYSYMBOL_INC = 27,                       /* INC  */
  YYSYMBOL_DEC = 28,                       /* DEC  */
  YYSYMBOL_EQ = 29,                        /* EQ  */
  YYSYMBOL_NEQ = 30,                       /* NEQ  */
  YYSYMBOL_LT = 31,                        /* LT  */
  YYSYMBOL_GT = 32,                        /* GT  */
  YYSYMBOL_LTE = 33,                       /* LTE  */
  YYSYMBOL_GTE = 34,                       /* GTE  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_PLUS = 38,                      /* PLUS  */
  YYSYMBOL_MINUS = 39,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 40,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 41,                    /* DIVIDE  */
  YYSYMBOL_MOD = 42,                       /* MOD  */
  YYSYMBOL_STRING_LITERAL = 43,            /* STRING_LITERAL  */
  YYSYMBOL_LPAREN = 44,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 45,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 46,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 47,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 48,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 49,                  /* RBRACKET  */
  YYSYMBOL_ARRAYBRACKETS = 50,             /* ARRAYBRACKETS  */
  YYSYMBOL_SEMICOLON = 51,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 52,                     /* COMMA  */
  YYSYMBOL_DOT = 53,                       /* DOT  */
  YYSYMBOL_COLON = 54,                     /* COLON  */
  YYSYMBOL_IDENT = 55,                     /* IDENT  */
  YYSYMBOL_NUM = 56,                       /* NUM  */
  YYSYMBOL_ERR = 57,                       /* ERR  */
  YYSYMBOL_SYSTEM = 58,                    /* SYSTEM  */
  YYSYMBOL_OUT = 59,                       /* OUT  */
  YYSYMBOL_PRINTLN = 60,                   /* PRINTLN  */
  YYSYMBOL_PRINT = 61,                     /* PRINT  */
  YYSYMBOL_TRY = 62,                       /* TRY  */
  YYSYMBOL_CATCH = 63,                     /* CATCH  */
  YYSYMBOL_FINALLY = 64,                   /* FINALLY  */
  YYSYMBOL_IF = 65,                        /* IF  */
  YYSYMBOL_WHILE = 66,                     /* WHILE  */
  YYSYMBOL_FOR = 67,                       /* FOR  */
  YYSYMBOL_SWITCH = 68,                    /* SWITCH  */
  YYSYMBOL_CASE = 69,                      /* CASE  */
  YYSYMBOL_DEFAULT = 70,                   /* DEFAULT  */
  YYSYMBOL_ELSE = 71,                      /* ELSE  */
  YYSYMBOL_BREAK = 72,                     /* BREAK  */
  YYSYMBOL_LOWER_THAN_ELSE = 73,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_CAST = 74,                      /* CAST  */
  YYSYMBOL_UMINUS = 75,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_program = 77,                   /* program  */
  YYSYMBOL_class_declaration_list = 78,    /* class_declaration_list  */
  YYSYMBOL_class_declaration = 79,         /* class_declaration  */
  YYSYMBOL_modificator = 80,               /* modificator  */
  YYSYMBOL_object_modificators = 81,       /* object_modificators  */
  YYSYMBOL_class_body = 82,                /* class_body  */
  YYSYMBOL_core_body_sequence = 83,        /* core_body_sequence  */
  YYSYMBOL_core_body = 84,                 /* core_body  */
  YYSYMBOL_block_body_sequence = 85,       /* block_body_sequence  */
  YYSYMBOL_block_body = 86,                /* block_body  */
  YYSYMBOL_instanciation_list = 87,        /* instanciation_list  */
  YYSYMBOL_instanciation = 88,             /* instanciation  */
  YYSYMBOL_creation_object = 89,           /* creation_object  */
  YYSYMBOL_constructor_declaration = 90,   /* constructor_declaration  */
  YYSYMBOL_constructor_body = 91,          /* constructor_body  */
  YYSYMBOL_method_declaration = 92,        /* method_declaration  */
  YYSYMBOL_params = 93,                    /* params  */
  YYSYMBOL_param_list = 94,                /* param_list  */
  YYSYMBOL_param_def = 95,                 /* param_def  */
  YYSYMBOL_assignment = 96,                /* assignment  */
  YYSYMBOL_assignment_statement = 97,      /* assignment_statement  */
  YYSYMBOL_assign_statement = 98,          /* assign_statement  */
  YYSYMBOL_variables_declaration = 99,     /* variables_declaration  */
  YYSYMBOL_constantes_declaration = 100,   /* constantes_declaration  */
  YYSYMBOL_variables_init = 101,           /* variables_init  */
  YYSYMBOL_constantes_init = 102,          /* constantes_init  */
  YYSYMBOL_variable_init = 103,            /* variable_init  */
  YYSYMBOL_block_statement = 104,          /* block_statement  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_print_statement = 106,          /* print_statement  */
  YYSYMBOL_method_prefix = 107,            /* method_prefix  */
  YYSYMBOL_sufix_methode_list = 108,       /* sufix_methode_list  */
  YYSYMBOL_qualified_method_call = 109,    /* qualified_method_call  */
  YYSYMBOL_simple_method_call = 110,       /* simple_method_call  */
  YYSYMBOL_method_call = 111,              /* method_call  */
  YYSYMBOL_args = 112,                     /* args  */
  YYSYMBOL_arg_list = 113,                 /* arg_list  */
  YYSYMBOL_arg_type = 114,                 /* arg_type  */
  YYSYMBOL_if_statement = 115,             /* if_statement  */
  YYSYMBOL_control_body = 116,             /* control_body  */
  YYSYMBOL_else_body = 117,                /* else_body  */
  YYSYMBOL_block_statement_without_if = 118, /* block_statement_without_if  */
  YYSYMBOL_while_statement = 119,          /* while_statement  */
  YYSYMBOL_for_statement = 120,            /* for_statement  */
  YYSYMBOL_for_init = 121,                 /* for_init  */
  YYSYMBOL_for_update = 122,               /* for_update  */
  YYSYMBOL_foreach_statement = 123,        /* foreach_statement  */
  YYSYMBOL_switch_statement = 124,         /* switch_statement  */
  YYSYMBOL_case_clauses = 125,             /* case_clauses  */
  YYSYMBOL_case_clause = 126,              /* case_clause  */
  YYSYMBOL_break_opt = 127,                /* break_opt  */
  YYSYMBOL_default_clause_opt = 128,       /* default_clause_opt  */
  YYSYMBOL_return_statement = 129,         /* return_statement  */
  YYSYMBOL_expression = 130,               /* expression  */
  YYSYMBOL_simple_expression = 131,        /* simple_expression  */
  YYSYMBOL_inc_dec_statement = 132,        /* inc_dec_statement  */
  YYSYMBOL_premitive_type = 133,           /* premitive_type  */
  YYSYMBOL_array_type = 134,               /* array_type  */
  YYSYMBOL_type_abstract = 135,            /* type_abstract  */
  YYSYMBOL_array_declaration = 136,        /* array_declaration  */
  YYSYMBOL_array_initialization = 137,     /* array_initialization  */
  YYSYMBOL_array_dimensions = 138,         /* array_dimensions  */
  YYSYMBOL_array_elements = 139,           /* array_elements  */
  YYSYMBOL_array_access = 140,             /* array_access  */
  YYSYMBOL_qualified_access = 141,         /* qualified_access  */
  YYSYMBOL_simple_access = 142,            /* simple_access  */
  YYSYMBOL_array_indices = 143,            /* array_indices  */
  YYSYMBOL_exception_statement = 144,      /* exception_statement  */
  YYSYMBOL_catch_clauses = 145,            /* catch_clauses  */
  YYSYMBOL_catch_clause = 146,             /* catch_clause  */
  YYSYMBOL_exception_declaration = 147,    /* exception_declaration  */
  YYSYMBOL_finally_clause = 148,           /* finally_clause  */
  YYSYMBOL_finally_clause_opt = 149        /* finally_clause_opt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  442

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    54,    54,    58,    62,    63,    64,    64,
      68,    69,    70,    71,    72,    73,    74,    77,    79,    83,
      84,    88,    89,    90,    91,    92,    93,    94,    98,    99,
     103,   104,   105,   106,   110,   111,   115,   119,   123,   126,
     128,   133,   134,   135,   136,   137,   138,   139,   140,   143,
     145,   149,   149,   153,   154,   155,   159,   163,   164,   165,
     166,   170,   170,   170,   170,   170,   170,   174,   175,   180,
     181,   185,   186,   190,   191,   195,   195,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   211,   212,   213,   214,
     215,   216,   217,   221,   222,   223,   224,   229,   234,   235,
     239,   240,   244,   248,   249,   253,   255,   259,   259,   263,
     264,   272,   273,   274,   278,   279,   280,   281,   286,   287,
     288,   289,   294,   295,   296,   297,   298,   299,   300,   301,
     306,   310,   314,   315,   316,   320,   321,   326,   327,   328,
     332,   335,   337,   341,   344,   346,   349,   351,   357,   358,
     359,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   411,
     411,   411,   411,   411,   411,   411,   411,   415,   416,   420,
     424,   425,   429,   430,   431,   435,   436,   440,   441,   445,
     446,   450,   451,   455,   459,   460,   466,   467,   468,   469,
     473,   474,   478,   479,   483,   487,   488,   491,   493
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BOOLEAN", "CHAR",
  "CLASS", "DOUBLE", "FLOAT", "FINAL", "INT", "STRING", "LONG", "PRIVATE",
  "PROTECTED", "VOID", "PUBLIC", "SHORT", "RETURN", "NEW", "THIS",
  "STATIC", "ASSIGN", "ASSIGNPLUS", "ASSIGNMINUS", "ASSIGNMULT",
  "ASSIGNMOD", "ASSIGNDIV", "INC", "DEC", "EQ", "NEQ", "LT", "GT", "LTE",
  "GTE", "AND", "OR", "NOT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MOD",
  "STRING_LITERAL", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACKET",
  "RBRACKET", "ARRAYBRACKETS", "SEMICOLON", "COMMA", "DOT", "COLON",
  "IDENT", "NUM", "ERR", "SYSTEM", "OUT", "PRINTLN", "PRINT", "TRY",
  "CATCH", "FINALLY", "IF", "WHILE", "FOR", "SWITCH", "CASE", "DEFAULT",
  "ELSE", "BREAK", "LOWER_THAN_ELSE", "CAST", "UMINUS", "$accept",
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
  "arg_list", "arg_type", "if_statement", "control_body", "else_body",
  "block_statement_without_if", "while_statement", "for_statement",
  "for_init", "for_update", "foreach_statement", "switch_statement",
  "case_clauses", "case_clause", "break_opt", "default_clause_opt",
  "return_statement", "expression", "simple_expression",
  "inc_dec_statement", "premitive_type", "array_type", "type_abstract",
  "array_declaration", "array_initialization", "array_dimensions",
  "array_elements", "array_access", "qualified_access", "simple_access",
  "array_indices", "exception_statement", "catch_clauses", "catch_clause",
  "exception_declaration", "finally_clause", "finally_clause_opt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-324)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     4,     5,     6,     7,   250,    33,    34,    35,   251,
     252,    92,    93,   219,    36,   253,    37,   120,   121,   122,
      87,    38,   103,    39,    40,    88,   115,    89,   254,   255,
     256,   144,   145,   146,   147,   148,   220,   221,   222,   258,
     362,   398,   399,   259,   260,   324,   407,   261,   262,   384,
     413,   440,   414,   263,   223,   150,   151,   264,   265,   266,
      48,   172,   270,   212,   152,   153,   154,   108,   267,   338,
     339,   372,   355,   356
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {

#line 1927 "parse.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 496 "parse.y"


int main() {
    if (yyparse() == 0) {
        printf("Syntaxe correcte !\n");
    }
    print();
    return 0;
}

void yyerror(const char *msg)
{ 
    printf("Erreur syntaxique à la ligne %d : %s\n", nb_ligne,yytext);
    exit(1);
}
