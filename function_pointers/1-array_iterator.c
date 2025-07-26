#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the integer array
 * @size: size of the array
 * @action: pointer to the function to be executed
 *
 * Description: This function iterates through an array and applies the
 * function 'action' to each element.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
