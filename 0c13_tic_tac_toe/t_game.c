/**
* Program: tic-tac-toe
* Purpose: A single player tic-tac-toe game that allows the user to play against the computer.
* Author: Habib(desigveloper)
* Date: 04/06/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printLine();
void displayBoard();
void fillBoard();
int verifySelection(int, int, int);
void checkForWin();

char cBoard[3][3];
char cWinner = ' ';
int iCurrentPlayer = 0;
int iCurrentTime, iElaspedTime;


/**
* Main function of the program. Sets up the board and calls displayBoard () to display the board.
* 
* 
* @return The program returns 0 on success non - zero otherwise. 
* In case of an error the program returns a non - zero
*/
int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            cBoard[i][j] = ' ';

    displayBoard();
    fillBoard();
    return 0;
}


void printLine()
{
    printf("------|-----|------\n");
}

/**
* Displays the board on the screen. This is called by main () and should not be called externally
*/
void displayBoard()
{
    system("clear");

    printf("\n\t\t\n");
    printf("\t\t\n");
    printf("  %c\t %c\t%c\n", cBoard[0][0], cBoard[0][1], cBoard[0][2]);
    printLine();
    printf("\t\t\n");
    printf("  %c\t %c\t%c\n", cBoard[1][0], cBoard[1][1], cBoard[1][2]);
    printLine();
    printf("\t\t\n");
    printf("  %c\t %c\t%c\n", cBoard[2][0], cBoard[2][1], cBoard[2][2]);
    printf("\t\t\n");
}

/**
* Fill Board with Winner and verify selection. This function is called every time the game enters a state
*/
void fillBoard()
{
    int iRowNumber = 0, iColumnNumber = 0;
    srand((unsigned) time(NULL));

    while(cWinner == ' ')
    {
        printf("\n%c\n", cWinner);

        // This method is used to determine the player number.
        if (iCurrentPlayer == 1 || iCurrentPlayer == 0)
        {
            printf("\nPLAYER X\n");
            printf("Enter an available column number (1 - 3): ");
            scanf("%d", &iRowNumber);

            printf("Enter an available row number (1 - 3): ");
            scanf("%d", &iColumnNumber);

            // Check if the selection is valid.
            if(verifySelection(iRowNumber, iColumnNumber, iCurrentPlayer) == 1)
                iCurrentPlayer = 1;
            else
                iCurrentPlayer = 2;
        }
        else {
            printf("\nPLAYER 0\n");
            printf("Enter an available column number (1 - 3): ");
            
            iCurrentTime = time(NULL);
            do
            {
                iElaspedTime = time(NULL);
            } while ((iElaspedTime - iCurrentTime) < 3); // end do while loop
            
            iRowNumber = rand() % 4;

            printf("Enter an available row number (1 - 3): ");
            iColumnNumber = rand() % 4;

            // Check if the selection is valid.
            if (verifySelection(iRowNumber, iColumnNumber, iCurrentPlayer) == 1)
                iCurrentPlayer = 2;
            else
                iCurrentPlayer = 1;
        }

        displayBoard();
        checkForWin();
    }
}

/**
* Verifies that the selection is valid. Returns 0 if it is valid and 1 if it isn't
* 
* @param iRow - the row of the board
* @param iCol - the column of the board ( 1 - based )
* @param iPlayer - the player's index ( 0 or 1 )
* 
* @return 0 if the selection is valid and 1 if it isn't valid ( in which case we're in an error
*/
int verifySelection(int iRow, int iCol, int iPlayer)
{
    if (cBoard[iRow -1][iCol -1] == ' ' && (iPlayer == 1 || iPlayer == 0))
    {
        cBoard[iRow - 1][iCol - 1] = 'X';
        return 0;
    }
    else if (cBoard[iRow - 1][iCol - 1] == ' ' && iPlayer == 2)
    {
        cBoard[iRow - 1][iCol - 1] = '0';
        return 0;
    }
    else
    {
        return 1;
    }
}

/**
* Checks for winner and sets cWinner to winner if there is a winner else does CAT/draw
*/
void checkForWin()
{
    int catTotal;
    int x, y;

    // This method is used to calculate the winner of the board
    if (cBoard[0][0] == 'X' && cBoard[0][1] == 'X' && cBoard[0][2] == 'X')
        cWinner = 'X';
    else if (cBoard[1][0] == 'X' && cBoard[1][1] == 'X' && cBoard[1][2] == 'X')
        cWinner = 'X';
    else if (cBoard[2][0] == 'X' && cBoard[2][1] == 'X' && cBoard[2][2] == 'X')
        cWinner = 'X';
    else if (cBoard[0][0] == 'X' && cBoard[1][0] == 'X' && cBoard[2][0] == 'X')
        cWinner = 'X';
    else if (cBoard[0][1] == 'X' && cBoard[1][1] == 'X' && cBoard[2][1] == 'X')
        cWinner = 'X';
    else if (cBoard[0][2] == 'X' && cBoard[1][2] == 'X' && cBoard[2][2] == 'X')
        cWinner = 'X';
    else if (cBoard[0][0] == 'X' && cBoard[1][1] == 'X' && cBoard[2][2] == 'X')
        cWinner = 'X';
    else if (cBoard[0][2] == 'X' && cBoard[1][1] == 'X' && cBoard[2][0] == 'X')
        cWinner = 'X';
    else if (cBoard[0][0] == '0' && cBoard[0][1] == '0' && cBoard[0][2] == '0')
        cWinner = '0';
    else if (cBoard[1][0] == '0' && cBoard[1][1] == '0' && cBoard[1][2] == '0')
        cWinner = '0';
    else if (cBoard[2][0] == '0' && cBoard[2][1] == '0' && cBoard[2][2] == '0')
        cWinner = '0';
    else if (cBoard[0][0] == '0' && cBoard[1][0] == '0' && cBoard[2][0] == '0')
        cWinner = '0';
    else if (cBoard[0][1] == '0' && cBoard[1][1] == '0' && cBoard[2][1] == '0')
        cWinner = '0';
    else if (cBoard[0][2] == '0' && cBoard[1][2] == '0' && cBoard[2][2] == '0')
        cWinner = '0';
    else if (cBoard[0][0] == '0' && cBoard[1][1] == '0' && cBoard[2][2] == '0')
        cWinner = '0';
    else if (cBoard[0][2] == '0' && cBoard[1][1] == '0' && cBoard[2][0] == '0')
        cWinner = '0';

    // Prints the user as winner.
    if (cWinner == 'X') {
        printf("\nYou Win\n");
        return;
    }

    // Prints out the player 0 Wins.
    if (cWinner == '0') {
        printf("\nPlayer 0 Wins!");
        return;
    }

    //check for CAT / draw game
    // Calculate the total number of cat total lines
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            if (cBoard[x][y] != ' ')
                catTotal += 1;
        }
    }

    // This function is called when the total of the game is 9.
    if (catTotal == 9)
    {
        cWinner = 'C';
        printf("\nCAT Game!\n");
        return;
    }
}