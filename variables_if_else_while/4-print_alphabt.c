#include <stdio.h>

/**
 * main - Prints the lowercase alphabet, excluding 'q' and 'e'.
 *
 * Description: The program iterates through the letters from 'a' to 'z'.
 *              It uses an if-statement to check if the current letter is
 *              not 'q' and not 'e' before printing it with putchar.
 *              Finally, it prints a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter); /* First use of putchar */
		}
	}

	putchar('\n'); /* Second use of putchar */

	return (0);
}
