#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The string to be processed.
 *
 * Description: This function iterates through a string and prints the
 * character at every even index (0, 2, 4, etc.). It prints a
 * newline character at the end.
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	/* Calculate the length of the string first */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Loop through the string, incrementing by 2 each time */
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
