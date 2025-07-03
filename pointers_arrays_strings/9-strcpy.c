#include "main.h"

/**
 * _strcpy - Copies a string from a source to a destination.
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Also copy the null terminator */
	dest[i] = '\0';

	return (dest);
}
