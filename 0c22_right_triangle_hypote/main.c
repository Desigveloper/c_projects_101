/**
* Takes two double numbers as input and calculate the hypotenuse
* of the right triangle and outpu the result
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    double result;

    printf("This program will output the hypotenuse of a right trinagle\n");
    printf("-------------------------------------------------------------\n");
    //Takeking the first number
    printf("Enter the first double number: ");
    scanf("%lf", &x);

    //Taking the second number
    printf("Enter the second double number: ");
    scanf("%lf", &y);

    //calculates the result
    result = sqrt((x * x) + (y * y));

    printf("%.2f", result);
}
