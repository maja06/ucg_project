%{
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern int yylex();
void yyerror(const char *s);
%}

%union {
    int val_int;
    double val_double;
    bool val_bool;
    char* val_string;
}

%token <val_int> T_DECIMAL_LITERAL T_HEXADECIMAL_LITERAL
%token <val_double> T_DOUBLE_LITERAL
%token <val_string> T_STRING_LITERAL T_IDENTIFIER
%token <val_bool> T_BOOL_LITERAL

%token T_LET T_IN T_END T_THEN T_FI T_DO T_READ T_WRITE T_IF T_ELSE T_WHILE T_RETURN
%token T_FOR T_FOREACH T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_THIS T_SKIP
%token T_INT T_DOUBLE T_CHAR T_STRING T_BOOL T_VOID T_ENUM
%token T_AND T_OR T_NOT T_TRUE T_FALSE
%token T_PLUS T_MINUS T_ASTERISK T_SLASH T_PERCENT T_BACKSLASH
%token T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%token T_ASSIGN T_EQUAL T_NOT_EQUAL
%token T_SEMICOLON T_COMMA T_DOT T_LPAREN T_RPAREN
%token T_ERROR T_UNKNOWN

%type <val_int> IntExpression
%type <val_double> DoubleExpression
%type <val_bool> BoolExpression
%type <val_string> StringExpression

%left T_PLUS T_MINUS
%left T_ASTERISK T_SLASH T_PERCENT
%left T_AND T_OR

%nonassoc T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%nonassoc T_EQUAL T_NOT_EQUAL
%nonassoc T_ASSIGN

%right T_NOT

%start Program

%%

Program:
    T_LET Declarations T_IN Command_sequence T_END
    ;

Declarations:
    /* Empty */
  | Declarations Declaration
    ;

Declaration:
    Type Id_list T_SEMICOLON
    ;

Id_list:
    T_IDENTIFIER
  | Id_list T_COMMA T_IDENTIFIER
    ;

Type:
    T_INT 
  | T_DOUBLE 
  | T_CHAR 
  | T_STRING 
  | T_BOOL 
    ;

Command_sequence:
    /* Empty */
  | Command_sequence Command
    ;

Command:
    T_SKIP T_SEMICOLON
  | T_IDENTIFIER T_ASSIGN Expression T_SEMICOLON
  | T_IF BoolExpression T_THEN Command_sequence T_ELSE Command_sequence T_FI T_SEMICOLON
  | T_WHILE BoolExpression T_DO Command_sequence T_END T_SEMICOLON
  | T_READ T_IDENTIFIER T_SEMICOLON
  | T_WRITE Expression T_SEMICOLON
    ;

Expression:
    IntExpression
  | DoubleExpression
  | BoolExpression
  | StringExpression
    ;

IntExpression:
    T_DECIMAL_LITERAL
  | T_HEXADECIMAL_LITERAL
  | IntExpression T_PLUS IntExpression { $$ = $1 + $3; }
  | IntExpression T_MINUS IntExpression { $$ = $1 - $3; }
  | IntExpression T_ASTERISK IntExpression { $$ = $1 * $3; }
  | IntExpression T_SLASH IntExpression { $$ = $1 / $3; }
  | IntExpression T_LESS IntExpression { $$ = $1 < $3; }
  | IntExpression T_LESS_EQ IntExpression { $$ = $1 <= $3; }
  | IntExpression T_GREATER IntExpression { $$ = $1 > $3; }
  | IntExpression T_GREATER_EQ IntExpression { $$ = $1 >= $3; }
  | IntExpression T_EQUAL IntExpression { $$ = $1 == $3; }
  | IntExpression T_NOT_EQUAL IntExpression { $$ = $1 != $3; }
    ;

DoubleExpression:
    T_DOUBLE_LITERAL
  | DoubleExpression T_PLUS DoubleExpression
  | DoubleExpression T_MINUS DoubleExpression
  | DoubleExpression T_ASTERISK DoubleExpression
  | DoubleExpression T_SLASH DoubleExpression
  | DoubleExpression T_LESS DoubleExpression { $$ = $1 < $3; }
  | DoubleExpression T_LESS_EQ DoubleExpression { $$ = $1 <= $3; }
  | DoubleExpression T_GREATER DoubleExpression { $$ = $1 > $3; }
  | DoubleExpression T_GREATER_EQ DoubleExpression { $$ = $1 >= $3; }
  | DoubleExpression T_EQUAL DoubleExpression { $$ = $1 == $3; }
  | DoubleExpression T_NOT_EQUAL DoubleExpression { $$ = $1 != $3; }
    ;

BoolExpression:
    T_BOOL_LITERAL
  | BoolExpression T_AND BoolExpression { $$ = $1 && $3; }
  | BoolExpression T_OR BoolExpression { $$ = $1 || $3; }
  | T_NOT BoolExpression { $$ = !$2; }
    ;

StringExpression:
    T_STRING_LITERAL
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