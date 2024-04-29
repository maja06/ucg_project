%{
#include <stdio.h>
#include "tokens.h" 
%}

%option yylineno

%%
"let"       { printf("Token: LET\n"); return T_LET; }
"in"        { printf("Token: IN\n"); return T_IN; }
"end"       { printf("Token: END\n"); return T_END; }
"then"      { printf("Token: THEN\n"); return T_THEN; }
"fi"        { printf("Token: FI\n"); return T_FI; }
"do"        { printf("Token: DO\n"); return T_DO; }
"read"      { printf("Token: READ\n"); return T_READ; }
"write"     { printf("Token: WRITE\n"); return T_WRITE; }
"if"        { printf("Token: IF\n"); return T_IF; }
"else"      { printf("Token: ELSE\n"); return T_ELSE; }
"while"     { printf("Token: WHILE\n"); return T_WHILE; }
"return"    { printf("Token: RETURN\n"); return T_RETURN; }
"for"       { printf("Token: FOR\n"); return T_FOR; }
"foreach"   { printf("Token: FOREACH\n"); return T_FOREACH; }
"switch"    { printf("Token: SWITCH\n"); return T_SWITCH; }
"case"      { printf("Token: CASE\n"); return T_CASE; }
"default"   { printf("Token: DEFAULT\n"); return T_DEFAULT; }
"break"     { printf("Token: BREAK\n"); return T_BREAK; }
"continue"  { printf("Token: CONTINUE\n"); return T_CONTINUE; }
"this"      { printf("Token: THIS\n"); return T_THIS; }
"skip"      { printf("Token: SKIP\n"); return T_SKIP; }

"int"       { printf("Token: INT\n"); return T_INT; }
"double"    { printf("Token: DOUBLE\n"); return T_DOUBLE; }
"char"      { printf("Token: CHAR\n"); return T_CHAR; }
"string"    { printf("Token: STRING\n"); return T_STRING; }
"bool"      { printf("Token: BOOL\n"); return T_BOOL; }
"void"      { printf("Token: VOID\n"); return T_VOID; }
"enum"      { printf("Token: ENUM\n"); return T_ENUM; }

"and"       { printf("Token: AND\n"); return T_AND; }
"or"        { printf("Token: OR\n"); return T_OR; }
"not"       { printf("Token: NOT\n"); return T_NOT; }

"true"|"false"    { return T_BOOL_LITERAL; }

"\/\/".*$        { /* Jednolinijski komentar */ }
\/\*([^*]|(\*+[^*/]))*\*+\/    { /* Višelinijski komentar */ }

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

"+"         { printf("Token: PLUS\n"); return T_PLUS; }
"-"         { printf("Token: MINUS\n"); return T_MINUS; }
"*"         { printf("Token: ASTERISK\n"); return T_ASTERISK; }
"/"         { printf("Token: SLASH\n"); return T_SLASH; }
"%"         { printf("Token: PERCENT\n"); return T_PERCENT; }
"\\"        { printf("Token: BACKSLASH\n"); return T_BACKSLASH; }
"<"         { printf("Token: LESS\n"); return T_LESS; }
"<="        { printf("Token: LESS_EQ\n"); return T_LESS_EQ; }
">"         { printf("Token: GREATER\n"); return T_GREATER; }
">="        { printf("Token: GREATER_EQ\n"); return T_GREATER_EQ; }
"="         { printf("Token: ASSIGN\n"); return T_ASSIGN; }
"=="        { printf("Token: EQUAL\n"); return T_EQUAL; }
"!="        { printf("Token: NOT_EQUAL\n"); return T_NOT_EQUAL; }
"&&"        { printf("Token: AND\n"); return T_AND; }
"||"        { printf("Token: OR\n"); return T_OR; }
"!"         { printf("Token: NOT\n"); return T_NOT; }
";"         { printf("Token: SEMICOLON\n"); return T_SEMICOLON; }
","         { printf("Token: COMMA\n"); return T_COMMA; }
"."         { printf("Token: DOT\n"); return T_DOT; }
"("         { printf("Token: LPAREN\n"); return T_LPAREN; }
")"         { printf("Token: RPAREN\n"); return T_RPAREN; }

[a-zA-Z][a-zA-Z0-9_]{31,} {
    fprintf(stderr, "Identifikator je predug: %s\n", yytext);
    return T_ERROR;
}

[a-zA-Z][a-zA-Z0-9_]{1,30} {
    printf("Identifikator: %s\n", yytext);
    return T_IDENTIFIER;
}

[ \t\n]+    { /* Ignorisati sve praznine */ }
.           { return yytext[0]; }

%%

 