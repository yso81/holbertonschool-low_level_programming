#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 *
 * Description: This function takes a pointer to a null-terminated string
 * and reverses it. The reversal is done in-place, meaning the original
 * string is modified.
 */
void rev_string(char *s)
{
	int i = 0;
	int length = 0;
	char temp;

	/* Find the length of the string, excluding the null terminator */
	while (s[length] != '\0')
	{
		length++;
	}

	/*
	 * Swap characters from the beginning and end of the string,
	 * moving towards the middle. The loop runs up to the halfway point.
	 */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
