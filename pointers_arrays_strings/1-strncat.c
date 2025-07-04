#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: The string to be appended to (destination)
 * @src: The string to append (source)
 * @n: The maximum number of bytes to be used from src
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte. It will use at most n bytes from src.
 * src does not need to be null-terminated if it contains n or more bytes.
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* 1. Find the end of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/*
	 * 2. Append the source string, copying at most n bytes.
	 * The loop continues as long as we haven't reached n bytes AND
	 * we haven't hit the end of the source string.
	 */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* 3. Add the terminating null byte */
	dest[dest_len + i] = '\0';

	/* 4. Return a pointer to the destination string */
	return (dest);
}
