#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string whose second half is to be printed.
 *
 * Description: This function calculates the middle point of a string.
 * For an even number of characters, it prints from the halfway point onward.
 * For an odd number, it prints the last n characters as defined in the prompt.
 * The output is followed by a new line.
 */
void puts_half(char *str)
{
	int len = 0;
	int start_index;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		start_index = len / 2;
	}
	else
	{
		/*
		 * If len = 9, n = (9 + 1) / 2 = 5.
		 * We want the last 5 characters. "Holberton" -> "erton".
		 * The starting index is 4. (9-1)/2 = 4.
		 */
		start_index = (len - 1) / 2 + 1;
	}

	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
