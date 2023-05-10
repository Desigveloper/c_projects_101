/* This program takes a symbol from user and prints a diamond
* By: Habib
*/

#include <stdio.h>

int main(void)
{
    char symbol;

    printf("Enter any symbol 04 character ie. '*', '#', '@' of choice: \n");
    scanf("%c", &symbol);

    printf("       %c\n", symbol);
    printf("    %c\t  %c\n", symbol, symbol);
    printf("  %c\t    %c\n", symbol, symbol);
    printf("%c\t      %c\n", symbol, symbol);
    printf("  %c\t    %c\n", symbol, symbol);
    printf("    %c\t  %c\n", symbol, symbol);
    printf("       %c\n", symbol);
}