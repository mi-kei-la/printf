#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _putchar(char c);
int print_int(int x);
int print_number(unsigned int x); 
int suich(const char *format, va_list list);
int _printf(const char *format, ...);
#endif
