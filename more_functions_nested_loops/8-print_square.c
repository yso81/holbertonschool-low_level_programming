#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square (width and height).
 *
 * Description: If size is 0 or less, the function prints only a newline.
 */
void print_square(int size)
{
	int height, width;

	if (size > 0)
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
