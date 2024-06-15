#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "pmf0.tab.h"  
extern int yylex();
extern int yyparse();

void yyerror(const char* msg) {
    fprintf(stderr, "The error is at position (%d, %d), please check. -> %s\n", yylloc.first_line, yylloc.first_column, msg);
}

int main() {
    if (yyparse() == 0) {
        printf("The program has successfully completed its work!\n");
    } else {
        printf("The program failed!\n");
    }

    return 0;
}
