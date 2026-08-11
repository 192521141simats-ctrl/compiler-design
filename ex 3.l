%{
#include <stdio.h>
%}

%%

[a-zA-Z0-9._]+@[a-zA-Z]+\.com    { printf("Valid Email ID\n"); }
.*                               { printf("Invalid Email ID\n"); }

%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter Email ID: ");
    yylex();
    return 0;
}