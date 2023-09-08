/**
* Accessing successive elements of an array by incrementing a pointer
* Stepping through array of structures using a pointer noataion
*/

#include <stdio.h>

#define MAX 4

struct part {
    short number;
    char *name;
} data[MAX] = {
    1, "Smith",
    2, "Jones",
    3, "Adams",
    4, "Wilson"
};

int main(void)
{
    struct part *ptr_part;
    int i;
    // Initialize ptr_part to point to the first element of data struct
    ptr_part = data;

    for (i = 0; i < MAX; i++)
    {
        printf("At address %p: %d %s\n", ptr_part, (ptr_part)->number, (*ptr_part).name);
        ptr_part++;
    }

    printf("Size of struct: %lu\n", sizeof(data));
}