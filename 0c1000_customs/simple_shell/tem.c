/* getline user program free */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream) {
    ssize_t len = 0;
    int ch;

    while ((ch = fgetc(stream)) != EOF) {
        if (len >= *n - 1) {
            break;
        }

        *lineptr[len++] = ch;

        if (ch == '\n') {
            break;
        }
    }

    if (len == 0) {
        return -1;
    }

    *lineptr[len] = '\0';
    return len;
}


/* strtok with strspn and strcspn */
char * _strtok(char *str, const char *delim);

int main() {
    char str[] = "Hello, world! This is a sample string.";
    char* token = _strtok(str, " ");
    
    while (token != NULL) {
        token = _strtok(NULL, " ");
        printf("Token: %s\n", token);
        //token = strtok(NULL, " ");
    }
    return 0;
}

char * _strtok(char *str, const char *delim)
{
    static char *next_token;

    if (str)
        next_token = str;

    if (!next_token)
        return NULL;

    str = next_token + strspn(next_token, delim);

    next_token = str + strcspn(str, delim);

    if (next_token == str)
    {
        next_token = NULL;
        return NULL;
    }

    if (*next_token == '\0')
        next_token = NULL;
    
    *next_token++ = '\0';
    
    return str;
}