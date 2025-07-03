#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: The number of elements to print from the array.
 *
 * Description: Numbers are separated by a comma and a space. The output is
 * followed by a new line. Handles cases where n is 0 or negative
 * by printing only a new line.
 */
void print_array(int *a, int n)
{
	int i;

	/* Loop through the array from the first element up to the nth element */
	for (i = 0; i < n; i++)
	{
		/* Print the integer element */
		printf("%d", a[i]);

		/*
		 * Check if the current element is NOT the last one.
		 * If it's not the last, print the comma and space separator.
		 */
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	/* Print a new line at the very end, as required */
	printf("\n");
}
