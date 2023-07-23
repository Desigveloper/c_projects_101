/**
* main - Entry point
* argc: Number of arguments
* argv: Pointer to array of arguments
* Return: 0 (Success)
*/

#include "encrypt.h"

int main(int argc, char **argv)
{
    int code;
    
    encrypt_code(argc, argv);

    return 0;
}