#include "holberton.h"
/**
  * _printf - print efe
  * @format: string to print
  * Return: int
  */
int _printf(const char *format, ...)
{
	int charCount = 0;
	char temp = '%';
	va_list list;
	unsigned int charSize = sizeof(char);

	if (format == NULL || *format == 0)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (*format != temp)
		{
			write(1, format, charSize);
			charCount++;
		}
		else
		{
			if (*(format + 1) == 0)
			{
				write(1, &temp, charSize);
				return (-1);
			}
			else if (*(format + 1) == 'c'
					|| *(format + 1) == 's'
					|| *(format + 1) == '%')
			{
				format++;
				charCount += suich(format, list);
			}
			else
			{
				write(1, format, charSize);
				charCount++;
			}
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
	int charCount = 0, c, argLen = 0, charSize = sizeof(char);
	char *s, temp = '%';

	switch (*format)
	{
		case '%':
			write(1, &temp, charSize);
			charCount++;
			break;
		case 'c':
			c = va_arg(list, int);
			if (c == 0)
			{
				return (0);
			}
			write(1, &c, charSize);
			charCount++;
			break;
		case 's':
			s = va_arg(list, char*);
			if (s == NULL)
				s = "(null)";
			for (argLen = 0; *s != 0; argLen++, s++)
				write(1, s, charSize);
			charCount += (argLen);
			break;
		default:
			return (0);

	}
	return (charCount);
}

