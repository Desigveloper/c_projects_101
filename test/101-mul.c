/**
 * main - Entry point of program
 * @argc: param, number of arguments passed
 * @argv: param, pointer to pointer to array
 * Return: 0 (Success);
 */

#include "mul_files.h"

int main(int argc, char **argv) /* **argv = *argv[] (pointer to arr) */
{
        int i_num1, i_num2, i_result;

        if (argc != 3) /* Checks if operand args + filename is exactlt 3 args */
        {
                _putchar('E');
                _putchar('r');
                _putchar('r');
                _putchar('o');
                _putchar('r');
                _putchar('\n');

                exit(98);
        }

        i_num1 = _atoi(*(argv + 1));
        i_num2 = _atoi(*(argv + 2));
        i_result = i_num1 * i_num2;

        _print_number(i_result);
        _putchar('\n');

        return (0);
}

/**
 * _putchar - writes ASCII characters to screen
 * @ch: param, characters passed
 * 
 * Return: Written characters
 */

int _putchar(char ch)
{
        return (write(1, &ch, 1));
}

/**
 * _isdigit - Checks if passed character is a number
 * @ch: param, passed character
 *
 * Return: true(1) if is a digit else false(0)
 */

int _isdigit(int ch)
{
        return (ch >= '0' && ch <= '9');
}

/**
 * _strlen - Checks the length of passed cahracters
 * @str: param, array of character passed
 *
 * Return: length of caharcters
 */

int _strlen(char *str)
{
        int i_len = 0;

        while (*str++)
                i_len++;

        return (i_len);
}

/**
 * -print_number - Uses recursion to print the numbers to the screen
 *  @num: param, passed number
 *
 *  Return: nothing
 */

void _print_number(int num)
{
        if (num / 10)
                _print_number(num / 10);

        _putchar((num % 10) + '0');
}


/**
 * _atoi - Checks if passed arg is a number the conversts from string integers
 * @*str: param, array of char passed
 *
 * Return converted string (i_result)
 */

int _atoi(char *str)
{
        int i_result = 0;

        while (*str)
        {
                if (!_isdigit(*str))
                {
                        _putchar('E');
                        _putchar('r');
                        _putchar('r');
                        _putchar('o');
                        _putchar('r');
                        _putchar('\n');

                        exit(98);
                }

                i_result = i_result * 10 + (*str - '0');
                str++;
        }

        return (i_result);
}
