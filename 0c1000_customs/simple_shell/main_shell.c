/**
 * main - entry point of program
 * Return: 0 on sucsess
 */

#include "main_shell.h"

int main(void)
{
        char  *buffer = NULL;
        size_t len = 0;
        ssize_t read;

        while (1)
        {
                printf("($) ");
                read = _getline(&buffer, &len, stdin);

                /* track eol condition */
                if (read == -1)
                {
                    return (1);
                }

                printf("Command not available %s\n", buffer);
        }
        free(buffer);
        return (0);
}