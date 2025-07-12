#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program loops through and prints every command-line
 * argument, including the name of the program. Each argument is followed by a
 * new line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
