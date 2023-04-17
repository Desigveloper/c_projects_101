#include <stdio.h>

/**
*This program calculates the area an object and print the result.
*
*main - entry point of the program
*
*Return: Always returns 0
*/

int radius, area;
int main(void)
{
	printf("Enter radius(i.e. 10): " );
	scanf("%d", &radius);
	area = (int) (3.14159 * radius * radius);
	printf("\nArea = %dcm\n", area);
	return 0;
}