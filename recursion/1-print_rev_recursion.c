#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: The string to be printed in reverse.
 *
 * DEscription: This function recursively traverses to the end of the string.
 * As the function calls return, each character is printed resulting in a
 * reverse output.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);
		_putchar(*s);
	
}
