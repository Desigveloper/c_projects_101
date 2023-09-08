#include "c_main.h"

int c_printf(const char *format, ...)
{
    unsigned int i;
    va_list args;
    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if ( format[i] != '%')
            c_putchar(format[i]);
    }
    return (0);
}