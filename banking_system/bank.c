/* Program: A banking system
/  By: Habib(Desigveloper)
*/

#include <stdio.h>
#include <ctype.h>

void printOptions();
void chooseOption();

int iMenuSelection = 0;
float fDepositAmount = 0;
float fWithdrawal = 0;
float fTransfer = 0;
double dAccountBalance = 50.00;

int main(void)
{
    printf("\nWELCOME AND THANKS FOR USING OUR\n");
    printf("\n\t.....BANK SYSTEM(ATM)......\n\n");
    printOptions();
    chooseOption();

    while (iMenuSelection <= 0 || iMenuSelection > 5)
    {
        printf("Please enter the correct option\n");
        printOptions();
        chooseOption();
        scanf("%d", &iMenuSelection);
    }

    if (iMenuSelection == 1)
    {  
        printf("Enter deposit amount: ");
        scanf("%f", &fDepositAmount);

        printf("An amount of GHc%.2f has been credited to your account\n", fDepositAmount);
        printf("Your curent balance is GHc%.2f", dAccountBalance + fDepositAmount);
    } // end deposit if
    else if(iMenuSelection == 2)
    {
        printf("Enter the withdrawal amount: ");
        scanf("%f", &fWithdrawal);

        if (dAccountBalance < fWithdrawal)
        {
            printf("Sorry, you don't have insufficient funds to perform this transaction\n");
        }
        else
        {

            printf("An amount of GHc%.2f has been debited from your account\n", fWithdrawal);
            printf("Your curent balance is GHc%.2f\n", dAccountBalance - fWithdrawal);
        }
    } // end withdrawal if
    else if (iMenuSelection == 3)
    {
        printf("Your curent balance is GHc%.2f\n", dAccountBalance);
    } // end balance check if
    else if (iMenuSelection == 4)
    {
        printf("Enter the transfer amount: ");
        scanf("%f", &fTransfer);

        printf("An amount of GHc%.2f has been debited from your account\n", fTransfer);
        printf("Your curent balance is GHc%.2f", dAccountBalance - fTransfer);
    } // end transfer if
    else
    {
        printf("THANK YOU FOR TRANSACTING WITH US.\n");
    } // end if
    
    return 0;
} // end main function

void printOptions()
{
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Check balance\n");
    printf("4. Transfers\n");
    printf("5. Quit\n");
} // end printOption function

void chooseOption()
{
    printf("Enter you selection: ");
    scanf("%d", &iMenuSelection);
} // end chooseOption func