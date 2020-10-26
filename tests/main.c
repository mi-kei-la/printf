#include <stdio.h>
#include "holberton.h"

int main(void)
{
int x = 0;

x = _printf("Hola:\n");
printf("Return of last line: %i/n", x);
x = _printf("Hola %s\n", "mundo");
printf("Return of last line: %i/n", x);
x = _printf("Hola %c\n", 'p');
printf("Return of last line: %i/n", x);
x = _printf("Hola %%\n");
printf("Return of last line: %i/n", x);
return (0);
}
