#include "main.h"

int main(void)
{
    char *str1 = "Hello";
    char *str2 = " ";
    char *str3 = _strcat(str1, str2);

    
    printf("concated %s and %s to \"%s\"\n", str1, str2, str3);

    /* free memory allocated by malloc when done using str3 */
    free(str3);

    return 0;
}