/* This program takes a symbol from user and prints a diamond
* By: Habib
*/

#include <stdio.h>

int main(void)
{
    char cSymbol;

    printf("Enter any symbol as character ie. '*', '#', '@' of choice: \n");
    scanf("%c", &cSymbol);

    printf("       %c\n", cSymbol);
    printf("    %c\t  %c\n", cSymbol, cSymbol);
    printf("  %c\t    %c\n", cSymbol, cSymbol);
    printf("%c\t      %c\n", cSymbol, cSymbol);
    printf("  %c\t    %c\n", cSymbol, cSymbol);
    printf("    %c\t  %c\n", cSymbol, cSymbol);
    printf("       %c\n", cSymbol);
}