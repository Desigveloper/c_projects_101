/**
* _strcpy - afunctionthatcopiesonearrayofcharactersintoanother
* @src: param, copied string
* @dest: param, destination of copied string
* Return: nothing
*/
#include "main.h"

char *_strcpy(char *src, char *dest)
{
    unsigned int i, j;

    for (i = 0; *(src + i) != '\0'; i++)
        *(dest + i) = *(src + i);

    for (j = 0; *(dest + j) != '\0'; j++)
        ;
    
        return dest;
    
}