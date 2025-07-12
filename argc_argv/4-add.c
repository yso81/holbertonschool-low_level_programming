#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: The count of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program iterates through its arguments, validates that
 * they are composed only of digits, and adds them together. If no
 * arguments are given, it prints 0. If any argument contains a
 * non-digit character, it prints "Error" and exits with status 1.
 *
 * Return: 0 if successful, 1 if an argument is not a valid number.
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
