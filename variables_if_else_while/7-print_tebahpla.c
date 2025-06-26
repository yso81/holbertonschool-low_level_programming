#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Description: The program uses a for loop to iterate from the character
 *              'z' down to 'a'. In each iteration, it prints the current
 *              letter using putchar. After the loop, it prints a newline
 *              character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter); /* First use of putchar */
	}

	putchar('\n'); /* Second use of putchar */

	return (0);
}
