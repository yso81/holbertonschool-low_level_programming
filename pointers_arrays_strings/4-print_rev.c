#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	/* 1. Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/*
	 * 2. Loop from the last character (len - 1) down to the first (0).
	 *    The index `i` will start at the last valid character.
	 */
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/* 3. Print the final newline character */
	_putchar('\n');
}
