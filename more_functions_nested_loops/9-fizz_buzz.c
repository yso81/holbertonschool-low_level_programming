#include <stdio.h>

/**
 * main - The Fizz-Buzz test.
 *
 * Description: This program prints the numbers from 1 to 100. For multiples
 * of three, it prints "Fizz". For multiples of five, it prints "Buzz".
 * For numbers which are multiples of both three and five, it prints "FizzBuzz"
 * Each number or word is separated by a space, and the output is followed
 * by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
