#include <stdio.h>

/**
 * main - Prints the lowercase alphabet followed by a new line.
 *
 * Description: This program uses a while loop and the putchar function
 *              to print each letter from 'a' to 'z'. It then prints a
 *              newline character. Only two calls to putchar are used in
*               the source code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter); /* First use of putchar */
		letter++;
	}

	putchar('\n'); /* Second use of putchar */

	return (0);
}
