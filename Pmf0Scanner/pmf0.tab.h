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
# define YYDEBUG 1
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
    T_BOOL_LITERAL = 262,          /* T_BOOL_LITERAL  */
    T_LET = 263,                   /* T_LET  */
    T_IN = 264,                    /* T_IN  */
    T_END = 265,                   /* T_END  */
    T_THEN = 266,                  /* T_THEN  */
    T_FI = 267,                    /* T_FI  */
    T_DO = 268,                    /* T_DO  */
    T_READ = 269,                  /* T_READ  */
    T_WRITE = 270,                 /* T_WRITE  */
    T_IF = 271,                    /* T_IF  */
    T_ELSE = 272,                  /* T_ELSE  */
    T_WHILE = 273,                 /* T_WHILE  */
    T_RETURN = 274,                /* T_RETURN  */
    T_FOR = 275,                   /* T_FOR  */
    T_FOREACH = 276,               /* T_FOREACH  */
    T_SWITCH = 277,                /* T_SWITCH  */
    T_CASE = 278,                  /* T_CASE  */
    T_DEFAULT = 279,               /* T_DEFAULT  */
    T_BREAK = 280,                 /* T_BREAK  */
    T_CONTINUE = 281,              /* T_CONTINUE  */
    T_THIS = 282,                  /* T_THIS  */
    T_SKIP = 283,                  /* T_SKIP  */
    T_INT = 284,                   /* T_INT  */
    T_DOUBLE = 285,                /* T_DOUBLE  */
    T_CHAR = 286,                  /* T_CHAR  */
    T_STRING = 287,                /* T_STRING  */
    T_BOOL = 288,                  /* T_BOOL  */
    T_VOID = 289,                  /* T_VOID  */
    T_ENUM = 290,                  /* T_ENUM  */
    T_AND = 291,                   /* T_AND  */
    T_OR = 292,                    /* T_OR  */
    T_NOT = 293,                   /* T_NOT  */
    T_TRUE = 294,                  /* T_TRUE  */
    T_FALSE = 295,                 /* T_FALSE  */
    T_IDENTIFIER = 296,            /* T_IDENTIFIER  */
    T_PLUS = 297,                  /* T_PLUS  */
    T_MINUS = 298,                 /* T_MINUS  */
    T_ASTERISK = 299,              /* T_ASTERISK  */
    T_SLASH = 300,                 /* T_SLASH  */
    T_PERCENT = 301,               /* T_PERCENT  */
    T_BACKSLASH = 302,             /* T_BACKSLASH  */
    T_LESS = 303,                  /* T_LESS  */
    T_LESS_EQ = 304,               /* T_LESS_EQ  */
    T_GREATER = 305,               /* T_GREATER  */
    T_GREATER_EQ = 306,            /* T_GREATER_EQ  */
    T_ASSIGN = 307,                /* T_ASSIGN  */
    T_EQUAL = 308,                 /* T_EQUAL  */
    T_NOT_EQUAL = 309,             /* T_NOT_EQUAL  */
    T_SEMICOLON = 310,             /* T_SEMICOLON  */
    T_COMMA = 311,                 /* T_COMMA  */
    T_DOT = 312,                   /* T_DOT  */
    T_LPAREN = 313,                /* T_LPAREN  */
    T_RPAREN = 314,                /* T_RPAREN  */
    T_ERROR = 315,                 /* T_ERROR  */
    T_UNKNOWN = 316                /* T_UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "pmf0.y"

    int val_int;
    double val_double;
    char *val_string;
    int val_bool;

#line 132 "pmf0.tab.h"

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
