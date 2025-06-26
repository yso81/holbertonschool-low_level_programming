#include <stdio.h>

/**
 * main - Prints single-digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
