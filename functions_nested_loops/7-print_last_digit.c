#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The integer to be processed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	/*
	 * The modulo of INT_MIN (-2147483648) is -8.
	 * This calculation remains valid and does not cause overflow.
	 */
	last_digit = n % 10;

	if (last_digit < 0)
	{
		/* Convert the negative digit to a positive one */
		last_digit = last_digit * -1;
	}

	/* Print the character representation of the digit */
	_putchar(last_digit + '0');

	return (last_digit);
}
