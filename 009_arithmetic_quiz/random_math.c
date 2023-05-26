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

//Prints the arithmetic operator list
void printMenuList()
{
    printf("1. Additions (+)\n");
    printf("2. Subtractions (-)\n");
    printf("3. Multiplications (x)\n");
    printf("4. Divisions (/)\n");
    printf("5. Modulo\n");
}

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

//Generates highest random number based on users age
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

//Generate random arithmetic questions based on the operator 
// the user selects from the list and the numbers of questions.
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