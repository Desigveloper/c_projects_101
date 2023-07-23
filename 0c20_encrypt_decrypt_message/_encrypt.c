/**
* Program: encrypt.c
* Purpose: The program enables the user to encrypt and decrypt a secret message
*     by accepting two commandline parameters: encrypter filename action
* filename: Name of file to hold the message
* action: Either E for encrypt or D for Decrypt
*/

#include "encrypt.h"

int encrypt_code(int argc, char **argv)
{
    FILE *file_handle;
    int return_value = 1;
    int ch = 0;
    unsigned int ctr = 0;
    int coding_value = 5;
    char buffer[257];

    if ( argc != 3)
    {
        printf("\nError: Wrong number of parameters......\n");
        printf("Usage:\n %s filename action\n", argv[0]);
        printf("\tfile = name of file to encrypt or decrypt\n");
        printf("\taction = E for encryption or D for decryption\n\n");
        return_value = -1;
    }
    else  if ((argv[2][0] == 'D') || argv[2][0] == 'd') /* to decode */
    {
        file_handle = fopen(argv[1], "r"); /* Open file for reading */
        if (file_handle <= 0) /* Checking error */
        {
            printf("\nError opening file");
            return_value = -2;
        }

        ch = getc(file_handle);

        while (!feof(file_handle)) /* Checking end of file */
        {
            ch = decrypt_char(ch, coding_value);
            _putchar(ch);
            ch = getc(file_handle);
        }
        fclose(file_handle);
        printf("\nFile decoded to screen\n");
    }
    else
    {
        file_handle = fopen(argv[1], "w");
        if (file_handle <= 0)
        {
            printf("\nError creating file");
            return_value = -3;
        }
        printf("\nEnter text to be encrypted. ");
        printf("Enter a blank line to end\n");

        while (gets(buffer) != NULL)
        {
            if (buffer[0] == 0)
                break;

            for (ctr = 0; ctr < _strlen(buffer); ctr++)
            {
                ch = encrypt_char(buffer[ctr], coding_value);
                ch = fputc(ch, file_handle);
            }
        }
        printf("\nFile encrypted to screen\n");
        fclose(file_handle);
    }
    return return_value;
} 

int encrypt_char(int ch, int coding_value)
{
    // ^ Can be change with (+)
    ch = ch ^ coding_value;
    return ch;
}

int decrypt_char(int ch, int coding_value)
{
    // ^ Can be changed with -
    ch = ch ^ coding_value; // ^ is XOR or a binary math operator that modifies character at bit level 
    return ch;
}