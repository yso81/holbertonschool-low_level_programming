#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: The function prints a multiplication table from 0x0 to 9x9.
 * Numbers are aligned in columns, separated by a comma and space.
 * Single-digit products are padded with an extra space for alignment.
 *
 * Return: void (The function does not return a value).
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			/* Print separator and padding for columns after the first one */
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' '); /* Extra space for alignment */
			}

			/* Print the product's digits */
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
