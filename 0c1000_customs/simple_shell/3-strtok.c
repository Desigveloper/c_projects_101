/**
* _strtok - Breaks a parsed null-termited string(str) into a nonempty tokens
* @str: param, string to be parsed
* @separator: Set of bytes that delimit the tokens in the string
* Return: A pointer to the next nonempty token or NULL if no more tokens
*/

#include "main_shell.h"

int main() {
    //char str[] = "Hello , world! This is a sample string for custom strtok.";
    char str[] = "ls -al";
    char str2[] = "Hello , world! This is a sample for lib strtok.";
    char* token = _strtok(str, " ");
    char *token2 = strtok(str2, " ");
    
    while (token != NULL) {
        printf("Token_c: %s\n", token);
        token = _strtok(NULL, " ");
    }
    printf("\n");

    while (token2 != NULL) {
        printf("Token2_l: %s\n", token2);
        token2 = strtok(NULL, " ");
    }
    return 0;
}

char *_strtok(char *restrict str, const char *restrict delim)
{
    #define YES 1
    #define NO 0    
    char *token;
    static char *next_token;
    int found_sep = NO;
    const char *sep;

    if (str != NULL)
        next_token = str;
    if (next_token == NULL)
        return NULL;

    token = next_token;
    while (*next_token != '\0')
    {
        for (sep = delim; *sep != '\0'; sep++)
        {
            if (*next_token == *delim)
            {
                found_sep = YES;
                break;
            }
        }
        if (found_sep)
        {
            *next_token = '\0';
            next_token++;
            break;
        }
        next_token++;
    }

    if (*token == '\0')
        return NULL;
    return token;
}