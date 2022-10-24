#include "stdio.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
int main(void)

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
