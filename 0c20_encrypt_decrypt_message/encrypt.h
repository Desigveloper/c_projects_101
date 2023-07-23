#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _putchar(char ch);
size_t _strlen(const char *str);
int encrypt_char(int ch, int val);
int decrypt_char(int ch, int val);
int encrypt_code(int argc, char **argv);
#endif /* MAIN_H */