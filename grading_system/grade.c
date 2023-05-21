/**
 * Program: grade.c
 * Usage: Takes an input from user as a student mark and finds the grade of the student.
 * By: Habib(Desigveloper)
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printGrade(int, char sName[256]);

int main(void)
{
    int iExamScore = 0;
    char sFullName[256];

    printf("Enter student fullname ie. 'Yaw Mensah': ");
    //scanf(“%[^\n]s”, sen) means to read a string including spaces until the next line is received
    //or to read string until line break
    scanf("%[^\n]s", sFullName);

    printf("Enter student score 1 to 100: ");
    scanf("%d", &iExamScore);

    printGrade(iExamScore, sFullName);

    return 0;
}

void printGrade(int iMark, char sName[256])
{
    if( iMark <= 100 && iMark >= 90)
        {
            printf("Name: %s\nGrade: A+\nGrade Point: 4.5\nInterpretation: Distinction\n", sName);
        }
        else if (iMark <= 89 && iMark >= 80)
            {
                printf("Name: %s\nGrade: A\nGrade Point: 4.0\nInterpretation: Outstanding\n", sName);
            }
        else if (iMark <= 79 && iMark >= 75)
            {
                printf("Name: %s\nGrade: B+\nGrade Point: 3.5\nInterpretation: Very Good\n", sName);
            }
        else if (iMark <= 74 && iMark >= 70)
            {
                printf("Name: %s\nGrade: B\nGrade Point: 3.0\nInterpretation: Good", sName);
            }
        else if (iMark <= 69 && iMark >= 65)
            {
                printf("Name: %s\nGrade: C+\nGrade Point: 2.5\nInterpretation: Fairly Good\n", sName);
            }
        else if (iMark <= 64 && iMark >= 60)
            {
                printf("Name: %s\nGrade: C\nGrade Point: 2.0\nInterpretation: Average\n", sName);
            }
        else if (iMark <= 59 && iMark >= 55)
            {
                printf("Name: %s\nGrade: D+\nGrade Point: 1.5\nInterpretation: Below Average\n", sName);
            }
        else if (iMark <= 54 && iMark >= 50)
            {
                printf("Name: %s\nGrade: D\nGrade Point: 1.0\nInterpretation: Marginal\n", sName);
            }
        else if (iMark <= 49 && iMark >= 45)
            {
                printf("Name: %s\nGrade: E\nGrade Point: 0.5.0\nInterpretation: Unsatisfactory\n", sName);
            }
        else
            {
                printf("Name: %s\nGrade: F\nGrade Point: 0.0\nInterpretation: Fail\n", sName);
            }
}