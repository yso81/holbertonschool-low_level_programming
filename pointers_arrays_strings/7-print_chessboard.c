#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: 8x8 array representing the board.
 *
 * Description: This function takes a pointer to an 8x8 array of characters and
 * prints its content to the standard output, row by row. Each row is followed
 * by a new line.
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
