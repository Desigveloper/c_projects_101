#include "header_files.h"

// int main()
// {
//     int x;
//     char cArray[5];
//     char cName[] = "Olivia";
    
//     printf("\nCharacter array not initialized:\n");
    
//     for ( x = 0; x < 5; x++ )
//         printf("Element %d's contents are %d\n", x, cArray[x]);
        
//     printf("\nInitialized character array:\n");
    
//     for ( x = 0; x < 6; x++ )
//         printf("%c", cName[x]);
// } //end main

int main(void)
{
    int n;
    n = 10;
    int arr[n][n][n];
    int i, j, k;
    srand((unsigned) time(NULL));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
                *(*(*(arr + i) + j) + k) = rand() % 10000;
        }
    }
        
    printf("\nSize of arr = %lu bytes\n", sizeof(arr));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                printf("arr[%d][%d][%d] = %d \n ", i, j, k,  *(*(*(arr + i) + j) + k));
            }
            puts("Press Enter to continue or CTRL-C to quit.");

            getchar();
        }        
    }

    return 0;
}


// int main(int argc, char *argv[])
// {
//         int i, j, sum = 0;

//         for (i = 1; i < argc; i++) 
//         {
//                 for (j = 0; *(*(argv + i )+ j); j++)
//                 {
//                         if (!isdigit(*(*(argv + i) + j)))
//                         {
//                                 printf("Error\n");
//                                 return (1);
//                         }
//                 }
//                 sum += atoi(*(argv + i));
//         }

//         printf("%d\n", sum);
//         return (0);
// }
