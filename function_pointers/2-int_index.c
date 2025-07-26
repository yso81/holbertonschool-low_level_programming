#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the function used to compare values
 *
 * Description: This function iterates through an array and uses the cmp
 * function to check each element. It returns the index of the first
 * element for which the cmp function does not return 0.
 *
 * Return: The index of the first matching element, or -1 if no match is
 * found or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
