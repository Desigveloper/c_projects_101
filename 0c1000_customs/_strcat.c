#include "main.h"

char* _strcat(char* src, char* dest)
{
    int slen = _strlen(src);
    int dlen = _strlen(dest);
    int i;
    
    /*allocate memory for concatenated string */
    char *output = 
    output = malloc((dlen + slen + 1) * sizeof(char));
    

    /* check the length of destination */
    while (*(dest + dlen) != '\0')
        dlen++;

    /* check the length of source */
    while(*(src + slen) != '\0') 
        slen++;

    /* copying src to end of dest */
    for (i = 0; i < slen; i++)
        *(dest + (dlen + i)) = *(src + i);

    /* add null terminator to end of result */
    *(dest + (dlen + slen)) = '\0';

    /* return pointer to concatenated string */
    output = dest;
    return output;
}