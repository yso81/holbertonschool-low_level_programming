#include <stdio.h>

/**
 * main - Prints all single-digit numbers separated by a comma and space.
 *
 * Description: The program iterates through numbers 0-9. For each number,
 *              it prints the digit. If the digit is not the last one (9),
 *              it also prints a comma and a space. Finally, it prints a
 *              newline character. This is achieved without using any char
 *              variables and with a maximum of four putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0'); /* First putchar: prints the digit */

		if (number != 9)
		{
			putchar(','); /* Second putchar: prints the comma */
			putchar(' '); /* Third putchar: prints the space */
		}
	}

	putchar('\n'); /* Fourth putchar: prints the newline */

	return (0);
}
