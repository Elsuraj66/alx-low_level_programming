#include <stdio.h>
/**
 * _putchar - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _putchar(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
