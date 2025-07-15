#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicate string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
