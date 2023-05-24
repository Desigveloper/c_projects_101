/**
 * Program: guess_it.c
 * Purpose: The program is a simple guessing game that generates a random number 
 *   and let the user guess it.
 * 
 * By: Habib(desigveloper)
 * Date: 24/05/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define NO 0
#define YES 1

int main(void)
{
    unsigned int iRandomNum = 0, iUserGuess = -1, iNUmberOfGuesses = 0, iAttempts = 10, bExit = NO;

    printf("\nGenerating a random number.....\n");
    srand((unsigned) time(NULL));
    iRandomNum = rand() % 100;

        while (bExit == NO)
        { 
            printf("Enter any number between 0 and %d: ", RAND_MAX);
            scanf("%d", &iUserGuess);

            iNUmberOfGuesses++;
            iAttempts--;

            if (iAttempts != 0)
            { 
                if (iUserGuess > iRandomNum)
                {
                    printf("\nSorry, %d is high guess!\n", iUserGuess);
                }
                else if (iUserGuess < iRandomNum)
                {
                    printf("\nSorry, your guess(%d) is low!\n", iUserGuess);
                }
                else
                {
                    if (iNUmberOfGuesses == 1)
                    {
                        printf("\nCongratulation! You guessed right in %d attempt.\n", iNUmberOfGuesses);
                    }
                    else
                    {
                        printf("\nCongratulation! You guessed right in %d attempts.\n", iNUmberOfGuesses);
                    }
                    printf("The number was %d\n", iRandomNum);
                    bExit = YES;
                }
            }
            else
            {
                printf("Sorry, you have exhausted all your attempts!\n");
                bExit = YES;
            }
        }

        return 0;
}