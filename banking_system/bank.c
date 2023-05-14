/* Program: A banking system
/  By: Habib(Desigveloper)
*/

#include <stdio.h>
#include <ctype.h>

void printWelcomeMsg();
void choseOption();

int iMenuSelection = 0;
char cExitResponse;
float fDepositAmount = 0;
float fWithdrawal = 0;
float fTransfer = 0;
double dAccountBalance = 50.00;

int main(void)
{
    printWelcomeMsg();
    choseOption();

    while (iMenuSelection <= 0 || iMenuSelection > 5)
    {
        printf("Please enter the correct option\n");
        scanf("%d", &iMenuSelection);
    }

    if (iMenuSelection == 1)
    {  
        printf("Enter deposit amount: ");
        scanf("%f", &fDepositAmount);

        printf("An amount of GHc%.2f has been credited to your account\n", fDepositAmount);
        printf("Your curent balance is GHc%.2f", dAccountBalance + fDepositAmount);
    }
    else if(iMenuSelection == 2)
    {
        printf("Enter the withdrawal amount: ");
        scanf("%f", &fWithdrawal);

        if (dAccountBalance < fWithdrawal)
        {
            printf("Sorry, you don't have enough balance to perform this transaction\n");
        }
        else
        {

            printf("An amount of GHc%.2f has been debited from your account\n", fWithdrawal);
            printf("Your curent balance is GHc%.2g\n", dAccountBalance - fWithdrawal);
        }
    }
    else if (iMenuSelection == 3)
    {
        printf("Your curent balance is GHc%.2g\n", dAccountBalance);
    }
    else if (iMenuSelection == 4)
    {
        printf("Enter the transfer amount: ");
        scanf("%f", &fTransfer);

        printf("An amount of GHc%.2f has been debited from your account\n", fTransfer);
        printf("Your curent balance is GHc%.2g", dAccountBalance - fTransfer);
    }
    else
    {
        printf("Do you want to quit? Enter y/n: \n");
        scanf("%c", &cExitResponse);
        if (toupper(cExitResponse == 'Y'))
        {
            printf("THANK YOU FOR TRANSACTING WITH US.\n");
        }
        
        

        printWelcomeMsg();
        choseOption();
    }
    
    return 0;
}

void printWelcomeMsg()
{
    printf("\nWELCOME AND THANKS FOR USING OUR\n");
    printf("\n\t.....BANK SYSTEM(ATM)......\n\n");
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Check balance\n");
    printf("4. Transfers\n");
    printf("5. Quit\n");
}

void choseOption()
{
    printf("Enter you selection: ");
    scanf("%d", &iMenuSelection);
}