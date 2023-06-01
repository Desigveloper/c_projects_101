/**
 * The Concentration Game generates random numbers based on selected level of difficulty
 * and displays them for a short period of time for the user to memorize.
 * After a few seconds have passed, the computer’s screen is cleared 
 * and the user is asked to input the numbers in the same sequence.
 * 
 * Author: Habib(Desigveloper)
 * 29/05/203
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void startGame(void);
void displayMenu(void);
void generateNumbers(void);
void generateThreeNumbers(void);
void generateFiveNumbers();
int selectDifficultyLevel(void);
void generateEasyLevel(void);
void generateIntermediateLevel(void);
void generateDifficultLevel(void);

int iResp1, iResp2, iResp3, iResp4, iResp5;
int iElaspedTime = 0;
int iCurrentTime = 0;
int iRandomNum = 0;
int i1, i2, i3, i4, i5;

int iCounter = 0, iScore = 0;

/**
* Main function of the game. Called by the program when it starts. 
* Initializes the game and returns the number of iterations to the main function.
* 
* 
* @return 0 on success non - zero on failure
*/
int main(void)
{
    startGame();
    return 0;
}

/**
* Generate three numbers for use in test. 
*/
void generateThreeNumbers(void)
{
    i1 = rand() % 100;
    i2 = rand() % 100;
    i3 = rand() % 100;
}

/**
* Generate five numbers to be used in test.
*/
void generateFiveNumbers(void)
{
    i1 = rand() % 100;
    i2 = rand() % 100;
    i3 = rand() % 100;
    i4 = rand() % 100;
    i5 = rand() % 100;
}

/**
* Start a game of concentration based on difficulty level ( 1 2 3 ). 
This is called when the user presses the start button
*/
void startGame(void)
{
    char cYesNo = '\0';

    printf("\nPlay a game of Concentration? (y or n): ");
    scanf("%c", &cYesNo);

    // Generates the level of the difficulty level.
    if (cYesNo == 'y' || cYesNo == 'Y')
    {
        int iDifficulty = selectDifficultyLevel();

        // Generates the level of difficult level.
        switch (iDifficulty)
        {
        case 1:
            generateEasyLevel();
            break;
        case 2:
            generateIntermediateLevel();
            break;
        case 3:
            generateDifficultLevel();
            break;
        case 4:
            return;
            break;
        default:
            printf("Please enter the right entry\n");
            selectDifficultyLevel();
            break;
        }
    }
    else
    {
        printf("GOOD LUCK!\n");
    }
}

/**
* Displays the menu on the screen._
*/
void displayMenu(void)
{
    printf("1 Easy\n");         //(remember 3 numbers in 5 seconds)
    printf("2 Intermediate\n"); //(remember 5 numbers in 5 seconds)
    printf("3 Difficult\n");    //(remember 5 numbers in 2 seconds)
    printf("4 Quit\n");
}


/**
* Select difficulty level from 1 - 3 or enter 4 to quit.
This is used to check if user wants to change level
* 
* 
* @return level of difficult 1 -
*/
int selectDifficultyLevel(void)
{
    int iLevel = 0;
    displayMenu();
    printf("\nSelect level of difficult 1 -3 or enter 4 to quit: ");
    scanf("%d", &iLevel);

    return iLevel;
}

/**
* Generates easy level and concentrates on three numbers
*/
void generateEasyLevel(void)
{
    do
    {
        generateThreeNumbers();

        printf("\nConcentrate on the next three numbers\n");
        printf("\n%d\t%d\t%d\n", i1, i2, i3);
        iCurrentTime = time(NULL);

        do
        {
            iElaspedTime = time(NULL);
        } while ((iElaspedTime - iCurrentTime) < 3); // end do while loop

        system("clear");

        printf("\nEnter each # separated with one space: ");
        scanf("%d%d%d", &iResp1, &iResp2, &iResp3);

        // This function is used to check if the numbers are correct.
        if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3)
        {
            printf("\nCorrect! +3\n");
            iScore += 3;
        }
        else
            printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);

        iCounter++;
    } while (iCounter != 10);

    printf("Score: %d\n", iScore);
}

/**
* Generate intermediate level for 5 numbers
*/
void generateIntermediateLevel(void)
{
    do
    {
        generateFiveNumbers();

        printf("\nConcentrate on the next three numbers\n");
        printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
        iCurrentTime = time(NULL);

        do
        {
            iElaspedTime = time(NULL);
        } while ((iElaspedTime - iCurrentTime) < 5); // end do while loop

        system("clear");

        printf("\nEnter each # separated with one space: ");
        scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);

        // This method is used to check if the numbers are equal
        if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5)
        {
            printf("\nCorrect! +3\n");
            iScore += 3;
        }
        else
            printf("\nSorry, correct numbers were %d %d %d %d %d\n", i1, i2, i3, i4, i5);

        iCounter++;
    } while (iCounter != 10);

    printf("Score: %d\n", iScore);
}

/**
* Generates difficult level and concentrate on five numbers
*/
void generateDifficultLevel(void)
{
    do
    {
        generateFiveNumbers();

        printf("\nConcentrate on the next three numbers\n");
        printf("\n%d\t%d\t%d\t%d\t%d\n", i1, i2, i3, i4, i5);
        iCurrentTime = time(NULL);

        do
        {
            iElaspedTime = time(NULL);
        } while ((iElaspedTime - iCurrentTime) < 2); // end do while loop

        system("clear");

        printf("\nEnter each # separated with one space: ");
        scanf("%d%d%d%d%d", &iResp1, &iResp2, &iResp3, &iResp4, &iResp5);

        // This method is used to check if the numbers are equal
        if (i1 == iResp1 && i2 == iResp2 && i3 == iResp3 && i4 == iResp4 && i5 == iResp5)
        {
            printf("\nCorrect! +3\n");
            iScore += 3;
        }
        else
            printf("\nSorry, correct numbers were %d %d %d %d %d\n", i1, i2, i3, i4, i5);

        iCounter++;
    } while (iCounter != 10);

    printf("Score: %d\n", iScore);
}