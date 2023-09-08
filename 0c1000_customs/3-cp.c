/**
 * main - entry point to promgram
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 on Success
 */

#include "main.h"

int main(int argc, char *argv[])
{
        int fd_from, fd_to;
        char buffer[BUFFER_SIZE];
        ssize_t bytes_read;

        if (argc != 3) /* Check for correct number of arguments */
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }

        fd_from = open(argv[1], O_RDONLY); /* Open file_from for reading */
        if (fd_from == -1) /* Handle reading error*/
        {
                print_err_msg(argv[1], 98);
                exit(98);
        }
        /* Open file_to for reading, truncate if file exists else create it */
        fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
                        S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
        if (fd_to == -1) /* Handle reading error */
        {
                print_err_msg(argv[2], 99);
                close(fd_from);
                exit(99);
        }
        /* Copy contents of file1 to file2 using a buffer size of 1024 bytes */
        while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
        {
                if (write(fd_to, buffer, bytes_read) != bytes_read)
                {
                        print_err_msg(argv[2], 99);
                        close(fd_from);
                                               close(fd_to);
                        return (99);
                }
        }
        handle_errors(bytes_read, fd_from, fd_to, argv);
        return (0);
}

/**
 * print_err_msg - Template for the varius error messages
 * @filename: param, Pointer to name file to which error occured
 * @err_code: param, Error code
 * Return: message printed
 */

void print_err_msg(char *filename, int err_code)
{
        switch (err_code)
        {
                case 98:
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
                                        filename);
                        break;
                case 99:
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
                                        filename);
                        break;
                case 100:
                        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
                                        errno);
                        break;
                default:
                        break;
        }
}

/**
 * handle_errors - Handles files reading and closing error
 * @b_read: Number of bytes read from file
 * @fd_fr: file discriptor for source file
 * @fd_to: file discriptor for destination file
 * @argv: array of command arguments
 * Return: Error code or 1
*/

int handle_errors(ssize_t b_read, int fd_fr, int fd_to, char *argv[])
{
        /* Handle read error */
        if (b_read == -1)
        {
                print_err_msg(argv[1], 98);
                close(fd_fr);
                close(fd_to);
                exit(98);
        }
        /* Close file descriptors and handle errors */
        if (close(fd_fr) == -1)
        {
                print_err_msg(NULL, 100);
                close(fd_to);
                exit(100);
        }
        if (close(fd_to) == -1)
        {
                print_err_msg(NULL, 100);
                exit(100);
        }

        return (1);
}