#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be processed.
 *
 * Description: This function takes an integer and returns its
 * absolute value. For example, the absolute value of -5 is 5,
 * and the absolute value of 5 is 5.
 *
 * Return: The absolute value of the integer n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
