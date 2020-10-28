# printf

This repository contains all the files pertaining a custom printf function, that emulates the standard printf function of the C language.

## How it works

This function takes a format string which contains text and format specifiers (special characters preceded by '%'). The format string may be followed by as many arguments as the user wants, as long as the amount of arguments matches the amount of format specifiers. Arguments are passed on a 1 to 1 basis to the format string, so they must be in order of use. The program prints the format string to the standard output, swapping the format specifiers by the arguments passed by the user, and it returns the number of bytes printed (or -1 in case of error). 

## Format specifiers allowed

- %c - prints a character

- %s - prints a string (array of characters)

- %d - prints a number in base 10

- %i - prints an integer

## Notes

- '%%' is not a specifier, but the program will print a single '%'

- The usage of %d and %i is virtually the same, but it is useful to know the difference when using the standard function _scanf_

- This program was tested on Ubuntu 14

- See the man page for more information
