%{
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
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

Symbol *createSymbol(char *name, char *type, int scope);
void insertSymbol(char *name, char *type, int scope);
Symbol *findSymbol(char *name, int scope);
void updateSymbolValue(char *name, int scope, void *value);
void printSymbolTable();

void increaseScope();
void decreaseScope();

%}

%locations
%union {
    int val_int;
    char* val_identifier;
    int val_bool;
    char* val_string;
    double val_double;
    char val_char;
}

%type <val_string> type ident_decl identifier
%type <val_int> expression block

%start program
%token <val_int> T_DECIMAL_LITERAL T_HEXADECIMAL_LITERAL
%token <val_double> T_DOUBLE_LITERAL
%token <val_string> T_STRING_LITERAL
%token <val_identifier> T_IDENTIFIER
%token <val_bool> T_BOOL_LITERAL
%token <val_char> T_CHAR_LITERAL

%token T_LET T_IN T_END T_THEN T_FI T_DO T_READ T_WRITE T_IF T_ELSE T_WHILE T_RETURN 
%token T_FOR T_FOREACH T_SWITCH T_CASE T_DEFAULT T_BREAK T_CONTINUE T_THIS T_SKIP T_STRUCT
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

program:
    T_LET declarations T_IN command_sequence T_END {
        printf("Parsing completed successfully\n");
        printSymbolTable();
    }
;

declarations:
    declaration T_SEMICOLON declarations
    | declaration T_SEMICOLON
;

declaration:
    type ident_decl {
        insertSymbol($2, $1, currentScope);
    }
    ;

type:
    T_INT { $$ = strdup("int"); }
    | T_DOUBLE { $$ = strdup("double"); }
    | T_BOOL { $$ = strdup("bool"); }
    | T_STRING { $$ = strdup("string"); }
;

ident_decl:
    identifier
    | identifier T_ASSIGN expression {
        Symbol *symbol = findSymbol($1, currentScope);
        if (symbol != NULL) {
            updateSymbolValue(symbol->name, symbol->scope, &$3);
        }
    }
    ;

identifier:
    T_IDENTIFIER { $$ = strdup($1); }
;

command_sequence:
    command_sequence command
    | command
;

block:
      declarations command_sequence { $$ = 1; }  /* ili bilo koja druga vrednost */
    | command_sequence { $$ = 1; }
;

command:
      T_SKIP T_SEMICOLON
    | identifier T_ASSIGN expression T_SEMICOLON {
        Symbol *symbol = findSymbol($1, currentScope);
        if (symbol != NULL) {
            updateSymbolValue(symbol->name, symbol->scope, &$3);
        }
    }
    | T_IF expression T_THEN { increaseScope(); } block { decreaseScope(); } T_ELSE { increaseScope(); } block { decreaseScope(); } T_FI T_SEMICOLON
    | T_WHILE expression T_DO block T_END T_SEMICOLON
    | T_FOR identifier
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

void increaseScope() {
    currentScope++;
}

void decreaseScope() {
    currentScope--;
}

int main() {
    if (yyparse() == 0) {
        printf("The program has successfully completed its work!\n");
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

void insertSymbol(char *name, char *type, int scope) {
    Symbol *newSymbol = createSymbol(name, type, scope);
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
            printf("%.1f", current->value.doubleValue); // Precizno formatiranje za double
        } else if (strcmp(current->type, "bool") == 0) {
            printf("%s", current->value.boolValue ? "true" : "false");
        } else if (strcmp(current->type, "string") == 0) {
            printf("%s", current->value.stringValue);
        }
        printf("\n");
        current = current->next;
    }
}
