/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PMF0_TAB_H_INCLUDED
# define YY_YY_PMF0_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_DECIMAL_LITERAL = 258,       /* T_DECIMAL_LITERAL  */
    T_HEXADECIMAL_LITERAL = 259,   /* T_HEXADECIMAL_LITERAL  */
    T_DOUBLE_LITERAL = 260,        /* T_DOUBLE_LITERAL  */
    T_STRING_LITERAL = 261,        /* T_STRING_LITERAL  */
    T_IDENTIFIER = 262,            /* T_IDENTIFIER  */
    T_BOOL_LITERAL = 263,          /* T_BOOL_LITERAL  */
    T_CHAR_LITERAL = 264,          /* T_CHAR_LITERAL  */
    T_LET = 265,                   /* T_LET  */
    T_IN = 266,                    /* T_IN  */
    T_END = 267,                   /* T_END  */
    T_THEN = 268,                  /* T_THEN  */
    T_FI = 269,                    /* T_FI  */
    T_DO = 270,                    /* T_DO  */
    T_READ = 271,                  /* T_READ  */
    T_WRITE = 272,                 /* T_WRITE  */
    T_IF = 273,                    /* T_IF  */
    T_ELSE = 274,                  /* T_ELSE  */
    T_WHILE = 275,                 /* T_WHILE  */
    T_RETURN = 276,                /* T_RETURN  */
    T_FOR = 277,                   /* T_FOR  */
    T_FOREACH = 278,               /* T_FOREACH  */
    T_SWITCH = 279,                /* T_SWITCH  */
    T_CASE = 280,                  /* T_CASE  */
    T_DEFAULT = 281,               /* T_DEFAULT  */
    T_BREAK = 282,                 /* T_BREAK  */
    T_CONTINUE = 283,              /* T_CONTINUE  */
    T_THIS = 284,                  /* T_THIS  */
    T_SKIP = 285,                  /* T_SKIP  */
    T_STRUCT = 286,                /* T_STRUCT  */
    T_INT = 287,                   /* T_INT  */
    T_DOUBLE = 288,                /* T_DOUBLE  */
    T_CHAR = 289,                  /* T_CHAR  */
    T_STRING = 290,                /* T_STRING  */
    T_BOOL = 291,                  /* T_BOOL  */
    T_VOID = 292,                  /* T_VOID  */
    T_ENUM = 293,                  /* T_ENUM  */
    T_AND = 294,                   /* T_AND  */
    T_OR = 295,                    /* T_OR  */
    T_NOT = 296,                   /* T_NOT  */
    T_TRUE = 297,                  /* T_TRUE  */
    T_FALSE = 298,                 /* T_FALSE  */
    T_PLUS = 299,                  /* T_PLUS  */
    T_MINUS = 300,                 /* T_MINUS  */
    T_ASTERISK = 301,              /* T_ASTERISK  */
    T_SLASH = 302,                 /* T_SLASH  */
    T_PERCENT = 303,               /* T_PERCENT  */
    T_BACKSLASH = 304,             /* T_BACKSLASH  */
    T_LESS = 305,                  /* T_LESS  */
    T_LESS_EQ = 306,               /* T_LESS_EQ  */
    T_GREATER = 307,               /* T_GREATER  */
    T_GREATER_EQ = 308,            /* T_GREATER_EQ  */
    T_ASSIGN = 309,                /* T_ASSIGN  */
    T_EQUAL = 310,                 /* T_EQUAL  */
    T_NOT_EQUAL = 311,             /* T_NOT_EQUAL  */
    T_SEMICOLON = 312,             /* T_SEMICOLON  */
    T_COMMA = 313,                 /* T_COMMA  */
    T_DOT = 314,                   /* T_DOT  */
    T_LPAREN = 315,                /* T_LPAREN  */
    T_RPAREN = 316,                /* T_RPAREN  */
    T_OPEN_BRACE = 317,            /* T_OPEN_BRACE  */
    T_CLOSE_BRACE = 318,           /* T_CLOSE_BRACE  */
    T_POWER = 319,                 /* T_POWER  */
    T_ERROR = 320,                 /* T_ERROR  */
    T_UNKNOWN = 321                /* T_UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "pmf0.y"

    int val_int;
    char* val_identifier;
    int val_bool;
    char* val_string;
    double val_double;
    char val_char;

#line 139 "pmf0.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PMF0_TAB_H_INCLUDED  */
