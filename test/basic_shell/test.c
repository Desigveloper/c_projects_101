#include <stdio.h>

int main(void)
{       
        char name[10];
        
        printf("Enter the project name here: \n");
        scanf("%s", name);
        
        printf("The project is %s\n", name);

        return (0);
}