/**
* Program: pause.c
* Purpose: A program that pauses
*/

#include "p_header.h"

int main(void)
{
    int ctr;
    int wait = 60;

    /* Pauses for a number of seconds. Print a dot for each second waited*/
    printf("Delay for %d seconds\n", wait);
    printf(">");

    for (ctr = 1; ctr < wait; ctr++)
    {
        printf(".");
        fflush(stdout); /* force dot to print on a buffer machine */
        pause((int) 1);
    }

    printf("\nDone!\n");
    return (0);
}

/* Pauses for a specified seconds */

void pause(int num_secs)
{
    clock_t goal;
    char *s_timer = "...";

    goal = (num_secs * CLOCKS_PER_SEC) + clock();

    while (goal > clock())
    {
        printf("%s\n", s_timer);
    }
}