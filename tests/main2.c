#include <limits.h>
#include "holberton.h"

int main(void)
{
_printf("This should be 0 with d: %d\n", 0);
_printf("This should be 0 with i: %i\n", 0);
_printf("This should be 3 with d: %d\n", 3);
_printf("This should be 3 with i: %i\n", 3);
_printf("This should be -1 with d: %d\n", -1);
_printf("This should be -1 with i: %i: \n" -1);
_printf("This should be 10 with d: %d\n", 10);
_printf("This should be 10 with i: %i\n", 10);
_printf("This should be 99 with d: %d\n", 99);
_printf("This should be 99 with i: %i\n", 99);
_printf("This should be -99 with d: %d\n", -99);
_printf("This should be -99 with i: %i\n", -99);
_printf("This should be 1024 with d: %d\n", 1024);
_printf("This should be 1024 with i: %i\n", 1024);
_printf("This should be -4096 with d: %d\n", -4096);
_printf("This should be -4096 with i: %i\n", -4096);
_printf("This should be INT_MAX with d: %d\n", INT_MAX);
_printf("This should be INT_MAX with i: %i\n", INT_MAX);
_printf("This should be INT_MIN with d: %d\n", INT_MIN);
_printf("This should be INT_MIN with i: %i\n", INT_MIN);

return (0);
}
