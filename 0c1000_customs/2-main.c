#include "main.h"

int main(void)
{
    char *str1 = "Hello";
    char *str2 = "World!";
    char *str3 = _strconcat(str1, str2);

    if (str3 == NULL)
        printf("Error! Memory not alloacated\n");
    
    printf("concated %s and %s to \"%s\"\n", str1, str2, str3);

    /* free memory allocated by malloc when done using str3 */
    free(str3);

    return 0;
}