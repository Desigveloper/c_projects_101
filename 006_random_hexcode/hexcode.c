/**
 * Program: hexcode.c
 * Purpose: The program generates a random 6 color hex codes
 * By: Habib(Desigveloper)
 * Date: 20/05/2023
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void generateCode();

int main()
{
    printf("\nRandom color code is: #");
    generateCode();
    return 0;
}

void generateCode()
{
    int iRandomNum = 0;
    srand((unsigned) time(NULL));

    
    char cHexCode[6] = {};
    int i = 0;

    for(;i < 6; i++)
    {
        iRandomNum = (rand() % 15);
        switch (iRandomNum)
        {
            case 0:
                iRandomNum = (char) '0';
            break;
            case 1:
                iRandomNum = (char) '1';
            break;
            case 2:
                iRandomNum = (char) '2';
            break;
            case 3:
                iRandomNum = (char) '3';
            break;
            case 4:
                iRandomNum = (char) '4';
            break;
            case 5:
                iRandomNum = (char) '5';
            break;
            case 6:
                iRandomNum = (char) '6';
            break;
            case 7:
                iRandomNum = (char) '7';
            break;
            case 8:
                iRandomNum = (char) '8';
            break;
            case 9:
                iRandomNum = (char) '9';
            break;
            case 10:
                iRandomNum = (char) 'A';
            break;
            case 11:
                iRandomNum = (char) 'B';
            break;
            case 12:
                iRandomNum = (char) 'C';
            break;
            case 13:
                iRandomNum = (char) 'D';
            break;
            case 14:
                iRandomNum = (char) 'E';
            break;
            default:
                iRandomNum = (char) 'F';
            break;
        } // end switch

        *(cHexCode + i) =  iRandomNum;
        printf("%c", *(cHexCode + i));
    }
}