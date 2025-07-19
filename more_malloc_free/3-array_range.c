#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the starting integer value (included)
 * @max: the ending integer value (included)
 *
 * Description: This function creates an array containing all integer
 * values from 'min' to 'max', in that order.
 *
* Return: A pointer to the newly created array.
 *         If min > max or if malloc fails, it returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
