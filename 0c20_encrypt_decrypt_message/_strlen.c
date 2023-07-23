#include "encrypt.h"

size_t _strlen(const char *str)
{
    unsigned int ctr = 0;

    if (*str == 0)
        return 0;
    
    while (*(str + ctr) != '\0')
        ctr++;

    return (ctr);
}