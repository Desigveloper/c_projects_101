#include <stdio.h>

int main(void)
{
    char *str = "Accra-Ghana";
    unsigned char mychar;

    for (int i = 0; *(str + i) != 0; i++)
    {
        mychar = *(str + i);
    
        printf("Element %d is %c\n",i, mychar);
    }
    return 0;
}