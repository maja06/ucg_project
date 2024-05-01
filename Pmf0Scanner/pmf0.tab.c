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
#line 1 "pmf0.y"

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "pmf0.tab.h" 


extern int yylex();
void yyerror(const char *s);


#line 84 "pmf0.tab.c"

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

#include "pmf0.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_DECIMAL_LITERAL = 3,          /* T_DECIMAL_LITERAL  */
  YYSYMBOL_T_HEXADECIMAL_LITERAL = 4,      /* T_HEXADECIMAL_LITERAL  */
  YYSYMBOL_T_DOUBLE_LITERAL = 5,           /* T_DOUBLE_LITERAL  */
  YYSYMBOL_T_STRING_LITERAL = 6,           /* T_STRING_LITERAL  */
  YYSYMBOL_T_BOOL_LITERAL = 7,             /* T_BOOL_LITERAL  */
  YYSYMBOL_T_LET = 8,                      /* T_LET  */
  YYSYMBOL_T_IN = 9,                       /* T_IN  */
  YYSYMBOL_T_END = 10,                     /* T_END  */
  YYSYMBOL_T_THEN = 11,                    /* T_THEN  */
  YYSYMBOL_T_FI = 12,                      /* T_FI  */
  YYSYMBOL_T_DO = 13,                      /* T_DO  */
  YYSYMBOL_T_READ = 14,                    /* T_READ  */
  YYSYMBOL_T_WRITE = 15,                   /* T_WRITE  */
  YYSYMBOL_T_IF = 16,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 17,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 18,                   /* T_WHILE  */
  YYSYMBOL_T_RETURN = 19,                  /* T_RETURN  */
  YYSYMBOL_T_FOR = 20,                     /* T_FOR  */
  YYSYMBOL_T_FOREACH = 21,                 /* T_FOREACH  */
  YYSYMBOL_T_SWITCH = 22,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 23,                    /* T_CASE  */
  YYSYMBOL_T_DEFAULT = 24,                 /* T_DEFAULT  */
  YYSYMBOL_T_BREAK = 25,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 26,                /* T_CONTINUE  */
  YYSYMBOL_T_THIS = 27,                    /* T_THIS  */
  YYSYMBOL_T_SKIP = 28,                    /* T_SKIP  */
  YYSYMBOL_T_INT = 29,                     /* T_INT  */
  YYSYMBOL_T_DOUBLE = 30,                  /* T_DOUBLE  */
  YYSYMBOL_T_CHAR = 31,                    /* T_CHAR  */
  YYSYMBOL_T_STRING = 32,                  /* T_STRING  */
  YYSYMBOL_T_BOOL = 33,                    /* T_BOOL  */
  YYSYMBOL_T_VOID = 34,                    /* T_VOID  */
  YYSYMBOL_T_ENUM = 35,                    /* T_ENUM  */
  YYSYMBOL_T_AND = 36,                     /* T_AND  */
  YYSYMBOL_T_OR = 37,                      /* T_OR  */
  YYSYMBOL_T_NOT = 38,                     /* T_NOT  */
  YYSYMBOL_T_TRUE = 39,                    /* T_TRUE  */
  YYSYMBOL_T_FALSE = 40,                   /* T_FALSE  */
  YYSYMBOL_T_IDENTIFIER = 41,              /* T_IDENTIFIER  */
  YYSYMBOL_T_PLUS = 42,                    /* T_PLUS  */
  YYSYMBOL_T_MINUS = 43,                   /* T_MINUS  */
  YYSYMBOL_T_ASTERISK = 44,                /* T_ASTERISK  */
  YYSYMBOL_T_SLASH = 45,                   /* T_SLASH  */
  YYSYMBOL_T_PERCENT = 46,                 /* T_PERCENT  */
  YYSYMBOL_T_BACKSLASH = 47,               /* T_BACKSLASH  */
  YYSYMBOL_T_LESS = 48,                    /* T_LESS  */
  YYSYMBOL_T_LESS_EQ = 49,                 /* T_LESS_EQ  */
  YYSYMBOL_T_GREATER = 50,                 /* T_GREATER  */
  YYSYMBOL_T_GREATER_EQ = 51,              /* T_GREATER_EQ  */
  YYSYMBOL_T_ASSIGN = 52,                  /* T_ASSIGN  */
  YYSYMBOL_T_EQUAL = 53,                   /* T_EQUAL  */
  YYSYMBOL_T_NOT_EQUAL = 54,               /* T_NOT_EQUAL  */
  YYSYMBOL_T_SEMICOLON = 55,               /* T_SEMICOLON  */
  YYSYMBOL_T_COMMA = 56,                   /* T_COMMA  */
  YYSYMBOL_T_DOT = 57,                     /* T_DOT  */
  YYSYMBOL_T_LPAREN = 58,                  /* T_LPAREN  */
  YYSYMBOL_T_RPAREN = 59,                  /* T_RPAREN  */
  YYSYMBOL_T_ERROR = 60,                   /* T_ERROR  */
  YYSYMBOL_T_UNKNOWN = 61,                 /* T_UNKNOWN  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_declarations = 66,              /* declarations  */
  YYSYMBOL_ident_decl = 67,                /* ident_decl  */
  YYSYMBOL_type = 68,                      /* type  */
  YYSYMBOL_identifier = 69,                /* identifier  */
  YYSYMBOL_command_sequence = 70,          /* command_sequence  */
  YYSYMBOL_command = 71,                   /* command  */
  YYSYMBOL_expression = 72,                /* expression  */
  YYSYMBOL_int_expression = 73,            /* int_expression  */
  YYSYMBOL_double_expression = 74,         /* double_expression  */
  YYSYMBOL_bool_expression = 75,           /* bool_expression  */
  YYSYMBOL_string_expression = 76          /* string_expression  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   152

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
      62,    63,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    57,    59,    63,    64,    68,    69,    70,
      71,    75,    79,    80,    84,    85,    86,    87,    88,    89,
      93,    94,    95,    96,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   116,   117,   118,
     119,   120,   121,   125,   126,   127,   128,   129,   133,   134,
     135
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
  "\"end of file\"", "error", "\"invalid token\"", "T_DECIMAL_LITERAL",
  "T_HEXADECIMAL_LITERAL", "T_DOUBLE_LITERAL", "T_STRING_LITERAL",
  "T_BOOL_LITERAL", "T_LET", "T_IN", "T_END", "T_THEN", "T_FI", "T_DO",
  "T_READ", "T_WRITE", "T_IF", "T_ELSE", "T_WHILE", "T_RETURN", "T_FOR",
  "T_FOREACH", "T_SWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE",
  "T_THIS", "T_SKIP", "T_INT", "T_DOUBLE", "T_CHAR", "T_STRING", "T_BOOL",
  "T_VOID", "T_ENUM", "T_AND", "T_OR", "T_NOT", "T_TRUE", "T_FALSE",
  "T_IDENTIFIER", "T_PLUS", "T_MINUS", "T_ASTERISK", "T_SLASH",
  "T_PERCENT", "T_BACKSLASH", "T_LESS", "T_LESS_EQ", "T_GREATER",
  "T_GREATER_EQ", "T_ASSIGN", "T_EQUAL", "T_NOT_EQUAL", "T_SEMICOLON",
  "T_COMMA", "T_DOT", "T_LPAREN", "T_RPAREN", "T_ERROR", "T_UNKNOWN",
  "'('", "')'", "$accept", "program", "declarations", "ident_decl", "type",
  "identifier", "command_sequence", "command", "expression",
  "int_expression", "double_expression", "bool_expression",
  "string_expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       8,   -41,    24,    72,   -41,    59,   -41,   -41,   -41,   -41,
     -15,   -15,    -2,    -2,    -2,   -40,   -41,   -24,     3,   -41,
     -22,   -41,    31,   -41,   -41,   -41,   -41,   -41,     7,    -2,
      33,    80,    40,   -26,    34,    86,   103,   -41,    -2,   -41,
      59,   -15,   -41,     7,   -41,    64,    47,   -19,    17,   -41,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     7,     7,     6,    59,    59,    56,
     -41,   -41,   -41,   -41,   -41,   -41,     4,    91,    91,    45,
      45,    98,    98,    98,    98,   -31,   -31,     1,    -6,    -6,
     -41,   -41,   -41,   -41,     6,   -41,    16,     9,   -41,    59,
      66,    15,   -41,    71,   -41
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,     0,     1,     0,     7,     8,    10,     9,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    12,
       4,     5,     0,    24,    25,    37,    48,    43,     0,     0,
       0,    20,    21,    22,    23,     0,     0,    14,     0,     2,
       0,     0,    18,     0,    46,     0,     0,     0,     0,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     6,    36,    42,    47,    50,     0,    26,    27,    28,
      29,    32,    33,    34,    35,    30,    31,     0,    38,    39,
      40,    41,    44,    45,     0,    49,     0,     0,    15,     0,
       0,     0,    17,     0,    16
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,   -41,   -41,    21,   -38,    79,    65,    -4,
     -20,    -8,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,    20,    10,    17,    18,    19,    30,    31,
      32,    33,    34
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    23,    24,    25,    26,    27,    25,    23,    24,    46,
      64,    65,    26,    39,    27,    37,     1,    64,    65,   100,
      44,    47,    -1,    -1,     4,    45,    16,   103,    38,    96,
      97,    21,    22,    99,    41,    47,    28,    95,    62,    63,
      88,    89,    90,    91,    74,    28,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    92,    93,    40,    66,
      29,   101,    71,    87,    40,    48,    76,    46,    94,    43,
      40,    40,    45,    11,    12,    13,    66,    14,    35,    36,
      75,     5,    60,    61,    62,    63,    42,    15,    49,    60,
      61,    62,    63,    54,    55,    56,    57,    67,    58,    59,
      16,     6,     7,    69,     8,     9,    50,    51,    52,    53,
      73,    98,    54,    55,    56,    57,    68,    58,    59,    70,
       0,   102,    50,    51,    52,    53,   104,    72,    54,    55,
      56,    57,     0,    58,    59,    52,    53,     0,     0,    54,
      55,    56,    57,     0,    58,    59,    -1,    -1,    -1,    -1,
       0,    58,    59
};

static const yytype_int8 yycheck[] =
{
      29,     3,     4,     5,     6,     7,     5,     3,     4,    29,
      36,    37,     6,    10,     7,    55,     8,    36,    37,    10,
      28,    29,    53,    54,     0,    29,    41,    12,    52,    67,
      68,    10,    11,    17,    56,    43,    38,    66,    44,    45,
      60,    61,    62,    63,    63,    38,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    64,    65,    55,    42,
      62,    99,    41,    62,    55,    94,    62,    87,    62,    62,
      55,    55,    76,    14,    15,    16,    42,    18,    13,    14,
      63,     9,    42,    43,    44,    45,    55,    28,    55,    42,
      43,    44,    45,    48,    49,    50,    51,    11,    53,    54,
      41,    29,    30,    38,    32,    33,    42,    43,    44,    45,
      63,    55,    48,    49,    50,    51,    13,    53,    54,    40,
      -1,    55,    42,    43,    44,    45,    55,    63,    48,    49,
      50,    51,    -1,    53,    54,    44,    45,    -1,    -1,    48,
      49,    50,    51,    -1,    53,    54,    48,    49,    50,    51,
      -1,    53,    54
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,    65,    66,     0,     9,    29,    30,    32,    33,
      68,    14,    15,    16,    18,    28,    41,    69,    70,    71,
      67,    69,    69,     3,     4,     5,     6,     7,    38,    62,
      72,    73,    74,    75,    76,    72,    72,    55,    52,    10,
      55,    56,    55,    62,    75,    73,    74,    75,    76,    55,
      42,    43,    44,    45,    48,    49,    50,    51,    53,    54,
      42,    43,    44,    45,    36,    37,    42,    11,    13,    72,
      71,    69,    63,    63,    63,    63,    62,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    62,    74,    74,
      74,    74,    75,    75,    62,    76,    70,    70,    55,    17,
      10,    70,    55,    12,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    76,    76,
      76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     0,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     2,     4,     8,     6,     3,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     2,     3,     1,     3,
       3
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
  case 24: /* int_expression: T_DECIMAL_LITERAL  */
#line 100 "pmf0.y"
                       { (yyval.val_int) = (yyvsp[0].val_int); }
#line 1229 "pmf0.tab.c"
    break;

  case 25: /* int_expression: T_HEXADECIMAL_LITERAL  */
#line 101 "pmf0.y"
                           { (yyval.val_int) = (yyvsp[0].val_int); }
#line 1235 "pmf0.tab.c"
    break;

  case 26: /* int_expression: int_expression T_PLUS int_expression  */
#line 102 "pmf0.y"
                                           { (yyval.val_int) = (yyvsp[-2].val_int) + (yyvsp[0].val_int); }
#line 1241 "pmf0.tab.c"
    break;

  case 27: /* int_expression: int_expression T_MINUS int_expression  */
#line 103 "pmf0.y"
                                           { (yyval.val_int) = (yyvsp[-2].val_int) - (yyvsp[0].val_int); }
#line 1247 "pmf0.tab.c"
    break;

  case 28: /* int_expression: int_expression T_ASTERISK int_expression  */
#line 104 "pmf0.y"
                                             { (yyval.val_int) = (yyvsp[-2].val_int) * (yyvsp[0].val_int); }
#line 1253 "pmf0.tab.c"
    break;

  case 29: /* int_expression: int_expression T_SLASH int_expression  */
#line 105 "pmf0.y"
                                            { (yyval.val_int) = (yyvsp[-2].val_int) / (yyvsp[0].val_int); }
#line 1259 "pmf0.tab.c"
    break;

  case 30: /* int_expression: int_expression T_EQUAL int_expression  */
#line 106 "pmf0.y"
                                          { (yyval.val_int) = ((yyvsp[-2].val_int) == (yyvsp[0].val_int)); }
#line 1265 "pmf0.tab.c"
    break;

  case 31: /* int_expression: int_expression T_NOT_EQUAL int_expression  */
#line 107 "pmf0.y"
                                              { (yyval.val_int) = ((yyvsp[-2].val_int) != (yyvsp[0].val_int)); }
#line 1271 "pmf0.tab.c"
    break;

  case 32: /* int_expression: int_expression T_LESS int_expression  */
#line 108 "pmf0.y"
                                         { (yyval.val_int) = ((yyvsp[-2].val_int) < (yyvsp[0].val_int)); }
#line 1277 "pmf0.tab.c"
    break;

  case 33: /* int_expression: int_expression T_LESS_EQ int_expression  */
#line 109 "pmf0.y"
                                            { (yyval.val_int) = ((yyvsp[-2].val_int) <= (yyvsp[0].val_int)); }
#line 1283 "pmf0.tab.c"
    break;

  case 34: /* int_expression: int_expression T_GREATER int_expression  */
#line 110 "pmf0.y"
                                            { (yyval.val_int) = ((yyvsp[-2].val_int) > (yyvsp[0].val_int)); }
#line 1289 "pmf0.tab.c"
    break;

  case 35: /* int_expression: int_expression T_GREATER_EQ int_expression  */
#line 111 "pmf0.y"
                                               { (yyval.val_int) = ((yyvsp[-2].val_int) >= (yyvsp[0].val_int)); }
#line 1295 "pmf0.tab.c"
    break;

  case 36: /* int_expression: '(' int_expression ')'  */
#line 112 "pmf0.y"
                            { (yyval.val_int) = (yyvsp[-1].val_int); }
#line 1301 "pmf0.tab.c"
    break;

  case 37: /* double_expression: T_DOUBLE_LITERAL  */
#line 116 "pmf0.y"
                      { (yyval.val_double) = (yyvsp[0].val_double); }
#line 1307 "pmf0.tab.c"
    break;

  case 38: /* double_expression: double_expression T_PLUS double_expression  */
#line 117 "pmf0.y"
                                                 { (yyval.val_double) = (yyvsp[-2].val_double) + (yyvsp[0].val_double); }
#line 1313 "pmf0.tab.c"
    break;

  case 39: /* double_expression: double_expression T_MINUS double_expression  */
#line 118 "pmf0.y"
                                                 { (yyval.val_double) = (yyvsp[-2].val_double) - (yyvsp[0].val_double); }
#line 1319 "pmf0.tab.c"
    break;

  case 40: /* double_expression: double_expression T_ASTERISK double_expression  */
#line 119 "pmf0.y"
                                                   { (yyval.val_double) = (yyvsp[-2].val_double) * (yyvsp[0].val_double); }
#line 1325 "pmf0.tab.c"
    break;

  case 41: /* double_expression: double_expression T_SLASH double_expression  */
#line 120 "pmf0.y"
                                                  { (yyval.val_double) = (yyvsp[-2].val_double) / (yyvsp[0].val_double); }
#line 1331 "pmf0.tab.c"
    break;

  case 42: /* double_expression: '(' double_expression ')'  */
#line 121 "pmf0.y"
                                                  { (yyval.val_double) = (yyvsp[-1].val_double); }
#line 1337 "pmf0.tab.c"
    break;

  case 43: /* bool_expression: T_BOOL_LITERAL  */
#line 125 "pmf0.y"
                   { (yyval.val_bool) = (yyvsp[0].val_bool); }
#line 1343 "pmf0.tab.c"
    break;

  case 44: /* bool_expression: bool_expression T_AND bool_expression  */
#line 126 "pmf0.y"
                                          { (yyval.val_bool) = (yyvsp[-2].val_bool) && (yyvsp[0].val_bool); }
#line 1349 "pmf0.tab.c"
    break;

  case 45: /* bool_expression: bool_expression T_OR bool_expression  */
#line 127 "pmf0.y"
                                          { (yyval.val_bool) = (yyvsp[-2].val_bool) || (yyvsp[0].val_bool); }
#line 1355 "pmf0.tab.c"
    break;

  case 46: /* bool_expression: T_NOT bool_expression  */
#line 128 "pmf0.y"
                                          { (yyval.val_bool) = !(yyvsp[0].val_bool); }
#line 1361 "pmf0.tab.c"
    break;

  case 47: /* bool_expression: '(' bool_expression ')'  */
#line 129 "pmf0.y"
                                          { (yyval.val_bool) = (yyvsp[-1].val_bool); }
#line 1367 "pmf0.tab.c"
    break;

  case 48: /* string_expression: T_STRING_LITERAL  */
#line 133 "pmf0.y"
                     { (yyval.val_string) = strdup((yyvsp[0].val_string)); }
#line 1373 "pmf0.tab.c"
    break;

  case 49: /* string_expression: string_expression T_PLUS string_expression  */
#line 134 "pmf0.y"
                                               { (yyval.val_string) = strcat((yyvsp[-2].val_string), (yyvsp[0].val_string)); }
#line 1379 "pmf0.tab.c"
    break;

  case 50: /* string_expression: '(' string_expression ')'  */
#line 135 "pmf0.y"
                              { (yyval.val_string) = (yyvsp[-1].val_string); }
#line 1385 "pmf0.tab.c"
    break;


#line 1389 "pmf0.tab.c"

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

#line 138 "pmf0.y"


int main() {
    int res = yyparse(); 
    if (res == 0) {
        printf("Ulaz je bio ispravan!\n");
    } else {
        printf("Ulaz nije bio ispravan!\n"); 
    }
    return 0; 
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
