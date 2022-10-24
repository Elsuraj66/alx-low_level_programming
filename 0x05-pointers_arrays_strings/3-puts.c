#include <stdio.h>
/**
 *puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void puts(char *str)
{
	while (*str)
	putchar(*str++);

	putchar('\n');
}
