/**
* _strconcat - A function that accepts two strings and concatenate them.
*                Uses the malloc() function to allocate enough memory to hold the two strings
*               after they have been concatenated (linked).
*
* @str1: param, str 1
* @str2: param, str 2
* Return:  a pointer to this new string.
*/

#include "main.h"

char *_strconcat(char *str1, char *str2)
{
    int len1 = _strlen(str1);
    int len2 = _strlen(str2);
    char *output;

    /* Allocates memory for the concatenated string */
    output = malloc((len1 + len2 + 1) * sizeof(char));

    /* Copy the first string to the new string */
    _strcpy(str1, output); 

    /* Add a space between the two strings */
    _strcat(" ", output); 

    /* Copy the second string to the new string */
    _strcat(output, str2); 
    /* Return the pointer to the new string */
    return output; 
    
}

