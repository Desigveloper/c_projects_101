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

    /**
     * Prompts the user to enter a valid menu option.
     *
     * @param iMenuSelection The user's selected menu option.
     *
     * @returns None
     */
    while (iMenuSelection != 5 && (iMenuSelection <= 0 || iMenuSelection > 5))
    {
        printf("Please enter the correct option\n");
        printOptions();
        chooseOption();
        scanf("%d", &iMenuSelection);
    }

    /**
     * Performs banking transactions based on user input.
     *
     * @param iMenuSelection The user's menu selection.
     * @param dAccountBalance The current balance of the user's account.
     *
     * @returns 0 upon completion of the transaction.
     */
    switch  (iMenuSelection) {  
        case 1: printf("Enter deposit amount: ");
                scanf("%f", &fDepositAmount);

                printf("An amount of GHc%.2f has been credited to your account\n", fDepositAmount);
                printf("Your curent balance is GHc%.2f", dAccountBalance + fDepositAmount);
        break;

        case 2: printf("Enter the withdrawal amount: ");
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
        break;

        case 3:
            printf("Your curent balance is GHc%.2f\n", dAccountBalance);
        break;

        case 4:
            printf("Enter the transfer amount: ");
            scanf("%f", &fTransfer);
            printf("An amount of GHc%.2f has been debited from your account\n", fTransfer);
            printf("Your curent balance is GHc%.2f", dAccountBalance - fTransfer);
        break;
        
        case 5:
            printf("THANK YOU FOR TRANSACTING WITH US.\n");
        break;
    } // end switch

    return 0;
} // end main function

/**
 * Prints the available options for a banking application.
 *
 * @returns None
 */
void printOptions()
{
    printf("1. Deposit\n");
    printf("2. Withdrawal\n");
    printf("3. Check balance\n");
    printf("4. Transfers\n");
    printf("5. Quit\n");
} // end printOption function

/**
 * Prompts the user to enter a selection and reads the input from the console.
 *
 * @param None
 *
 * @returns None
 */
void chooseOption()
{
    printf("Enter you selection: ");
    scanf("%d", &iMenuSelection);
} // end chooseOption func