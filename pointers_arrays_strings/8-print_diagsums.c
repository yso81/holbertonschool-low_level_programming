#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the start of the matrix (treated as a 1D array).
 * @size: The size (width and height) of the square matrix.
 *
 * Description: The function calculates the sum of the main diagonal(top-left
 * to bottom-right) and the anti-diagonal (top-right to bottom-left) of a
 * square matrix. The matrix is passed as a flat pointer, and its elements are
 * accessed by calculating their 1D index.
 * The sums are printed to stdout, seperated by a comma and a space.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/*
		 * Main diagonal: elements are at [0][0], [1][1], [2][2], etc.
		 * The 1D index for an element at [i][i] in a matrix of 'size'
		 * is (i * size) + i.
		 */

		sum1 += a[(i * size) + i];

		/*
		 * Anti-diagonal: elements are at [0][size-1], [1][size-2], etc.
		 * The 1D index for an element at [i][size - 1 - i]
		 * is (i * size) + (size - 1 -i).
		 */
		sum2 += a[(i * size) + (size - 1 -i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
