#include "header_files.h"


void print2d(void);
void printAverageOfArr(void);

int main(void)
{
    //print2d();
    printAverageOfArr();
    return 0;
}

void print2d(void)
{
    int _2dArr[5][4];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            *(*(_2dArr + i) + j) = rand();
    }


    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
            printf("_2dArr[%d][%d] = %d\n", i, j, *(*(_2dArr + i) + j));
    }
}

void printAverageOfArr(void)
{
    int numOfEl = 1000;
    int iArr[numOfEl];
    int x;
    long long sum = 0; 
    int average;

    for (x = 0; x < numOfEl; x++)
    {
        iArr[x] = rand() % 10000;
        printf("\niArr[%d] = %d\n",x, iArr[x]);
        sum += iArr[x];
        printf("Current sum = %lld\n", sum);
    }

    average = sum / numOfEl;
    printf("Sum = %lld'\n", sum);
    printf("\nAverage of 1000 elements: %d\n", average);

    for (x = 0; x < numOfEl; x++)
    {
        if (x > 0 && x % 10 == 0)
        {
            puts("Press Enter to Continue or CTRL-C to quit");
            getchar();
        }

        printf("iArr[%d] = %d\n", x, *(iArr + x));
    }
}