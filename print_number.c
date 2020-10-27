#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
  * print_number - print an integer
  *
  * @x: argument
  *
  * Return: character count
  */

int print_number(va_list list)
{
	int y = 1, x;

	x = va_arg(list, int);

	if (x < 0)
	{
		_putchar('-');
		x = -x;
		y++;
	}
	if (x / 10 != 0)
	{
		y = (print_number(x / 10) + 1);
	}
	_putchar((x % 10) + '0');
	return (y);
}
