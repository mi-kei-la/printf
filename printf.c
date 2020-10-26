#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
  * _printf - print efe
  * @format: string to print
  * Return: int
  */
int _printf(const char *format, ...)
{
	int charCount = 0, i = 0;
	char temp = '%';
	va_list list;

	va_start(list, format);
	while (*format != 0)
	{
		if (*format != temp && format)
		{
			write(1, format, 1);
			charCount++;
		}
		else
		{
			format++;
			suich(format, list);
			charCount += i;
		}
		format++;
	}
	return (charCount);
}
/**
  * suich - switch for conversion specifiers
  * @format: string to print
  * @list: arguments to print
  * Return: count of printed chars
  */
int suich(const char *format, va_list list)
{
	int charCount = 0, c, argLen = 0;
	char *s, temp = '%';

	switch (*format)
	{
		case '%':
			write(1, &temp, 1);
			charCount++;
			break;
		case 'c':
			c = va_arg(list, int);
			write(1, &c, 1);
			charCount++;
			break;
		case 's':
			s = va_arg(list, char*);
			for (argLen = 0; *s != 0; argLen++, s++)
				write(1, s, 1);
			charCount += argLen;
			break;
	}
	return (charCount);
}

