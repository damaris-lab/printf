#ifndef MAIN_H

#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list arg);
int print_char(va_list arg);
int print_num(va_list arg);

#endif
