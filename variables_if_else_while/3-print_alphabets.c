#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then in uppercase.
 *
 * Description: The program uses two separate while loops. The first loop
 *              iterates from 'a' to 'z' to print the lowercase alphabet.
 *              The second loop iterates from 'A' to 'Z' to print the
 *              uppercase alphabet. Finally, it prints a newline character.
 *              The putchar function is used exactly three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_letter = 'a';
	char upper_letter = 'A';

	/* Loop to print lowercase alphabet */
	while (lower_letter <= 'z')
	{
		putchar(lower_letter); /* First use of putchar */
		lower_letter++;
	}

	/* Loop to print uppercase alphabet */
	while (upper_letter <= 'Z')
	{
		putchar(upper_letter); /* Second use of putchar */
		upper_letter++;
	}

	putchar('\n'); /* Third use of putchar */

	return (0);
}
