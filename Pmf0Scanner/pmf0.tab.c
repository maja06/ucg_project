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
#include <math.h>
#include <limits.h>
#include "pmf0.tab.h"

void yyerror(const char *s);  
void printCountDecl(int count);
extern int yylex();
extern int yyparse();  
int yydebug = 1;

typedef struct Symbol {
    char *name;
    char *type;
    int scope;
    union {
        int intValue;
        double doubleValue;
        bool boolValue;
        char *stringValue;
    } value;
    struct Symbol *next;
} Symbol;

Symbol *symbolTable = NULL;
int currentScope = 0;
int countInt = 0;

int intVarCounter = 0;  

Symbol *createSymbol(char *name, char *type, int scope);
void insertSymbol(char *name, char *type, int scope, void *value);
Symbol *findSymbol(char *name, int scope);
void updateSymbolValue(char *name, int scope, void *value);
void printSymbolTable();
Symbol *findMaxInt();

void increaseScope();
void decreaseScope();


#line 117 "pmf0.tab.c"

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
  YYSYMBOL_T_IDENTIFIER = 7,               /* T_IDENTIFIER  */
  YYSYMBOL_T_BOOL_LITERAL = 8,             /* T_BOOL_LITERAL  */
  YYSYMBOL_T_CHAR_LITERAL = 9,             /* T_CHAR_LITERAL  */
  YYSYMBOL_T_LET = 10,                     /* T_LET  */
  YYSYMBOL_T_IN = 11,                      /* T_IN  */
  YYSYMBOL_T_END = 12,                     /* T_END  */
  YYSYMBOL_T_THEN = 13,                    /* T_THEN  */
  YYSYMBOL_T_FI = 14,                      /* T_FI  */
  YYSYMBOL_T_DO = 15,                      /* T_DO  */
  YYSYMBOL_T_READ = 16,                    /* T_READ  */
  YYSYMBOL_T_WRITE = 17,                   /* T_WRITE  */
  YYSYMBOL_T_IF = 18,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 19,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 20,                   /* T_WHILE  */
  YYSYMBOL_T_RETURN = 21,                  /* T_RETURN  */
  YYSYMBOL_T_FOR = 22,                     /* T_FOR  */
  YYSYMBOL_T_FOREACH = 23,                 /* T_FOREACH  */
  YYSYMBOL_T_SWITCH = 24,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 25,                    /* T_CASE  */
  YYSYMBOL_T_DEFAULT = 26,                 /* T_DEFAULT  */
  YYSYMBOL_T_BREAK = 27,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 28,                /* T_CONTINUE  */
  YYSYMBOL_T_THIS = 29,                    /* T_THIS  */
  YYSYMBOL_T_SKIP = 30,                    /* T_SKIP  */
  YYSYMBOL_T_STRUCT = 31,                  /* T_STRUCT  */
  YYSYMBOL_T_INT = 32,                     /* T_INT  */
  YYSYMBOL_T_DOUBLE = 33,                  /* T_DOUBLE  */
  YYSYMBOL_T_CHAR = 34,                    /* T_CHAR  */
  YYSYMBOL_T_STRING = 35,                  /* T_STRING  */
  YYSYMBOL_T_BOOL = 36,                    /* T_BOOL  */
  YYSYMBOL_T_VOID = 37,                    /* T_VOID  */
  YYSYMBOL_T_ENUM = 38,                    /* T_ENUM  */
  YYSYMBOL_T_AND = 39,                     /* T_AND  */
  YYSYMBOL_T_OR = 40,                      /* T_OR  */
  YYSYMBOL_T_NOT = 41,                     /* T_NOT  */
  YYSYMBOL_T_TRUE = 42,                    /* T_TRUE  */
  YYSYMBOL_T_FALSE = 43,                   /* T_FALSE  */
  YYSYMBOL_T_PLUS = 44,                    /* T_PLUS  */
  YYSYMBOL_T_MINUS = 45,                   /* T_MINUS  */
  YYSYMBOL_T_ASTERISK = 46,                /* T_ASTERISK  */
  YYSYMBOL_T_SLASH = 47,                   /* T_SLASH  */
  YYSYMBOL_T_PERCENT = 48,                 /* T_PERCENT  */
  YYSYMBOL_T_BACKSLASH = 49,               /* T_BACKSLASH  */
  YYSYMBOL_T_LESS = 50,                    /* T_LESS  */
  YYSYMBOL_T_LESS_EQ = 51,                 /* T_LESS_EQ  */
  YYSYMBOL_T_GREATER = 52,                 /* T_GREATER  */
  YYSYMBOL_T_GREATER_EQ = 53,              /* T_GREATER_EQ  */
  YYSYMBOL_T_ASSIGN = 54,                  /* T_ASSIGN  */
  YYSYMBOL_T_EQUAL = 55,                   /* T_EQUAL  */
  YYSYMBOL_T_NOT_EQUAL = 56,               /* T_NOT_EQUAL  */
  YYSYMBOL_T_SEMICOLON = 57,               /* T_SEMICOLON  */
  YYSYMBOL_T_COMMA = 58,                   /* T_COMMA  */
  YYSYMBOL_T_DOT = 59,                     /* T_DOT  */
  YYSYMBOL_T_LPAREN = 60,                  /* T_LPAREN  */
  YYSYMBOL_T_RPAREN = 61,                  /* T_RPAREN  */
  YYSYMBOL_T_OPEN_BRACE = 62,              /* T_OPEN_BRACE  */
  YYSYMBOL_T_CLOSE_BRACE = 63,             /* T_CLOSE_BRACE  */
  YYSYMBOL_T_POWER = 64,                   /* T_POWER  */
  YYSYMBOL_T_ERROR = 65,                   /* T_ERROR  */
  YYSYMBOL_T_UNKNOWN = 66,                 /* T_UNKNOWN  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_program = 68,                   /* program  */
  YYSYMBOL_declarations = 69,              /* declarations  */
  YYSYMBOL_declaration = 70,               /* declaration  */
  YYSYMBOL_type = 71,                      /* type  */
  YYSYMBOL_identifier = 72,                /* identifier  */
  YYSYMBOL_command_sequence = 73,          /* command_sequence  */
  YYSYMBOL_block = 74,                     /* block  */
  YYSYMBOL_command = 75,                   /* command  */
  YYSYMBOL_76_1 = 76,                      /* $@1  */
  YYSYMBOL_77_2 = 77,                      /* $@2  */
  YYSYMBOL_78_3 = 78,                      /* $@3  */
  YYSYMBOL_79_4 = 79,                      /* $@4  */
  YYSYMBOL_expression = 80                 /* expression  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  100

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   321


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
      65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    92,    92,    99,   100,   104,   110,   127,   128,   129,
     130,   135,   139,   140,   144,   145,   149,   150,   156,   156,
     156,   156,   156,   157,   158,   159,   160,   161,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187
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
  "T_IDENTIFIER", "T_BOOL_LITERAL", "T_CHAR_LITERAL", "T_LET", "T_IN",
  "T_END", "T_THEN", "T_FI", "T_DO", "T_READ", "T_WRITE", "T_IF", "T_ELSE",
  "T_WHILE", "T_RETURN", "T_FOR", "T_FOREACH", "T_SWITCH", "T_CASE",
  "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_THIS", "T_SKIP", "T_STRUCT",
  "T_INT", "T_DOUBLE", "T_CHAR", "T_STRING", "T_BOOL", "T_VOID", "T_ENUM",
  "T_AND", "T_OR", "T_NOT", "T_TRUE", "T_FALSE", "T_PLUS", "T_MINUS",
  "T_ASTERISK", "T_SLASH", "T_PERCENT", "T_BACKSLASH", "T_LESS",
  "T_LESS_EQ", "T_GREATER", "T_GREATER_EQ", "T_ASSIGN", "T_EQUAL",
  "T_NOT_EQUAL", "T_SEMICOLON", "T_COMMA", "T_DOT", "T_LPAREN", "T_RPAREN",
  "T_OPEN_BRACE", "T_CLOSE_BRACE", "T_POWER", "T_ERROR", "T_UNKNOWN",
  "$accept", "program", "declarations", "declaration", "type",
  "identifier", "command_sequence", "block", "command", "$@1", "$@2",
  "$@3", "$@4", "expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-58)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    81,    11,   -58,   -58,   -58,   -58,    20,   -27,    25,
     -58,   276,    81,   -58,   -20,   -18,    25,    -1,    -1,    -1,
      -1,     3,     0,   259,   -58,   -58,    -1,   -58,     6,   -58,
     -58,   -58,   -58,   -58,   -58,    -1,    -1,   -31,    -3,    31,
     171,   -58,    -1,   -58,   -58,   171,   -58,    -6,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   -58,    -1,   -58,   129,   150,   -58,    47,
      47,   190,   190,   208,   208,   208,    88,    88,    88,    88,
       8,     1,     1,    -6,   129,   276,   276,    54,   -58,   -58,
     276,    10,    50,   -58,   -58,   129,   -58,    59,    23,   -58
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     7,     8,    10,     9,     0,     0,     0,
       1,     0,     4,    11,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     3,     0,    27,     0,    45,
      46,    47,    48,    49,    50,     0,     0,     0,     0,     0,
      24,    16,     0,     2,    12,     6,    25,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    18,     0,     0,    43,    42,
      28,    32,    33,    34,    35,    36,    30,    38,    31,    37,
      29,    39,    40,    44,     0,     0,    15,     0,    17,    19,
      14,     0,     0,    23,    20,     0,    21,     0,     0,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,    17,   -58,   -58,    19,   -11,   -57,   -22,   -58,
     -58,   -58,   -58,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    85,     8,     9,    22,    86,    87,    24,    84,
      92,    95,    97,    37
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    44,    29,    30,    31,    32,    33,    34,    49,    50,
      65,    10,     1,    51,    52,    53,    54,    55,     7,    56,
      57,    58,    59,    60,    61,    62,    63,    89,    14,    25,
      12,    11,    13,    64,    26,    28,    49,    50,    96,    27,
      35,    51,    52,    53,    54,    55,    66,    56,    57,    58,
      59,    60,    61,    62,    42,    60,    -1,    -1,    64,    36,
      41,    64,    -1,    46,    44,    64,    91,    93,    44,    94,
      49,    50,    64,    98,    90,    51,    52,    53,    54,    55,
      99,    56,    57,    58,    59,    60,    61,    62,    38,    39,
      40,     0,     0,     0,     0,    64,    45,    56,    57,    58,
      59,    60,    61,    62,     0,    47,    48,     0,     0,     0,
       0,    64,    67,     3,     4,     0,     5,     6,     0,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,     0,    83,    15,    13,     0,    -1,    -1,
      -1,    -1,    60,    61,    62,    16,    17,    18,     0,    19,
       0,    20,    64,     0,     0,     0,     0,     0,     0,    21,
       0,     3,     4,     0,     5,     6,    49,    50,     0,     0,
       0,    51,    52,    53,    54,    55,     0,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,    68,    49,
      50,    64,     0,     0,    51,    52,    53,    54,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    88,     0,     0,
      49,    50,     0,     0,    64,    51,    52,    53,    54,    55,
       0,    56,    57,    58,    59,    60,    61,    62,     0,    49,
      50,     0,     0,     0,     0,    64,    53,    54,    55,     0,
      56,    57,    58,    59,    60,    61,    62,    49,    50,     0,
       0,     0,     0,     0,    64,     0,     0,     0,    56,    57,
      58,    59,    60,    61,    62,    15,    13,     0,     0,     0,
       0,    43,    64,     0,     0,    16,    17,    18,     0,    19,
       0,    20,    15,    13,     0,     0,     0,     0,     0,    21,
       0,     0,    16,    17,    18,     0,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    21
};

static const yytype_int8 yycheck[] =
{
      11,    23,     3,     4,     5,     6,     7,     8,    39,    40,
      13,     0,    10,    44,    45,    46,    47,    48,     1,    50,
      51,    52,    53,    54,    55,    56,    57,    84,     9,    12,
      57,    11,     7,    64,    54,    16,    39,    40,    95,    57,
      41,    44,    45,    46,    47,    48,    15,    50,    51,    52,
      53,    54,    55,    56,    54,    54,    55,    56,    64,    60,
      57,    64,    54,    57,    86,    64,    12,    57,    90,    19,
      39,    40,    64,    14,    85,    44,    45,    46,    47,    48,
      57,    50,    51,    52,    53,    54,    55,    56,    18,    19,
      20,    -1,    -1,    -1,    -1,    64,    26,    50,    51,    52,
      53,    54,    55,    56,    -1,    35,    36,    -1,    -1,    -1,
      -1,    64,    42,    32,    33,    -1,    35,    36,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,     6,     7,    -1,    50,    51,
      52,    53,    54,    55,    56,    16,    17,    18,    -1,    20,
      -1,    22,    64,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    -1,    35,    36,    39,    40,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    61,    39,
      40,    64,    -1,    -1,    44,    45,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      39,    40,    -1,    -1,    64,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    -1,    39,
      40,    -1,    -1,    -1,    -1,    64,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    39,    40,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,     6,     7,    -1,    -1,    -1,
      -1,    12,    64,    -1,    -1,    16,    17,    18,    -1,    20,
      -1,    22,     6,     7,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    16,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    68,    32,    33,    35,    36,    69,    70,    71,
       0,    11,    57,     7,    72,     6,    16,    17,    18,    20,
      22,    30,    72,    73,    75,    69,    54,    57,    72,     3,
       4,     5,     6,     7,     8,    41,    60,    80,    80,    80,
      80,    57,    54,    12,    75,    80,    57,    80,    80,    39,
      40,    44,    45,    46,    47,    48,    50,    51,    52,    53,
      54,    55,    56,    57,    64,    13,    15,    80,    61,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    76,    69,    73,    74,    57,    74,
      73,    12,    77,    57,    19,    78,    74,    79,    14,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    72,    73,    73,    74,    74,    75,    75,    76,    77,
      78,    79,    75,    75,    75,    75,    75,    75,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     2,     2,     4,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     4,     0,     0,
       0,     0,    12,     6,     2,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: T_LET declarations T_IN command_sequence T_END  */
#line 92 "pmf0.y"
                                                   {
        printf("Parsing completed successfully\n");
        printSymbolTable();
    }
#line 1413 "pmf0.tab.c"
    break;

  case 5: /* declaration: type identifier  */
#line 104 "pmf0.y"
                    {
        insertSymbol((yyvsp[0].val_string), (yyvsp[-1].val_string), currentScope, NULL); 
          if (strcmp((yyvsp[-1].val_string), "int") == 0) {
            countInt++;
        }
    }
#line 1424 "pmf0.tab.c"
    break;

  case 6: /* declaration: type identifier T_ASSIGN expression  */
#line 110 "pmf0.y"
                                          {
        if (strcmp((yyvsp[-3].val_string), "int") == 0) {

            insertSymbol((yyvsp[-2].val_string), (yyvsp[-3].val_string), currentScope, &((yyvsp[0].val_int))); 
            countInt++;
        } else if (strcmp((yyvsp[-3].val_string), "double") == 0) {
            insertSymbol((yyvsp[-2].val_string), (yyvsp[-3].val_string), currentScope, &((yyvsp[0].val_int))); 
        } else if (strcmp((yyvsp[-3].val_string), "bool") == 0) {
            insertSymbol((yyvsp[-2].val_string), (yyvsp[-3].val_string), currentScope, &((yyvsp[0].val_int))); 
        } else {
            insertSymbol((yyvsp[-2].val_string), (yyvsp[-3].val_string), currentScope, NULL); 
        }
    }
#line 1442 "pmf0.tab.c"
    break;

  case 7: /* type: T_INT  */
#line 127 "pmf0.y"
          { (yyval.val_string) = strdup("int"); }
#line 1448 "pmf0.tab.c"
    break;

  case 8: /* type: T_DOUBLE  */
#line 128 "pmf0.y"
               { (yyval.val_string) = strdup("double"); }
#line 1454 "pmf0.tab.c"
    break;

  case 9: /* type: T_BOOL  */
#line 129 "pmf0.y"
             { (yyval.val_string) = strdup("bool"); }
#line 1460 "pmf0.tab.c"
    break;

  case 10: /* type: T_STRING  */
#line 130 "pmf0.y"
               { (yyval.val_string) = strdup("string"); }
#line 1466 "pmf0.tab.c"
    break;

  case 11: /* identifier: T_IDENTIFIER  */
#line 135 "pmf0.y"
                 { (yyval.val_string) = strdup((yyvsp[0].val_identifier)); }
#line 1472 "pmf0.tab.c"
    break;

  case 14: /* block: declarations command_sequence  */
#line 144 "pmf0.y"
                                    { (yyval.val_int) = 1; }
#line 1478 "pmf0.tab.c"
    break;

  case 15: /* block: command_sequence  */
#line 145 "pmf0.y"
                       { (yyval.val_int) = 1; }
#line 1484 "pmf0.tab.c"
    break;

  case 17: /* command: identifier T_ASSIGN expression T_SEMICOLON  */
#line 150 "pmf0.y"
                                                 {
        Symbol *symbol = findSymbol((yyvsp[-3].val_string), currentScope);
        if (symbol != NULL) {
            updateSymbolValue(symbol->name, symbol->scope, &(yyvsp[-1].val_int));
        }
    }
#line 1495 "pmf0.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 156 "pmf0.y"
                             { increaseScope(); }
#line 1501 "pmf0.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 156 "pmf0.y"
                                                        { decreaseScope(); }
#line 1507 "pmf0.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 156 "pmf0.y"
                                                                                    { increaseScope(); }
#line 1513 "pmf0.tab.c"
    break;

  case 21: /* $@4: %empty  */
#line 156 "pmf0.y"
                                                                                                               { decreaseScope(); }
#line 1519 "pmf0.tab.c"
    break;

  case 28: /* expression: expression T_OR expression  */
#line 165 "pmf0.y"
                                                     { (yyval.val_int) = (yyvsp[-2].val_int) || (yyvsp[0].val_int); }
#line 1525 "pmf0.tab.c"
    break;

  case 29: /* expression: expression T_ASSIGN expression  */
#line 166 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[0].val_int); }
#line 1531 "pmf0.tab.c"
    break;

  case 30: /* expression: expression T_LESS expression  */
#line 167 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) < (yyvsp[0].val_int); }
#line 1537 "pmf0.tab.c"
    break;

  case 31: /* expression: expression T_GREATER expression  */
#line 168 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) > (yyvsp[0].val_int); }
#line 1543 "pmf0.tab.c"
    break;

  case 32: /* expression: expression T_PLUS expression  */
#line 169 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) + (yyvsp[0].val_int); }
#line 1549 "pmf0.tab.c"
    break;

  case 33: /* expression: expression T_MINUS expression  */
#line 170 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) - (yyvsp[0].val_int); }
#line 1555 "pmf0.tab.c"
    break;

  case 34: /* expression: expression T_ASTERISK expression  */
#line 171 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) * (yyvsp[0].val_int); }
#line 1561 "pmf0.tab.c"
    break;

  case 35: /* expression: expression T_SLASH expression  */
#line 172 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) / (yyvsp[0].val_int); }
#line 1567 "pmf0.tab.c"
    break;

  case 36: /* expression: expression T_PERCENT expression  */
#line 173 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) % (yyvsp[0].val_int); }
#line 1573 "pmf0.tab.c"
    break;

  case 37: /* expression: expression T_GREATER_EQ expression  */
#line 174 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) >= (yyvsp[0].val_int); }
#line 1579 "pmf0.tab.c"
    break;

  case 38: /* expression: expression T_LESS_EQ expression  */
#line 175 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) <= (yyvsp[0].val_int); }
#line 1585 "pmf0.tab.c"
    break;

  case 39: /* expression: expression T_EQUAL expression  */
#line 176 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) == (yyvsp[0].val_int); }
#line 1591 "pmf0.tab.c"
    break;

  case 40: /* expression: expression T_NOT_EQUAL expression  */
#line 177 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) != (yyvsp[0].val_int); }
#line 1597 "pmf0.tab.c"
    break;

  case 41: /* expression: T_NOT expression  */
#line 178 "pmf0.y"
                                                       { (yyval.val_int) = !(yyvsp[0].val_int); }
#line 1603 "pmf0.tab.c"
    break;

  case 42: /* expression: expression T_AND expression  */
#line 179 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-2].val_int) && (yyvsp[0].val_int); }
#line 1609 "pmf0.tab.c"
    break;

  case 43: /* expression: T_LPAREN expression T_RPAREN  */
#line 180 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[-1].val_int); }
#line 1615 "pmf0.tab.c"
    break;

  case 44: /* expression: expression T_POWER expression  */
#line 181 "pmf0.y"
                                                        { (yyval.val_int) = pow((yyvsp[-2].val_int), (yyvsp[0].val_int)); }
#line 1621 "pmf0.tab.c"
    break;

  case 45: /* expression: T_DECIMAL_LITERAL  */
#line 182 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[0].val_int); }
#line 1627 "pmf0.tab.c"
    break;

  case 46: /* expression: T_HEXADECIMAL_LITERAL  */
#line 183 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[0].val_int); }
#line 1633 "pmf0.tab.c"
    break;

  case 47: /* expression: T_DOUBLE_LITERAL  */
#line 184 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[0].val_double); }
#line 1639 "pmf0.tab.c"
    break;

  case 48: /* expression: T_STRING_LITERAL  */
#line 185 "pmf0.y"
                                                       { (yyval.val_int) = atoi((yyvsp[0].val_string)); }
#line 1645 "pmf0.tab.c"
    break;

  case 49: /* expression: T_IDENTIFIER  */
#line 186 "pmf0.y"
                                                       { (yyval.val_int) = atoi((yyvsp[0].val_identifier)); }
#line 1651 "pmf0.tab.c"
    break;

  case 50: /* expression: T_BOOL_LITERAL  */
#line 187 "pmf0.y"
                                                       { (yyval.val_int) = (yyvsp[0].val_bool); }
#line 1657 "pmf0.tab.c"
    break;


#line 1661 "pmf0.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 190 "pmf0.y"


void increaseScope() {
    currentScope++;
}

void decreaseScope() {
    currentScope--;
}

int main() {
    if (yyparse() == 0) {
        printf("Parsing completed successfully\n");

        printSymbolTable();

        Symbol *maxInt = findMaxInt();
        if (maxInt != NULL) {
            printf("Najveci int je '%s' with value %d\n", maxInt->name, maxInt->value.intValue);
        } else {
            printf("Nije pronadjen!.\n");
        }
    } else {
        printf("The program failed!\n");
    }
    return 0;
}


void yyerror(const char* msg) {
    fprintf(stderr, "The error is at position (%d, %d), please check. -> %s\n", yylloc.first_line, yylloc.first_column, msg);
}

Symbol *createSymbol(char *name, char *type, int scope) {
    Symbol *newSymbol = (Symbol *) malloc(sizeof(Symbol));
    newSymbol->name = strdup(name);
    newSymbol->type = strdup(type);
    newSymbol->scope = scope;
    newSymbol->next = NULL;
    return newSymbol;
}

void insertSymbol(char *name, char *type, int scope, void *value) {
    Symbol *newSymbol = createSymbol(name, type, scope);

    if (value != NULL) {
        if (strcmp(type, "int") == 0) {
            newSymbol->value.intValue = *(int *)value;
        } else if (strcmp(type, "double") == 0) {
            newSymbol->value.doubleValue = *(double *)value;
        } else if (strcmp(type, "bool") == 0) {
            newSymbol->value.boolValue = *(bool *)value;
        }
    }

    newSymbol->next = symbolTable;
    symbolTable = newSymbol;
    printf("Inserted symbol: %s, type: %s, scope: %d\n", name, type, scope);
}


Symbol *findSymbol(char *name, int scope) {
    Symbol *current = symbolTable;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0 && current->scope == scope) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void updateSymbolValue(char *name, int scope, void *value) {
    Symbol *symbol = findSymbol(name, scope);
    if (symbol != NULL) {
        if (strcmp(symbol->type, "int") == 0) {
            symbol->value.intValue = *(int *)value;
        } else if (strcmp(symbol->type, "double") == 0) {
            symbol->value.doubleValue = *(double *)value;
        } else if (strcmp(symbol->type, "bool") == 0) {
            symbol->value.boolValue = *(bool *)value;
        } else if (strcmp(symbol->type, "string") == 0) {
            symbol->value.stringValue = strdup((char *)value);
        }
    }
}

void printSymbolTable() {
    Symbol *current = symbolTable;
    printf("Symbol Table:\n");
    printf("Name\tType\tScope\tValue\n");
    while (current != NULL) {
        printf("%s\t%s\t%d\t", current->name, current->type, current->scope);
        if (strcmp(current->type, "int") == 0) {
            printf("%d", current->value.intValue);
        } else if (strcmp(current->type, "double") == 0) {
            printf("%.1f", current->value.doubleValue); 
        } else if (strcmp(current->type, "bool") == 0) {
            printf("%s", current->value.boolValue ? "true" : "false");
        } else if (strcmp(current->type, "string") == 0) {
            printf("%s", current->value.stringValue);
        }
        printf("\n");
        current = current->next;
    }  
}

Symbol *findMaxInt() {
    Symbol *current = symbolTable;
    Symbol *maxInt = NULL;
    int maxValue = INT_MIN;

    while (current != NULL) {
        if (strcmp(current->type, "int") == 0) {
            if (current->value.intValue > maxValue) {
                maxValue = current->value.intValue;
                maxInt = current;
            }
        }
        current = current->next;
    }
    return maxInt;
}


