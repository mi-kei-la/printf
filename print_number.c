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

int print_number(long x)
{
	int y = 0;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x / 10)
	{
		print_number(x / 10);
		y++;
	}
	_putchar((x % 10) + '0');
	y++;
	return (y);
}
