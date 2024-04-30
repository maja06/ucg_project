%{
#include <stdbool.h>
#include <stdio.h>
#include "tokens.h"
%}

%option yylineno

%%
"let"       { return T_LET; }
"in"        { return T_IN; }
"end"       { return T_END; }
"then"      { return T_THEN; }
"fi"        { return T_FI; }
"do"        { return T_DO; }
"read"      { return T_READ; }
"write"     { return T_WRITE; }
"if"        { return T_IF; }
"else"      { return T_ELSE; }
"while"     { return T_WHILE; }
"return"    { return T_RETURN; }
"for"       { return T_FOR; }
"foreach"   { return T_FOREACH; }
"switch"    { return T_SWITCH; }
"case"      { return T_CASE; }
"default"   { return T_DEFAULT; }
"break"     { return T_BREAK; }
"continue"  { return T_CONTINUE; }
"this"      { return T_THIS; }
"skip"      { return T_SKIP; }

"int"       { return T_INT; }
"double"    { return T_DOUBLE; }
"char"      { return T_CHAR; }
"string"    { return T_STRING; }
"bool"      { return T_BOOL; }
"void"      { return T_VOID; }
"enum"      { return T_ENUM; }

"and"       { return T_AND; }
"or"        { return T_OR; }
"not"       { return T_NOT; }

"true"|"false"    { return T_BOOL_LITERAL; }

"\/\/".*$        {  }
\/\*([^*]|(\*+[^*/]))*\*+\/    { }

[0-9]+                               { printf("Decimalni broj: %s\n", yytext); return T_DECIMAL_LITERAL; }
0[xX][0-9a-fA-F]+                    { printf("Heksadecimalni broj: %s\n", yytext); return T_HEXADECIMAL_LITERAL; }

[0-9]+\.[0-9]*([eE][+-]?[0-9]+)?     { printf("Double: %s\n", yytext); return T_DOUBLE_LITERAL; }
[0-9]+[eE][+-]?[0-9]+ {
    fprintf(stderr, "Error: Nevalidan double format: %s\n", yytext);
    return T_ERROR;
}

\"(\\[^\n]|[^"\n\\])*\"    { printf("String: %s\n", yytext); return T_STRING_LITERAL; }
\"([^"\n\\]|\\[^\n])* {
    fprintf(stderr, "Error: Nevalidan string format na liniji %d: %s\n", yylineno, yytext);
    return T_ERROR;
}

"+"         { return T_PLUS; }
"-"         { return T_MINUS; }
"*"         { return T_ASTERISK; }
"/"         { return T_SLASH; }
"%"         { return T_PERCENT; }
"\\"        { return T_BACKSLASH; }
"<"         { return T_LESS; }
"<="        { return T_LESS_EQ; }
">"         { return T_GREATER; }
">="        { return T_GREATER_EQ; }
"="         { return T_ASSIGN; }
"=="        { return T_EQUAL; }
"!="        { return T_NOT_EQUAL; }
"&&"        { return T_AND; }
"||"        { return T_OR; }
"!"         { return T_NOT; }
";"         { return T_SEMICOLON; }
","         { return T_COMMA; }
"."         { return T_DOT; }
"("         { return T_LPAREN; }
")"         { return T_RPAREN; }

[a-zA-Z][a-zA-Z0-9_]{31,} {
    fprintf(stderr, "Identifikator je predug: %s\n", yytext);
    return T_ERROR;
}

[a-zA-Z][a-zA-Z0-9_]{1,30} {
    printf("Identifikator: %s\n", yytext);
    return T_IDENTIFIER;
}

[ \t\n]+    {  }
.           { return yytext[0]; }

%%

 