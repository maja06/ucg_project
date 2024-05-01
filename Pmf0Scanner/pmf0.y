%{
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "pmf0.tab.h" 


extern int yylex();
void yyerror(const char *s);

%}

%union {
    int val_int;
    double val_double;
    char *val_string;
    int val_bool;
}

%token <val_int> T_DECIMAL_LITERAL T_HEXADECIMAL_LITERAL
%token <val_double> T_DOUBLE_LITERAL
%token <val_string> T_STRING_LITERAL 
%token <val_bool> T_BOOL_LITERAL

%token T_LET T_IN T_END T_THEN T_FI T_DO T_READ T_WRITE T_IF T_ELSE T_WHILE T_RETURN
%token T_FOR T_FOREACH T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_THIS T_SKIP
%token T_INT T_DOUBLE T_CHAR T_STRING T_BOOL T_VOID T_ENUM
%token T_AND T_OR T_NOT T_TRUE T_FALSE
%token T_IDENTIFIER
%token T_PLUS T_MINUS T_ASTERISK T_SLASH T_PERCENT T_BACKSLASH
%token T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%token T_ASSIGN T_EQUAL T_NOT_EQUAL
%token T_SEMICOLON T_COMMA T_DOT T_LPAREN T_RPAREN
%token T_ERROR T_UNKNOWN

%type <val_int> int_expression
%type <val_double> double_expression
%type <val_bool> bool_expression
%type <val_string> string_expression

%left T_PLUS T_MINUS
%left T_ASTERISK T_SLASH T_PERCENT
%left T_AND T_OR

%nonassoc T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%nonassoc T_EQUAL T_NOT_EQUAL
%nonassoc T_ASSIGN

%right T_NOT

%%
program:
    T_LET declarations T_IN command_sequence T_END
  ;
  
 declarations:
    /* Empty */
  | declarations type ident_decl
  ;

ident_decl:
    identifier
  | ident_decl T_COMMA identifier
  ;

 type:
    T_INT
  | T_DOUBLE
  | T_BOOL
  | T_STRING
  ;

identifier:
    T_IDENTIFIER
;

command_sequence:
    command
  | command_sequence T_SEMICOLON command
  ;

command:
    T_SKIP T_SEMICOLON
  | identifier T_ASSIGN expression T_SEMICOLON
  | T_IF expression T_THEN command_sequence T_ELSE command_sequence T_FI T_SEMICOLON
  | T_WHILE expression T_DO command_sequence T_END T_SEMICOLON
  | T_READ identifier T_SEMICOLON
  | T_WRITE expression T_SEMICOLON
  ;

expression:
    int_expression
  | double_expression
  | bool_expression
  | string_expression
  ;

int_expression:
    T_DECIMAL_LITERAL  { $$ = $1; }
  | T_HEXADECIMAL_LITERAL  { $$ = $1; }
  | int_expression T_PLUS int_expression   { $$ = $1 + $3; }
  | int_expression T_MINUS int_expression  { $$ = $1 - $3; }
  | int_expression T_ASTERISK int_expression { $$ = $1 * $3; }
  | int_expression T_SLASH int_expression   { $$ = $1 / $3; }
  | int_expression T_EQUAL int_expression { $$ = ($1 == $3); }
  | int_expression T_NOT_EQUAL int_expression { $$ = ($1 != $3); }
  | int_expression T_LESS int_expression { $$ = ($1 < $3); }
  | int_expression T_LESS_EQ int_expression { $$ = ($1 <= $3); }
  | int_expression T_GREATER int_expression { $$ = ($1 > $3); }
  | int_expression T_GREATER_EQ int_expression { $$ = ($1 >= $3); }
  | '(' int_expression ')'  { $$ = $2; }
  ;

double_expression:
    T_DOUBLE_LITERAL  { $$ = $1; }
  | double_expression T_PLUS double_expression   { $$ = $1 + $3; }
  | double_expression T_MINUS double_expression  { $$ = $1 - $3; }
  | double_expression T_ASTERISK double_expression { $$ = $1 * $3; }
  | double_expression T_SLASH double_expression   { $$ = $1 / $3; }
  | '(' double_expression ')'                     { $$ = $2; }
  ;

bool_expression:
    T_BOOL_LITERAL { $$ = $1; }
  | bool_expression T_AND bool_expression { $$ = $1 && $3; }
  | bool_expression T_OR bool_expression  { $$ = $1 || $3; }
  | T_NOT bool_expression                 { $$ = !$2; }
  | '(' bool_expression ')'               { $$ = $2; }
  ;;

string_expression:
    T_STRING_LITERAL { $$ = strdup($1); }
  | string_expression T_PLUS string_expression { $$ = strcat($1, $3); }
  | '(' string_expression ')' { $$ = $2; }
  ;

%%

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