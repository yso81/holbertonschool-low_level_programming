#include "main.h"

/**
 * print_sign - Prints the sign of a number and returns a corresponding value.
 * @n: The integer whose sign will be checked.
 *
 * Description: This function determines if an integer is positive,
 * negative, or zero. It prints '+', '-', or '0' respectively.
 *
 * Return: 1 and prints '+' if n is greater than zero
 *         0 and prints '0' if n is zero
 *         -1 and prints '-' if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
