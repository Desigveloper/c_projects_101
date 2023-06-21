#include "main.h"

int main(void)
{
    int len;
    char *text;

    scanf("%s", text);

    len = _strlen(text);

    printf("%d\n", len);
    return 0;
}