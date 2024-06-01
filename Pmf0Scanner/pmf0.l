%option debug
%{
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pmf0.tab.h"
#include "location.h"

int yycolumn = 1;
#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn + yyleng - 1; \
    yycolumn += yyleng;
%}

%option noyywrap
%option yylineno

%%

"let"       { printf("TOKEN: T_LET\n"); return T_LET; }
"in"        { printf("TOKEN: T_IN\n"); return T_IN; }
"end"       { printf("TOKEN: T_END\n"); return T_END; }
"then"      { printf("TOKEN: T_THEN\n"); return T_THEN; }
"fi"        { printf("TOKEN: T_FI\n"); return T_FI; }
"do"        { printf("TOKEN: T_DO\n"); return T_DO; }
"read"      { printf("TOKEN: T_READ\n"); return T_READ; }
"write"     { printf("TOKEN: T_WRITE\n"); return T_WRITE; }
"if"        { printf("TOKEN: T_IF\n"); return T_IF; }
"else"      { printf("TOKEN: T_ELSE\n"); return T_ELSE; }
"while"     { printf("TOKEN: T_WHILE\n"); return T_WHILE; }
"return"    { printf("TOKEN: T_RETURN\n"); return T_RETURN; }
"for"       { printf("TOKEN: T_FOR\n"); return T_FOR; }
"foreach"   { printf("TOKEN: T_FOREACH\n"); return T_FOREACH; }
"switch"    { printf("TOKEN: T_SWITCH\n"); return T_SWITCH; }
"case"      { printf("TOKEN: T_CASE\n"); return T_CASE; }
"default"   { printf("TOKEN: T_DEFAULT\n"); return T_DEFAULT; }
"break"     { printf("TOKEN: T_BREAK\n"); return T_BREAK; }
"continue"  { printf("TOKEN: T_CONTINUE\n"); return T_CONTINUE; }
"this"      { printf("TOKEN: T_THIS\n"); return T_THIS; }
"skip"      { printf("TOKEN: T_SKIP\n"); return T_SKIP; }

"int"       { printf("TOKEN: T_INT\n"); return T_INT; }
"double"    { printf("TOKEN: T_DOUBLE\n"); return T_DOUBLE; }
"char"      { printf("TOKEN: T_CHAR\n"); return T_CHAR; }
"string"    { printf("TOKEN: T_STRING\n"); return T_STRING; }
"bool"      { printf("TOKEN: T_BOOL\n"); return T_BOOL; }
"void"      { printf("TOKEN: T_VOID\n"); return T_VOID; }
"enum"      { printf("TOKEN: T_ENUM\n"); return T_ENUM; }

"and"       { printf("TOKEN: T_AND\n"); return T_AND; }
"or"        { printf("TOKEN: T_OR\n"); return T_OR; }
"not"       { printf("TOKEN: T_NOT\n"); return T_NOT; }

"true"      { printf("TOKEN: T_BOOL_LITERAL (true)\n"); yylval.val_bool = 1; return T_BOOL_LITERAL; }
"false"     { printf("TOKEN: T_BOOL_LITERAL (false)\n"); yylval.val_bool = 0; return T_BOOL_LITERAL; }

"\/\/".*$        { /* Ignoriši jednolinijske komentare */ }
\/\*([^*]|(\*+[^*/]))*\*+\/    { /* Ignoriši višelinijske komentare */ }

[0-9]+                               { printf("TOKEN: T_DECIMAL_LITERAL (%s)\n", yytext); yylval.val_int = atoi(yytext); return T_DECIMAL_LITERAL; }
0[xX][0-9a-fA-F]+                    { printf("TOKEN: T_HEXADECIMAL_LITERAL (%s)\n", yytext); yylval.val_int = strtol(yytext, NULL, 16); return T_HEXADECIMAL_LITERAL; }

[0-9]+\.[0-9]*([eE][+-]?[0-9]+)?     { printf("TOKEN: T_DOUBLE_LITERAL (%s)\n", yytext); yylval.val_double = atof(yytext); return T_DOUBLE_LITERAL; }
[0-9]+[eE][+-]?[0-9]+ {
    fprintf(stderr, "Error: Nevalidan double format: %s\n", yytext);
    return T_ERROR;
}

\"(\\[^\n]|[^"\n\\])*\"    { printf("TOKEN: T_STRING_LITERAL (%s)\n", yytext); yylval.val_string = strdup(yytext); return T_STRING_LITERAL; }
\"([^"\n\\]|\\[^\n])* {
    fprintf(stderr, "Error: Nevalidan string format na liniji %d: %s\n", yylineno, yytext);
    return T_ERROR;
}

"+"         { printf("TOKEN: T_PLUS\n"); return T_PLUS; }
"-"         { printf("TOKEN: T_MINUS\n"); return T_MINUS; }
"*"         { printf("TOKEN: T_ASTERISK\n"); return T_ASTERISK; }
"/"         { printf("TOKEN: T_SLASH\n"); return T_SLASH; }
"%"         { printf("TOKEN: T_PERCENT\n"); return T_PERCENT; }
"\\"        { printf("TOKEN: T_BACKSLASH\n"); return T_BACKSLASH; }
"<"         { printf("TOKEN: T_LESS\n"); return T_LESS; }
"<="        { printf("TOKEN: T_LESS_EQ\n"); return T_LESS_EQ; }
">"         { printf("TOKEN: T_GREATER\n"); return T_GREATER; }
">="        { printf("TOKEN: T_GREATER_EQ\n"); return T_GREATER_EQ; }
"="         { printf("TOKEN: T_ASSIGN\n"); return T_ASSIGN; }
"=="        { printf("TOKEN: T_EQUAL\n"); return T_EQUAL; }
"!="        { printf("TOKEN: T_NOT_EQUAL\n"); return T_NOT_EQUAL; }
"&&"        { printf("TOKEN: T_AND\n"); return T_AND; }
"||"        { printf("TOKEN: T_OR\n"); return T_OR; }
"!"         { printf("TOKEN: T_NOT\n"); return T_NOT; }
";"         { printf("TOKEN: T_SEMICOLON\n"); return T_SEMICOLON; }
","         { printf("TOKEN: T_COMMA\n"); return T_COMMA; }
"."         { printf("TOKEN: T_DOT\n"); return T_DOT; }
"("         { printf("TOKEN: T_LPAREN\n"); return T_LPAREN; }
")"         { printf("TOKEN: T_RPAREN\n"); return T_RPAREN; }

[a-zA-Z][a-zA-Z0-9_]{31,} {
    fprintf(stderr, "Error: Identifikator je predug: %s\n", yytext);
    return T_ERROR;
}

[a-zA-Z][a-zA-Z0-9_]{0,30} {
    printf("TOKEN: T_IDENTIFIER (%s)\n", yytext);
    yylval.val_string = strdup(yytext);
    return T_IDENTIFIER;
}

[ \t]+      { yycolumn += yyleng; }  
\n          { }
.           { }

%%
