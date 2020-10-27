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

int print_number(int x)
{
	int y = 1;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
		y++;
	}
	if (x / 10 != 0)
	{
		y = print_number(x / 10) + 1;
	}
	_putchar((x % 10) + '0');
	return (y);
}
