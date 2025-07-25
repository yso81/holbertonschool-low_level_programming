#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: the number to find the factorial of.
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
