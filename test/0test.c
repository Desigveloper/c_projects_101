/* Demonstrates the sizeof() operator */
/* Declare several 100-element arrays */
char chararray[100];
int intarray[100];
float floatarray[20][20];
double doublearray[10][10][10];
int arr[2][3][5][8];

#include "header_files.h"
int main(void) {
    /* Display the sizes of numeric data8*/
    printf("\n\nSize of char = %lu bytes", sizeof(char));
    printf("\n\nSize of int = %lu bytes", sizeof(int));
    printf("\nSize of short = %lu bytes", sizeof(short));
    printf("\nSize of long = %lu bytes", sizeof(long));
    printf("\nSize of long long = %lu bytes", sizeof(long long));
    printf("\nSize of float = %lu bytes", sizeof(float));
    printf("\nSize of double = %lu bytes", sizeof(double));

    puts("");

    /* Display the sizes of the three arrays */
    printf ("\nSize of chararray = %lu bytes", sizeof(chararray));
    printf("\nSize of intarray = %lu bytes", sizeof(intarray));
    printf("\nSize of floatarray = %lu bytes" , sizeof(floatarray));
    printf("\nSize of doublearray = %lu bytes\n", sizeof(doublearray));
    printf("\nSize of arr = %lu bytes", sizeof(arr));
}
