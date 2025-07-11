#include <stdio.h>

int is_prime_helper(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not.
 * @n: number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n / 2));
}

/**
 * is_prime_number - recursively checks if a number is prime.
 * @n: number to evaluate.
 * @i: iterator.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}
