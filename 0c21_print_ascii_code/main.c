#include "main.h"
/**
* functions to print out the characters and ASCII codes
* for any that are "alpha" or "blanks"
*/

int main(int argc, char* argv[])
{
    print_arguments(argc, argv);
    return (0);
}

void print_arguments(int argc, char* argv[])
{
    int i;

    for (i = 0; i < argc; i++)
        print_letters(argv[i]);
}

void print_letters(char arg[])
{
    int i;
    char ch;

    for (i = 0; arg[i] != '\0'; i++)
    {
        ch = arg[i];

        if(can_print(ch))
            printf("'%c' = %d ", ch, ch);
    }
    printf("\n");
}

int can_print(char ch)
{
    return isalpha(ch) || isblank(ch);
}