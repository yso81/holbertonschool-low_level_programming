#include <stdio.h>

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root of.
 *
 * Return: the resulting square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recurses to find the natural square root of a number.
 * @n:  number to calculate the sqaure root of.
 * @i: iterator.
 *
 * Return: the resulting square root.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}
