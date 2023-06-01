/**
 * Program: random_math.c
 * Purpose: The program allows the user to select the type of arithmetic
 * operation and the number question then the program generates random
 * questions based on the age of the user to be solved
 * 
 * By: Habib(desigveloper)
 * Date: 25/05/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Custom function Prototypes
void printMenuList();
int makeSelection(int iResponse);
void generateRandomNumbers();
void generateQuestions(void);
void generateAdditions(int iUserAge);
void generateSubtractions(int iUserAge);
void generateMultiplications(int iUserAge);
void generateDivisions(int iUserAge);
void generateModulo(int iUserAge);

//Global variables
int iRandNum_1, iRandNum_2,iAnswer, iMenuOption;
int iNumberOfQuestions, iChoice, iUserAge;
int iPoints = 0;

int main(void)
{
    
    srand(time(NULL));

    printf("\t\tTHE RANDOM ARITHMETIC MATH QUIZ GENERATOR\n");
    printf("\n\nARITHMETIC OPTIONS\n\n");
    printMenuList();

    printf("\n\nChoose and option 1 - 5\n");

    generateQuestions();

    if (iPoints == iNumberOfQuestions)
        printf("\nCongratulations! You scored %d/%d\n", iPoints, iNumberOfQuestions);
    else
        printf("\nYou scored %d/%d\n", iPoints, iNumberOfQuestions);
    return 0;
}


/**
 * Prints a list of mathematical operations to the console.
 *
 * @param None
 *
 * @returns None
 */
void printMenuList()
{
    printf("1. Additions (+)\n");
    printf("2. Subtractions (-)\n");
    printf("3. Multiplications (x)\n");
    printf("4. Divisions (/)\n");
    printf("5. Modulo\n");
}

/**
 * Maps the user's response to a corresponding choice.
 *
 * @param iResponse The user's response.
 *
 * @returns The corresponding choice.
 */
int makeSelection(int iResponse)
{
    int iChoice;

    switch (iResponse)
    {
    case 1:
        iChoice = 1;
        break;
    case 2:
        iChoice = 2;
        break;
    case 3:
        iChoice = 3;
        break;
    case 4:
        iChoice = 4;
        break;
    case 5:
        iChoice = 5;
        break;
    default:
        break;
    }
    return iChoice;
}


/**
 * Generates two random numbers based on the user's age.
 *
 * If the user's age is less than 12, two random numbers between 0 and 99 are generated.
 * If the user's age is between 12 and 17, two random numbers between 0 and 499 are generated.
 * If the user's age is between 17 and 24, two random numbers between 0 and 999 are generated.
 * If the user's age is greater than 24, two random numbers between 0 and 9999 are generated.
 *
 * @returns None
 */
void generateRandomNumbers(void)
{

    if (iUserAge < 12)
    {
        iRandNum_1 = rand() % 100;
        iRandNum_2 = rand() % 100;
    }
    else if (iUserAge < 17)
    {
        iRandNum_1 = rand() % 500;
        iRandNum_2 = rand() % 500;
    }
    else if (iUserAge < 24)
    {
        iRandNum_1 = rand() % 1000;
        iRandNum_2 = rand() % 1000;
    }
    else
    {
        iRandNum_1 = rand() % 10000;
        iRandNum_2 = rand() % 10000;
    }
}


/**
 * Generates a set of arithmetic questions based on user input.
 *
 * @param None
 *
 * @returns None
 */
void generateQuestions()
{
    scanf("%d", &iMenuOption);

    iChoice = makeSelection(iMenuOption);

    printf("\nEnter number of questions to ask: ");
    scanf("%d", &iNumberOfQuestions);

    //Get user age
    printf("\nWhat's your age? ");
    scanf("%d", &iUserAge);

    switch (iChoice)
    {
        case 1:
            generateAdditions(iUserAge);
            break;
        case 2:
            generateSubtractions(iUserAge);
            break;
        case 3:
            generateMultiplications(iUserAge);
            break;
        case 4:
            generateDivisions(iUserAge);
            break;
        case 5:
            generateModulo(iUserAge);
            break;
    }
}

/**
 * Generates a series of addition questions for the user to answer.
 *
 * @param iUserAge The age of the user.
 *
 * @returns None
 */
void generateAdditions(int iUserAge)
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            generateRandomNumbers();

            printf("\nWhat is %d + %d: ", iRandNum_1, iRandNum_2);
            scanf("%d", &iAnswer);

            if (iAnswer == (iRandNum_1 + iRandNum_2))
            {
                printf("Correct!\n");
                iPoints++;
            }
            else
            {
                printf("\nWrong! ");
                printf("The correct answer is %d \n", iRandNum_1 - iRandNum_2);
            }
        }
}

/**
 * Generates a set of subtraction problems for the user to solve.
 *
 * @param iUserAge The age of the user.
 *
 * @returns None
 */
void generateSubtractions(int iUserAge)
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            generateRandomNumbers();

            printf("\nWhat is %d - %d: ", iRandNum_1, iRandNum_2);
            scanf("%d", &iAnswer);

            if (iAnswer == (iRandNum_1 - iRandNum_2))
            {
                printf("Correct!\n");
                iPoints++;
            }
            else
            {
                printf("\nWrong! ");
                printf("The correct answer is %d \n", iRandNum_1 - iRandNum_2);
            }
        }
}

/**
 * Generates multiplication questions for the user to answer and keeps track of their score.
 *
 * @param iUserAge The age of the user.
 *
 * @returns None
 */
void generateMultiplications(int iUserAge)
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            generateRandomNumbers();

            printf("\nWhat is %d * %d: ", iRandNum_1, iRandNum_2);
            scanf("%d", &iAnswer);

            if (iAnswer == (iRandNum_1 * iRandNum_2))
            {
                printf("Correct!\n");
                iPoints++;
            }
            else
            {
                printf("\nWrong! ");
                printf("The correct answer is %d \n", iRandNum_1 * iRandNum_2);
            }
        }
}

/**
 * Generates a division quiz for the user with iNumberOfQuestions number of questions.
 * The function generates two random numbers and asks the user to divide them.
 * The user's answer is compared with the correct answer and points are awarded accordingly.
 *
 * @param iUserAge The age of the user.
 *
 * @returns None
 */
void generateDivisions(int iUserAge)
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            generateRandomNumbers();

            printf("\nWhat is %d/%d: ", iRandNum_1, iRandNum_2);
            scanf("%d", &iAnswer);

            if (iAnswer == (iRandNum_1 / iRandNum_2))
            {
                printf("Correct!\n");
                iPoints++;
            }
            else
            {
                printf("\nWrong! ");
                printf("The correct answer is %d \n", iRandNum_1 / iRandNum_2);
            }
        }
}

/**
 * Generates a series of modulo questions for the user to answer.
 *
 * @param iUserAge The age of the user.
 *
 * @returns None
 */
void generateModulo(int iUserAge)
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            generateRandomNumbers();

            printf("\nWhat is %d modulo %d: ", iRandNum_1, iRandNum_2);
            scanf("%d", &iAnswer);

            if (iAnswer == (iRandNum_1 % iRandNum_2))
            {
                printf("Correct!\n");
                iPoints++;
            }
            else
            {
                printf("\nWrong! ");
                printf("The correct answer is %d \n", iRandNum_1 % iRandNum_2);
            }
        }
}