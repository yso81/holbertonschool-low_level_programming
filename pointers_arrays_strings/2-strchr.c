#include <stddef.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to find.
 *
 * Return: A pointer  to the first to the first occurence of the character c in
 * the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		s++;
	}

	/*
	 * After the loop, s points to the null terminator.
	 * We need to check if the character (c) was the null terminator.
	 */
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
