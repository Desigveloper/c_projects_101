#include <stdio.h>

/**
*This program calculates the area an object and print the result.
*
*main - entry point of the program
*
*Return: Always returns 0
*/

float printArea(int);

int main(void)
{
	int iRadius;

	printf("Enter radius(i.e. 10): " );
	scanf("%d", &iRadius);
	printf("\nArea = %.2fcm\n", printArea(iRadius));
	return 0;
}

float printArea(int iRadius)
{
	float fArea = 0.0;
	#define PI 3.14159

	fArea = (PI * iRadius * iRadius);
	return fArea;
}