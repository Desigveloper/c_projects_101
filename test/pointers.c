#include <stdio.h>

void functions_executor(void);
void pointerVar(void);
void pointerBasic(void);
void ptrArr(void);
int max_number(int length, int *array_int);
int min_number(int length, int array_int[]);
int sum_arrays(int length, int *array_int1, int *array_int2);

int main(void)
{
    functions_executor();
    return 0;
}

void functions_executor(void)
{
    #define MAX 10
    
    int array_int0[MAX];
    int array_int1[MAX];


    for (int ctr = 0; ctr < MAX; ctr++)
    {
        printf("Enter an integer: ");
        scanf("%d%d", &array_int0[ctr], &array_int1[ctr]);
    } 

    printf("\n\nlargest numbers for arr1 and arr 2 are: %d and %d\n", max_number(MAX, array_int0), max_number(MAX, array_int1));
    printf("\n\nsmallest numbers for arr1 and arr2 are: %d and %d\n", min_number(MAX, array_int0), min_number(MAX, array_int1));
    printf("\n\ntotal of elements od the two arrs are: %d\n", sum_arrays(MAX, array_int0, array_int1));
}

int sum_arrays(int length, int *array_int1, int *array_int2)
{
    int total, ctr;

    for (ctr = 0; ctr < length; ctr++)
    {
        total += *(array_int1 + ctr) + *(array_int2 + ctr);
    }

    return total; 
}

int max_number(int length, int *array_int)
{
    int largest = -100;

    for (int ctr = 0; ctr < length; ctr++)
    {
        if (*(array_int + ctr) > largest)
            largest = *(array_int + ctr);
    }

    return largest;
}

int min_number(int length, int *array_int)
{
    int smallest = 10000;

    for (int ctr = 0; ctr < length; ctr++)
    {
        if (*(array_int + ctr) < smallest)
            smallest = *(array_int + ctr);
    }

    return smallest;
}

void ptrArr(void)
{
    #define MAX 10

    int ctr;
    int array_i[MAX];
    short array_s[MAX];
    float array_f[MAX];
    double array_d[MAX];

    printf("\nElements\tInt\t\t\tShort\t\t\tFloat\t\t\tDouble");
    printf("\n--------------------------------------------------");
    printf("----------------------------------------------------\n");

    for (ctr = 0; ctr < MAX; ctr++)
        printf("\nElement %d: \t%p\t\t%p\t\t%p\t\t%p", ctr, &array_i[ctr],
            &array_s[ctr], &array_f[ctr], &array_d[ctr]);

    printf("\n--------------------------------------------------");
    printf("----------------------------------------------------\n");
}
void pointerVar(void)
{
    int x = 5;

    int *prt0 = &x;
    int *prt1 = 0;
    int *prt2 = NULL;
    printf("%d, %d, %d\n", *prt0, *prt1, *prt2);

}

void pointerBasic(void)
{
    char *s = "Hello testing pointer";
    char c;
    int i;
    char *p_s = s;

    for (i = 0; i < 22; i++)
    {
        c = *(p_s + i);
        printf("%c ", c);
    }
    printf("\n%p", p_s);

    printf("\n");

}