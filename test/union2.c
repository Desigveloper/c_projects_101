/**
* A practical use of union data type
*/

#include <stdio.h>

#define CHARACTER 'C'
#define INTEGER 'I'
#define FLOAT 'F'

typedef struct {
    char type;
    union shared_tag {
        char c;
        int i;
        float f;
    } shared;
} generic;

void print_func(generic generic_inst);

int main(void)
{
    generic var;

    var.type = CHARACTER;
    var.shared.c = '$';
    print_func(var);

    var.type = FLOAT;
    var.shared.f = (float) 12345.67890;
    print_func(var);

    var.type = INTEGER;
    var.shared.i = 111;
    print_func(var);

    var.type = 'x';
    var.shared.i = 112;
    print_func(var);

    return 0;
}

void print_func(generic generic_inst)
{
    printf("\n\nThe generic value is.....");

    switch(generic_inst.type)
    {
        case CHARACTER:
            printf("%c", generic_inst.shared.c);
            break;
        case FLOAT:
            printf("%f", generic_inst.shared.f);
            break;
        case INTEGER:
            printf("%d\n", generic_inst.shared.i);
            break;
        default:
            printf("an unknown type %c\n", generic_inst.type);
            break;
    }
}