#include "main.h"

int main(void)
{
    int len;
    char *text;
    

    text = malloc(100 * sizeof(char));

    puts("Enter a string of character to be counter, the press Enter: ");
    gets(text);

    len = _strlen(text);

    printf("The string (\"%s\") has %d characters.\n", text, len);

    return 0;
}