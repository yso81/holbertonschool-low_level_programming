#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the number of arguments passed into it.
 *
 * @argc: Number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
