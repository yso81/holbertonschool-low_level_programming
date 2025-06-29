#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting integer from which to print.
 *
 * Description: Numbers are separated by a comma and a space.
 * The printing sequence can be in increasing or decreasing order.
 * The last number printed is 98, followed by a new line.
 *
 * Return: void (The function does not return a value).
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
