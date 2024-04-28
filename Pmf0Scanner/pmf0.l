%{
#include <stdio.h>
#include "tokens.h" 
%}

%option yylineno

%%

"IF"        { printf("Token: IF\n"); return T_IF; }
"ELSE"      { printf("Token: ELSE\n"); return T_ELSE; }
"WHILE"     { printf("Token: WHILE\n"); return T_WHILE; }
"RETURN"    { printf("Token: RETURN\n"); return T_RETURN; }
"FOR"       { printf("Token: FOR\n"); return T_FOR; }
"FOREACH"   { printf("Token: FOREACH\n"); return T_FOREACH; }
"SWITCH"    { printf("Token: SWITCH\n"); return T_SWITCH; }
"CASE"      { printf("Token: CASE\n"); return T_CASE; }
"DEFAULT"   { printf("Token: DEFAULT\n"); return T_DEFAULT; }
"BREAK"     { printf("Token: BREAK\n"); return T_BREAK; }
"CONTINUE"  { printf("Token: CONTINUE\n"); return T_CONTINUE; }
"THIS"      { printf("Token: THIS\n"); return T_THIS; }

"INT"       { printf("Token: INT\n"); return T_INT; }
"DOUBLE"    { printf("Token: DOUBLE\n"); return T_DOUBLE; }
"CHAR"      { printf("Token: CHAR\n"); return T_CHAR; }
"STRING"    { printf("Token: STRING\n"); return T_STRING; }
"BOOL"      { printf("Token: BOOL\n"); return T_BOOL; }
"VOID"      { printf("Token: VOID\n"); return T_VOID; }
"ENUM"      { printf("Token: ENUM\n"); return T_ENUM; }

"AND"       { printf("Token: AND\n"); return T_AND; }
"OR"        { printf("Token: OR\n"); return T_OR; }
"NOT"       { printf("Token: NOT\n"); return T_NOT; }

"true"      { printf("Token: true\n"); return TRUE; }
"false"     { printf("Token: false\n"); return FALSE; }

"\/\/".*$        { /* Jednolinijski komentar */ }
\/\*([^*]|(\*+[^*/]))*\*+\/    { /* Višelinijski komentar */ }

[a-zA-Z][a-zA-Z0-9_]{0,30} {
    if (strlen(yytext) > 31) {
        fprintf(stderr, "Identifajer je predug: %s\n", yytext);
        return ERROR;
    }

    printf("Identifajer: %s\n", yytext); return IDENTIFIER;
}

[0-9]+                               { printf("Decimalni broj: %s\n", yytext); return DECIMAL; }
0[xX][0-9a-fA-F]+                    { printf("Heksadecimalni broj: %s\n", yytext); return HEXADECIMAL; }

[0-9]+\.[0-9]*([eE][+-]?[0-9]+)?     { printf("Double: %s\n", yytext); return DOUBLE; }
[0-9]+[eE][+-]?[0-9]+ {
    fprintf(stderr, "Error: Nevalidan double format: %s\n", yytext);
    return ERROR;
}

\"(\\[^\n]|[^"\n\\])*\"    { printf("String: %s\n", yytext); return STRING; }
\"([^"\n\\]|\\[^\n])* {
    fprintf(stderr, "Error: Nevalidan string format na liniji %d: %s\n", yylineno, yytext);
    return ERROR;
}

"+"         { printf("Token: PLUS\n"); return PLUS; }
"-"         { printf("Token: MINUS\n"); return MINUS; }
"*"         { printf("Token: ASTERISK\n"); return ASTERISK; }
"/"         { printf("Token: SLASH\n"); return SLASH; }
"%"         { printf("Token: PERCENT\n"); return PERCENT; }
"\\"        { printf("Token: BACKSLASH\n"); return BACKSLASH; }
"<"         { printf("Token: LESS\n"); return LESS; }
"<="        { printf("Token: LESS_EQ\n"); return LESS_EQ; }
">"         { printf("Token: GREATER\n"); return GREATER; }
">="        { printf("Token: GREATER_EQ\n"); return GREATER_EQ; }
"="         { printf("Token: ASSIGN\n"); return ASSIGN; }
"=="        { printf("Token: EQUAL\n"); return EQUAL; }
"!="        { printf("Token: NOT_EQUAL\n"); return NOT_EQUAL; }
"&&"        { printf("Token: T_AND\n"); return T_AND; }
"||"        { printf("Token: T_OR\n"); return T_OR; }
"!"         { printf("Token: T_NOT\n"); return T_NOT; }
";"         { printf("Token: SEMICOLON\n"); return SEMICOLON; }
","         { printf("Token: COMMA\n"); return COMMA; }
"."         { printf("Token: DOT\n"); return DOT; }
"("         { printf("Token: LPAREN\n"); return LPAREN; }
")"         { printf("Token: RPAREN\n"); return RPAREN; }


[ \t\n]+    { /* Ignorisati sve praznine */ }
.           { return yytext[0]; }

%%

 