%{
    #include <stdio.h>
    #include "tokens.h"

    extern int yylex(void);
    void yyerror(const char *s) {
        fprintf(stderr, "Error: %s\n", s);
    }
%}

%union {
    int val_int;
    double val_double;
    char* val_string;
    bool val_bool;
    void* generic_ptr;
}

%type <val_int> int_expression
%type <val_double> double_expression
%type <val_bool> bool_expression
%type <void*> command  
%type <void*> expression type



%token T_LET T_IN T_END T_THEN T_FI T_DO T_READ T_WRITE T_IF T_ELSE T_WHILE T_RETURN 
%token T_FOR T_FOREACH T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_THIS T_SKIP
%token T_INT T_DOUBLE T_CHAR T_STRING T_BOOL T_VOID T_ENUM 
%token T_AND T_OR T_NOT T_TRUE T_FALSE
%token <val_int> T_DECIMAL_LITERAL T_HEXADECIMAL_LITERAL
%token <val_double> T_DOUBLE_LITERAL
%token <val_string> T_STRING_LITERAL T_IDENTIFIER
%token <val_bool> T_BOOL_LITERAL
%token T_PLUS T_MINUS T_ASTERISK T_SLASH T_PERCENT T_BACKSLASH
%token T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ
%token T_ASSIGN T_EQUAL T_NOT_EQUAL
%token T_AND_OP T_OR_OP T_NOT_OP
%token T_SEMICOLON T_COMMA T_DOT T_LPAREN T_RPAREN
%token T_ERROR T_UNKNOWN


%left T_PLUS T_MINUS  
%left T_ASTERISK T_SLASH T_PERCENT  
%left T_AND T_OR 

%nonassoc T_LESS T_LESS_EQ T_GREATER T_GREATER_EQ  
%nonassoc T_EQUAL T_NOT_EQUAL  
%nonassoc T_ASSIGN  

%right T_NOT  
/*%right T_MINUS  unarni minus */


%%

program:
      T_LET declarations T_IN command_sequence T_END
      ;

declarations:
      /* prazno */
    | declarations type T_IDENTIFIER ident_seq
      ;

ident_seq:
      /* prazno */
    | ident_seq T_COMMA T_IDENTIFIER
      ;

command_sequence:
      /* prazno */
    | command_sequence command
      ;

command:
      T_SKIP T_SEMICOLON { $$ = NULL; }  
    | T_IDENTIFIER T_ASSIGN expression T_SEMICOLON { $$ = $3; }
    | T_IF bool_expression T_THEN command_sequence T_ELSE command_sequence T_FI T_SEMICOLON {
        $$ = NULL;  
    }
    | T_WHILE bool_expression T_DO command_sequence T_END T_SEMICOLON {
        $$ = NULL;  
    }
    | T_READ T_IDENTIFIER T_SEMICOLON {
        $$ = NULL;
    }
    | T_WRITE expression T_SEMICOLON {
        $$ = NULL; 
    }
    ;

expression:
      int_expression { $$ = $1; }
    | double_expression { $$ = $1; }
    | bool_expression { $$ = $1; }
      ;

int_expression:
      T_DECIMAL_LITERAL { $$ = $1; }
    | T_HEXADECIMAL_LITERAL { $$ = $1; }
    | int_expression T_PLUS int_expression { $$ = $1 + $3; }
    | int_expression T_MINUS int_expression { $$ = $1 - $3; }
    | int_expression T_ASTERISK int_expression { $$ = $1 * $3; }
    | int_expression T_SLASH int_expression { $$ = $1 / $3; }
    | int_expression T_PERCENT int_expression { $$ = $1 % $3; }
    /* | T_MINUS int_expression %prec T_MINUS { $$ = -$2; } unarni minus */
    ;

double_expression:
      T_DOUBLE_LITERAL { $$ = $1; }
    | double_expression T_PLUS double_expression { $$ = $1 + $3; }
    | double_expression T_MINUS double_expression { $$ = $1 - $3; }
    | double_expression T_ASTERISK double_expression { $$ = $1 * $3; }
    | double_expression T_SLASH double_expression { $$ = $1 / $3; }
    ;

bool_expression:
      T_BOOL_LITERAL { $$ = $1; }
    | bool_expression T_AND bool_expression { $$ = $1 && $3; }
    | bool_expression T_OR bool_expression { $$ = $1 || $3; }
    | bool_expression T_EQUAL bool_expression { $$ = $1 == $3; }
    | bool_expression T_NOT_EQUAL bool_expression { $$ = $1 != $3; }
    | T_NOT bool_expression { $$ = !$2; }
    ;

type:
      T_INT { $$ = 1; }
    | T_DOUBLE { $$ = 2; }
    | T_BOOL { $$ = 3; }
    | T_STRING { $$ = 4; }
    | T_CHAR { $$ = 5; }
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
