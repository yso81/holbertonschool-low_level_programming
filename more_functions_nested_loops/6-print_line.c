#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 *
 * Description: If n is 0 or less, the function prints only a newline.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
