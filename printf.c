#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	int charCount = 0, argLen = 0;
	char c, temp = '%';
	char *s;
	va_list list;

	va_start(list, format);
	while (*format != 0)
	{
		if (*format != temp && format)
		{
			write(1, format, 1);
			printf("char");
			charCount++;
		}
		else
		{
			format++;
			switch(*format)
			{
				case '%':
					write(1, &temp, 1);
					printf("case1");
					charCount++;
					break;
				case 'c':
					c = va_arg(list, int);
					write(1, &c, 1);
					printf("case2");
					charCount++;
					break;
				case 's':
					s = va_arg(list, char*);
					for(argLen = 0; *s != 0; argLen++, s++)
					{
					write(1, s, 1);
					}
					charCount += argLen;
					break;
			}
		}
		format++;
	}
	return (charCount);
}
