#include "_main.h"

int main(void)
{
    int x = 2;
    pid_t pid;

    printf("Before forking x = %d\n", x);

    pid = fork();
    
    x++;
    printf("After forking x = %d\n", x);

    if (pid == -1)
    {
        printf("Unsuccessful\n");
        return 1;
    }

    return 0;

}