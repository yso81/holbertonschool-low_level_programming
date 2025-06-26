#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 from 0.
 *
 * Description: This program uses a for loop with an integer variable
 *              to count from 0 to 9. It converts each integer to its
 *              ASCII character representation by adding the value of '0'
 *              before printing with putchar. It avoids using any char
 *              variables and uses putchar exactly twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		/*
		 * This is the first use of putchar.
		 * The ASCII value for '0' is 48, '1' is 49, etc.
		 * By adding the integer `number` to '0', we get the
		 * correct ASCII code for the digit we want to print.
		 */
		putchar(number + '0');
	}

	/* This is the second use of putchar. */
	putchar('\n');

	return (0);
}
