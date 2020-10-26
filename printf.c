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
	int charCount = -1, i = 0;
	char temp = '%';
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (*format != '\0')
	{
		if (*format != temp && format)
		{
			write(1, format, 1);
			charCount++;
		}
		else
		{
			format++;
			i = suich(format, list);
			charCount += i;
		}
		format++;
	}
	va_end(list);
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
			if (c == 0)
				return (-1);
			write(1, &c, 1);
			charCount++;
			break;
		case 's':
			s = va_arg(list, char*);
			if (s == 0)
				return (-1);
			for (argLen = 0; *s != 0; argLen++, s++)
				write(1, s, 1);
			charCount += argLen;
			break;
		default:
			return (-1);

	}
	return (charCount);
}

