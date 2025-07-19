#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes
 * @s1: the first string (destination)
 * @s2: the second string (source)
 * @n: the maximum number of bytes to take from s2
 *
 * Description: This function allocates a new space in memory which
 * contains the contents of s1, followed by the first n bytes of s2,
 * and is null-terminated.
 *
 * Return: A pointer to the newly allocated string.
 *         If memory allocation fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}
