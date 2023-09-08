#include "header_files.h"
#include "definitions.h"

int main(void)
{
    struct time *ptr_time;
    /* ptr_time points to the struct(time's) first byte */
    ptr_time = &inst_time;

    printf("%d\n",  ptr_time->hours); /* Method two of accessing members with ptr */
    printf("%d\n", (*ptr_time).minutes); /* Method one of accessing members with ptr */
    return (0);
}