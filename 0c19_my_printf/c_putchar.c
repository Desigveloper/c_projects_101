#include "c_main.h"

int c_putchar(char ch)
{
    write(1, &ch, 1);
    return ch;
}