#include <limits.h>
#include "holberton.h"

int main(void)
{
	int x = 0;

x = _printf("This should be 0 with d: %d\n", 0);
printf("return of last line: %d\n", x);
x = _printf("This should be 0 with i: %i\n", 0);
printf("return of last line: %d\n", x);
x = _printf("This should be 3 with d: %d\n", 3);
printf("return of last line: %d\n", x);
x = _printf("This should be 3 with i: %i\n", 3);
printf("return of last line: %d\n", x);
x = _printf("This should be -1 with d: %d\n", -1);
printf("return of last line: %d\n", x);
x = _printf("This should be -1 with i: %i: \n" -1);
printf("return of last line: %d\n", x);
x = _printf("This should be 10 with d: %d\n", 10);
printf("return of last line: %d\n", x);
x = _printf("This should be 10 with i: %i\n", 10);
printf("return of last line: %d\n", x);
x = _printf("This should be 99 with d: %d\n", 99);
printf("return of last line: %d\n", x);
x = _printf("This should be 99 with i: %i\n", 99);
printf("return of last line: %d\n", x);
x = _printf("This should be -99 with d: %d\n", -99);
printf("return of last line: %d\n", x);
x = _printf("This should be -99 with i: %i\n", -99);
printf("return of last line: %d\n", x);
x = _printf("This should be 1024 with d: %d\n", 1024);
printf("return of last line: %d\n", x);
x = _printf("This should be 1024 with i: %i\n", 1024);
printf("return of last line: %d\n", x);
x = _printf("This should be -4096 with d: %d\n", -4096);
printf("return of last line: %d\n", x);
x = _printf("This should be -4096 with i: %i\n", -4096);
printf("return of last line: %d\n", x);
x = _printf("This should be INT_MAX with d: %d\n", INT_MAX);
printf("return of last line: %d\n", x);
x = _printf("This should be INT_MAX with i: %i\n", INT_MAX);
printf("return of last line: %d\n", x);
x = _printf("This should be INT_MIN with d: %d\n", INT_MIN);
printf("return of last line: %d\n", x);
x = _printf("This should be INT_MIN with i: %i\n", INT_MIN);
printf("return of last line: %d\n", x);
return (0);
}
