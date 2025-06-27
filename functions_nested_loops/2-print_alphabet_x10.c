#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times.
 *
 * Description: This function uses nested loops to print the letters
 * 'a' through 'z' on a new line, repeating the process 10 times.
 * It is constrained to use the _putchar function only twice.
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
