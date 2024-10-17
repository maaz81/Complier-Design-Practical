%{
/* Code to check balanced parentheses using Lex */
#include <stdio.h>
int flag = 0; // To count the balance of parentheses
%}

%%

"("     { flag++; }  /* Increment flag on open parenthesis */
")"     { flag--; }  /* Decrement flag on close parenthesis */
\n      { 
            if(flag == 0) 
                printf("The expression has balanced parentheses.\n"); 
            else 
                printf("The expression has unbalanced parentheses.\n"); 
            flag = 0;  // Reset flag for the next line
        }

.       ;  /* Ignore other characters */

%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}
