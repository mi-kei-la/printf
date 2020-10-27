#include <limits.h>
#include "holberton.h"

/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int x = 0;

	x = _printf("%b\n", 98);
	_printf("charcount of %i in binary: %d\n", 98, x);
	x = _printf("%b\n", 1024);
	_printf("charcount of 1024 %cn binary: %i\n", 'i', x);
	x = _printf("%b\n", INT_MAX);
	_printf("charcount int_max %s binary: %i\n", "in", x);
	x = _printf("%b\n", INT_MIN);
	_printf("charcount int_min in binary: %d\n", x);
	x = _printf("%b\n", -8);
	_printf("charcount of -8: %d\n", x);
	return (0);
}
