#include <stdio.h>

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: A pointer to the string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
