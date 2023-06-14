/**
* Program: staff.c
* Purpose: The pogram receives details and income as input and prints report
*
* Author: Habib(desigveloper)
* 10/06/2023
*/

#include "files.h"

#define MAX 2000
#define YES 1
#define NO 0
#define NAME_LEN 50

char sFirstName[NAME_LEN], sLastName[NAME_LEN];
float fIncome[MAX];
int iMonth[MAX], iDay[MAX], iYear[MAX]; /* for birthday */
int x, y , ctr;
int iControl;
float fMonthTotal, fGrandTotal;

int main(void)
{
    iControl = displayInstruction();

    if (iControl == YES)
    {
        getData();
        displayReport();
    }

    puts("\nProgram quited by user!\n");

    return 0;
}

/*-----------------------------------------------------------------------------*
* Function: displayInstruction()
* Purpose: Displays the information on how to use the program

* Return: NO if 0 is enter and YES for any othernumber
*-----------------------------------------------------------------------------*/

int displayInstruction(void)
{
    puts("\n");
    puts("This program enables you to enter the details and income of up 2000 people");
    puts("It then prints their monthly income, overall income and overall average");

    iControl = continueFunction();
    return (iControl);
}

/*------------------------------------------------------------------------------*
* Function: getData()
* Purpose: Gets the details people as data from user. I continues to receive data 
*           until user enters o for month
* Returns: nothing
* Note:     0/0/0 can be entered as date of birth when user unsure
            and 31 days for each month
*-------------------------------------------------------------------------------*/

void getData(void)
{
    int personIndex = 0;


    for (iControl = YES, ctr = 0; ctr < MAX && iControl == YES; ctr++)
    {
        personIndex = ctr + 1;

        printf("\nEnter information for person %d", personIndex);
        printf("\nEnter firstname: ");
        scanf("%s", sFirstName);

        printf("\nEnter lastname: ");
        scanf("%s", sLastName);
    
        puts("Enter date of birth: ");

        do
        {
            printf("\tMonth (1 - 12): ");
            scanf("%d", &(*(iMonth + ctr)));
        } while(*(iMonth + ctr) < 1 || *(iMonth + ctr) > 12);

        do 
        {
            printf("\n\tDay (1 - 31): ");
            scanf("%d", &(*(iDay + ctr)));
        } while (*(iDay + ctr) < 1 || *(iDay + ctr) > 31);

        do
        {
            printf("\n\tYear (1961 - 2005): ");
            scanf("%d", &(*(iYear + ctr)));
        } while(*(iYear + ctr) < 1960 || *(iYear + ctr) > 2005);

        printf("Enter Income including decimals: ");
        scanf("%f", &(*(fIncome + ctr)));

        iControl = continueFunction();
    }
}


/*----------------------------------------------------------------------------*
* Function: displayReport()
* Purpose: Displays a report on the screen
*
* Returns: nothing
* Note: Could print more information
*-----------------------------------------------------------------------------*/

void displayReport(void)
{
    fGrandTotal = 0;
    puts("\n\n");
    puts("\t\tSALARY SUMMARY");
    puts("\t\t==============");

    for (x = 1; x <= 12; x++)
    {
        for (y = 0; y < ctr; y++)
        {
            if (*(iMonth + y) == x)
                fMonthTotal += *(fIncome + y);
        }

        printf("\nTotal for month %d is %.2f", x, fMonthTotal);
        fGrandTotal += fMonthTotal;
    }
    puts("\nReport totals: ");
    printf("\nName: %s %s", sFirstName, sLastName);
    printf("\nTotal Income is %.2f", fGrandTotal);
    printf("\nAverage Income is %.2f", (fGrandTotal / ctr));

    puts("\n* * * End of Report * * *\n");
}

/*----------------------------------------------------------------------------*
* Function: continueFunction()
* Purpose: Asks the user if they wish to continue
* Returns: YES if they wish to continue, otherwise, NO to quit
*-----------------------------------------------------------------------------*/

int continueFunction(void)
{
    printf("\n\ndo you want to continue? (0=NO / 1=YES): ");
    scanf("%d", &x);

    while (x < 0 || x > 1)
    {
        printf("\n%d is invalid!", x);
        printf("\nPlease enter 0 to Quit or 1 to Continue: ");
        scanf("%d", &x);
    }

    if(x == 0)
        return (NO);

    return (YES);
}

