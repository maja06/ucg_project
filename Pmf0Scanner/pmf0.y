%debug
%{
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pmf0.tab.h"

extern void yyerror(const char *s);  
extern int yylex();
extern int yyparse();  
int yydebug = 1;
%}

%locations
%union {
    int val_int;
    char* val_identifier;
    int val_bool;
    double val_double;
}

%token <val_int> T_DECIMAL_LITERAL T_HEXADECIMAL_LITERAL
%token <val_double> T_DOUBLE_LITERAL
%token <val_identifier> T_STRING_LITERAL
%token <val_identifier> T_IDENTIFIER
%token <val_bool> T_BOOL_LITERAL

%type<val_int> expression

%token T_LET T_IN T_END T_THEN T_FI T_DO T_READ T_WRITE T_IF T_ELSE T_WHILE T_RETURN 
%token T_FOR T_FOREACH T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_THIS T_SKIP 
%token T_INT T_DOUBLE T_CHAR T_STRING T_BOOL T_VOID T_ENUM 
%token T_AND T_OR T_NOT T_TRUE T_FALSE 
%token T_PLUS T_MINUS T_ASTERISK T_SLASH T_PERCENT T_BACKSLASH 
%token T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ 
%token T_ASSIGN T_EQUAL T_NOT_EQUAL 
%token T_SEMICOLON T_COMMA T_DOT T_LPAREN T_RPAREN 
%token T_ERROR T_UNKNOWN


%left T_PLUS T_MINUS
%left T_ASTERISK T_SLASH T_PERCENT
%left T_AND T_OR

%nonassoc T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%nonassoc T_EQUAL T_NOT_EQUAL
%nonassoc T_ASSIGN

%right T_NOT

%%

progaram: 
      T_LET declarations T_IN command_sequence T_END                         {  }
    ;

declarations:
      declaration T_SEMICOLON declarations
    | declaration T_SEMICOLON
    ;

declaration:
      type ident_decl
    ;

type:
      T_INT
    | T_DOUBLE
    | T_STRING
    | T_BOOL
    ;

ident_decl :
      id_seq
    | id_seq_with_init
    ;

id_seq :
      identifier T_COMMA id_seq
    | identifier
    ;

id_seq_with_init :
      identifier T_ASSIGN expression T_COMMA id_seq_with_init
    | identifier T_ASSIGN expression
    ;

identifier:
    T_IDENTIFIER
    ;

command_sequence: 
      command_sequence command
    | command
    ;

command: 
      T_SKIP T_SEMICOLON
    | identifier T_ASSIGN expression T_SEMICOLON
    | T_IF expression T_THEN command_sequence T_ELSE command_sequence T_FI T_SEMICOLON
    | T_WHILE expression T_DO command_sequence T_END T_SEMICOLON
    | T_READ identifier T_SEMICOLON
    | T_WRITE expression T_SEMICOLON
    | T_STRING_LITERAL T_SEMICOLON
    ;

expression: 
      expression T_OR expression                       { $$ = $1 || $3; }
    | expression T_ASSIGN expression                   { $$ = $3; }
    | expression T_LESS expression                     { $$ = $1 < $3; }
    | expression T_GREATER expression                  { $$ = $1 > $3; }
    | expression T_PLUS expression                     { $$ = $1 + $3; }
    | expression T_MINUS expression                    { $$ = $1 - $3; }
    | expression T_ASTERISK expression                 { $$ = $1 * $3; }
    | expression T_SLASH expression                    { $$ = $1 / $3; }
    | expression T_PERCENT expression                  { $$ = $1 % $3; }
    | expression T_GREATER_EQ expression               { $$ = $1 >= $3; }
    | expression T_LESS_EQ expression                  { $$ = $1 <= $3; }
    | expression T_EQUAL expression                    { $$ = $1 == $3; }
    | expression T_NOT_EQUAL expression                { $$ = $1 != $3; }
    | T_NOT expression                                 { $$ = !$2; }
    | expression T_AND expression                      { $$ = $1 && $3; }
    | T_LPAREN expression T_RPAREN                     { $$ = $2; }
    | T_DECIMAL_LITERAL                                { $$ = $1; }
    | T_HEXADECIMAL_LITERAL                            { $$ = $1; }
    | T_DOUBLE_LITERAL                                 { $$ = $1; }
    | T_STRING_LITERAL                                 { $$ = atoi($1); }  
    | T_IDENTIFIER                                     { $$ = atoi($1); }  
    | T_BOOL_LITERAL                                   { $$ = $1; }
;
 
%%

extern void yyerror(const char* msg); 
extern int main(); 