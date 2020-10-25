#include <stdarg.h>
#include <stdlib.h>
#include "printf.h"

int _printf(const char *format, ...)
{
	int i, j = 0, strlen1, strlen2, thingie;
	char c, temp = '%';
	char *s;
	va_list list;

	va_start(list, format);
	for (i = 0; format[i] != 0 ; i++)
	{
		if (format[i] != temp && format)
		{
			write(1, *(format + i), 1);
			j++;
		}
		else
		{
			i++;
			switch(format[i])
			{
				case '%':
					write(1, &temp, 1);
					j++;
					break;
				case 'c':
					c = va_arg(list, char);
					write(1, &c, 1);
					j++;
					break;
				case 's':
					s = va_arg(list, char*);
					for(strlen2 = 0; s[strlen2] != 0; strlen2++)
					{
					}
					write(1, s, strlen2);
					j += strlen2;
					break;
			}
		}

	}
	return (j);
}
