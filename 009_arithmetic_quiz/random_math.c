/**
 * Program: random_math.c
 * Purpose: The program allows the user to select the type of arithmetic operation and the number
 * number of question then the program generates random question to be solved
 * By: Habib(desigveloper)
 * Date: 25/05/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define YES 1
#define NO 0

void printMenuList();
int makeSelection(int iResponse);
void generateAdditions();
void generateSubtractions();
void generateMultiplications();
void generateDivisions();
void generateModulo();

int iRandNum_1, iRandNum_2,iAnswer, iMenuOption, iNumberOfQuestions, iChoice;
int iPoints = 0;

int main(void)
{
    
    srand(time(NULL));

    printf("\t\tTHE RANDOM ARITHMETIC MATH QUIZ GENERATOR\n");
    printf("\nEnter number of questions to ask: ");
    scanf("%d", &iNumberOfQuestions);
    

    printMenuList();
    scanf("%d", &iMenuOption);

    iChoice = makeSelection(iMenuOption);

    switch (iChoice)
    {
        case 1:
            generateAdditions();
            break;
        case 2:
            generateSubtractions();
            break;
        case 3:
            generateMultiplications();
            break;
        case 4:
            generateDivisions();
            break;
        case 5:
            generateModulo();
            break;
    }

    if (iPoints == iNumberOfQuestions)
        printf("\nCongratulations! You scored %d/%d/n", iPoints, iNumberOfQuestions);
    else
        printf("\nYou scored %d/%d\n", iPoints, iNumberOfQuestions);
    return 0;
}

void printMenuList()
{
    printf("\t\tChoose and option 1 - 5\n");
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

void generateAdditions()
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            iRandNum_1 = rand() % 10000;
            iRandNum_2 = rand() % 10000;

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

void generateSubtractions()
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            iRandNum_1 = rand() % 10000;
            iRandNum_2 = rand() % 10000;

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

void generateMultiplications()
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            iRandNum_1 = rand() % 10000;
            iRandNum_2 = rand() % 100;

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

void generateDivisions()
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            iRandNum_1 = rand() % 10000;
            iRandNum_2 = rand() % 500;

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

void generateModulo()
{
    for (int i = 0; i < iNumberOfQuestions; i++)
        {
            iRandNum_1 = rand() % 1000;
            iRandNum_2 = rand() % 500;

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