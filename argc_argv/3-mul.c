#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: The count of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Description: This program checks if it has received exactly two arguments.
 * If so, it converts them to integers, multiplies them, and prints the
 * result. Otherwise, it prints "Error" and returns 1.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
