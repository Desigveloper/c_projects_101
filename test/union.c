#include <stdio.h>

union shared_tag {
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
};

int main(void)
{
    union shared_tag shared = {'$'};

    printf("\nchar c = %c", shared.c);
    printf("\nshort s = %d", shared.s);
    printf("\nint i = %d", shared.i);
    printf("\nlong l = %ld", shared.l);
    printf("\nfloat f = %f", shared.f);
    printf("\ndouble d = %f", shared.d);
    
    shared.d = 123456789.8765;
    
    printf("\n\nchar c = %c", shared.c);
    printf("\nshort s = %d", shared.s);
    printf("\nint i = %d", shared.i);
    printf("\nlong l = %ld", shared.l);
    printf("\nfloat f = %f", shared.f);
    printf("\ndouble d = %f", shared.d);

    return 0;
}