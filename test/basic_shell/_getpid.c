#include "_main.h"

int main(void)
{
    int a = 12;
    int b = 5;
    int c = a * b;
    pid_t pid, ppid;

    pid = getpid();
    ppid = getppid();

    printf("The product of a * b = %d\n", c);
    printf("The process ID (PID) is: %u\n", pid);
    printf("The parent PID of the calling process is: %u\n", ppid);
    return 0;

}