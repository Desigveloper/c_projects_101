#include "main.h"

int main(void)
{
    char *src = "Hello, thanks it works";
    char  *dest;
    int len = sizeof(src);
    char *copied_str;

    dest = malloc((_strlen(src) + 1) * sizeof(char));

    copied_str = _strcpy(src, dest);

    printf("You just copied the text: %s\n", copied_str);

    return 0;
}