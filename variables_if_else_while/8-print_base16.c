#include <stdio.h>

/**
 * main - Prints all numbers of base 16 (hexadecimal) in lowercase.
 *
 * Description: The program first uses a loop to print the digits '0'
 *              through '9'. It then uses a second loop to print the
 *              letters 'a' through 'f'. Finally, it prints a newline
 *              character. The putchar function is used exactly three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;
	char letter;

	/* Loop to print the numbers 0-9 */
	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0'); /* First use of putchar */
	}

	/* Loop to print the letters a-f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter); /* Second use of putchar */
	}

	putchar('\n'); /* Third use of putchar */

	return (0);
}
