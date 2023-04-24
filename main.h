#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#define BUFFER_SIZE 1024

int _putchar(char c);
int buffer(char c);
int _printf(const char format, ...);

typedef struct format_t
{
        char t;
        int (f)(va_list);
} format;

int _print_string(va_list list);
int _print_char(va_list list);
int _print_int(va_list list);
int _strlen(const char s);
int print(chars);
int _put_string(char str);
int checker(const chars, va_list list);
int check(const char s, va_list list, inti);
int _print_int(va_list list);
char *_ita(long int n, int base);

#endif
