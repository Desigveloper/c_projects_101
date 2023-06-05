#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* Main function to check if user input is correct and perform the operation.
* 
* 
* @return 0 if successful 1 if not.
*/
int main(void)
{
    int x, y;
    int iValue;
    int iNumOfElements;
    int iFoundIndex = -1;
    srand((unsigned) time(NULL));

    printf("Enter number of elements: ");
    scanf("%d", &iNumOfElements);

    printf("Enter a value to search for: ");
    scanf("%d", &iValue);

    int iArray[iNumOfElements];

    // Randomly generate a random number of elements
    for (x = 0; x < iNumOfElements; x++)
        iArray[x] = rand() % 100;
    
    // Searches for the element in the array.
    for (x = 0; x < iNumOfElements; x++)
    {
        // Find the first element in the array.
        if (iArray[x] == iValue)
        {
            iFoundIndex = x;
            break;
        } 
    }


    printf("\nThe available elements in array are:\n");
    // Prints the number of elements in the array
    for (x = 0; x < iNumOfElements; x++)
    {
        // Prints the value of x to console.
        if (x > 0 && x % 20 == 0)
            printf(" %d\n", iArray[x]);

        printf("%d ", iArray[x]);
    }


    // Prints out the search value at the specified index.
    if (iFoundIndex > -1)
        printf("\nYour search value %d at index %d\n", iValue, iFoundIndex);
    else
        printf("\nSorry, your search value was not found in any element\n");

    return 0;
}