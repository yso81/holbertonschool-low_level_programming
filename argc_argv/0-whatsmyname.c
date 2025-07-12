#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: A program that prints its own name followed by a new line.
 * @argc: Number of command line argumrnts.
 * @argv: An array of strings containing the arguments.
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}

