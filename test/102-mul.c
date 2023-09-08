#include <stdlib.h>
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}

int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;

    return (len);
}

void _print_number(char *num)
{
    int i = 0;

    while (num[i] == '0' && num[i + 1] != '\0')
        i++;

    while (num[i])
    {
        _putchar(num[i]);
        i++;
    }
}

char *_strdup(char *s)
{
    int len = _strlen(s);
    char *dup = malloc(len + 1);

    if (!dup)
        return (NULL);

    for (int i = 0; i <= len; i++)
        dup[i] = s[i];

    return (dup);
}

char *multiply(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    char *res = malloc(len1 + len2 + 1);

    if (!res)
        return (NULL);

    for (int i = 0; i <= len1 + len2; i++)
        res[i] = '0';

    for (int i = len1 - 1; i >= 0; i--)
    {
        int quotient = 0;

        for (int j = len2 - 1; j >= 0; j--)
        {
            int prod = (num1[i] - '0') * (num2[j] - '0') + quotient + (res[i + j + 1] - '0');
            quotient = prod / 10;
            res[i + j + 1] = (prod % 100) + '0';
        }

    }

    return (res);
}

int main(int argc, char **argv)
{
    char *num1, *num2, *res;
    
    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    for (int i = 0; num1[i]; i++)
    {
        if (!_isdigit(num1[i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            exit(98);
        }
    }

    for (int i = 0; num2[i]; i++)
    {
        if (!_isdigit(num2[i]))
        {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            exit(98);
        }
    }

    res = multiply(num1, num2);

    _print_number(res);

    _putchar('\n');

    free(res);

    return (0);
}
