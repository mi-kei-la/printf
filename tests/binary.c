#include "holberton.h"

/**
  * print_binary - print number in binary format
  *
  * @list: parameter
  *
  * Return: char count
  */

int print_binary(unsigned int x)
{
	unsigned int y = 0;

	if (x / 2)
		y = print_binary(x / 2) + 1;
	x = (x % 2) ? 1 : 0;
	_putchar(x + '0');
	return (y);
}

