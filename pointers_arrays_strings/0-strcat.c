#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to be appended to.
 * @src: The source string to append.
 *
 * Description: This function appends the `src` string to the `dest` string,
 * overwriting the terminating null byte (\0) at the end of `dest`, and then
 * adds a terminating null byte. The `dest` buffer must have enough space
 * to hold the result.
 *
 * Return: A pointer to the resulting string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* 1. Find the end of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*
	 * 2. Append the source string to the destination string,
	 * starting at the null terminator of dest.
	 */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* 3. Add the terminating null byte to the end */
	dest[dest_len + i] = '\0';

	/* 4. Return a pointer to the destination string */
	return (dest);
}
