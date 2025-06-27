#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description: print alphabet a-z
 * followed by a new line
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
