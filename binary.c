#include "holberton.h"

/**
  * print_binary - print number in binary format
  *
  * @number: parameter
  *
  * Return: char count
  */

int print_binary(unsigned int number)
{
	int x = 0, y = 0;

	if (number >> 1)
		y = print_binary(number >> 1) + 1;
	x = (number & 1) ? 1 : 0;
	_putchar(x + '0');
	return (y + 1);
}

