#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each letter of a string 's'
 * until the null terminator is reached. Then it prints a new line character.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
