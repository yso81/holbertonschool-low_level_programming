#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9, excluding 2 and 4.
 *
 * Description: Prints numbers followed by a new line.
 */
void print_most_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(digit + '0');
		}
	}
	_putchar('\n');
}
