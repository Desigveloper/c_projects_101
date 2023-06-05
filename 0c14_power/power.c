#include <stdio.h>
#include <stdlib.h>

int power(int, int);

/**
* Main function for the program. Prints the product of the base and the exponent to the screen.
* 
* 
* @return 0 on success non - zero on failure.
* In this case the program should exit with an error code
*/
int main(void){
    int iBase, iExponent;
    long long lResult = 0;

    printf("Enter the base number: ");
    scanf("%d", &iBase);

    printf("Enter the exponent/power of the base: ");
    scanf("%d", &iExponent);

    lResult = (long long) power(iBase, iExponent);

    printf("The product of %d power %d is equal to %lld\n",iBase, iExponent, lResult);
    return 0;
}

/**
* Returns the power of two numbers.
* This is a recursive function so you can use it in situations 
* where you don't know the base and exponent of a number.
* 
* @param iBase - The base of the number to be raised to the power.
* @param iExponent - The exponent of the number to be raised to the base.
* 
* @return The result of the operation as an integer in the range 0 to 2147483647 ( 2^iBase )
*/
int power(int iBase, int iExponent)
{
    // Returns 1 if iExponent is 0.
    if (iExponent == 0)
        return 1;
    
    return iBase * power(iBase, iExponent - 1);
}