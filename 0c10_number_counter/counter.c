/**
 * Program: counter.c
 * Purpose: Prompts the user for three inputs (shown next) that determine how and what to count.
 * Store the user’s answers in variables and display the numbers and sum of all numbers to the user.
 * Author: Habib(desigveloper)
 * Date: 28/05/2023
 */

#include <stdio.h>

void countNumbers(int iStart, int iEnd, int iUpdator);

int main(void)
{
    int iStart, iEnd;
    long lSum = 0;
    int iUpdate;

    printf("Enter the beginning number: ");
    scanf("%d", &iStart);

    printf("Enter the ending number: ");
    scanf("%d", &iEnd);

    printf("Enter the increment value for sequence: ");
    scanf("%d", &iUpdate);

    countNumbers(iStart, iEnd, iUpdate);

    return 0;
}



/**
 * Prints a sequence of numbers and calculates their sum.
 *
 * @param iStart The starting number of the sequence.
 * @param iEnd The ending number of the sequence.
 * @param iUpdator The increment or decrement value for the sequence.
 *
 * @returns None
 */
void countNumbers(int iStart, int iEnd, int iUpdator)
{
    int i = iStart;
    long iSum = 0;

    if (iEnd < iStart)
    {
        for (; i >= iEnd; i -= iUpdator)
        {
            printf("%d\n", i);
            iSum += i;
        }
    }
    else
    {
        for (; i <= iEnd; i += iUpdator)
        {
            printf("%d\n", i);
            iSum += i;
        }
    }
    printf("The total sum of numbers is: %ld", iSum);
}