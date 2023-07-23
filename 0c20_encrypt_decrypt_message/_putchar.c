/**
* _putchar - Prints a single character to the screen
* @ch: Character to be printed
* Return: The value of character passed
*/
#include "encrypt.h"

int _putchar(char ch)
{
    return write(STDOUT_FILENO, &ch, 1);
}