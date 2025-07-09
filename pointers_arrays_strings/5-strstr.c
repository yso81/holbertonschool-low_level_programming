#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to find.
 *
 * Description: This function finds the first occurrence of the substring
 * 'needle' in the string 'haystack'. The terminating null bytes ('\0')
 * are not compared.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 *         if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_ptr;
	char *n_ptr;

	/* If needle is an empty string, return haystack as per standard behavior */
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		h_ptr = haystack;
		n_ptr = needle;

		/* Check for a match starting at the current haystack position */
		while (*n_ptr != '\0' && *h_ptr == *n_ptr)
		{
			h_ptr++;
			n_ptr++;
		}

		/* If we reached the end of the needle, it means we found a full match */
		if (*n_ptr == '\0')
		{
			return (haystack); /* Return pointer to start of match in haystack */
		}

		haystack++; /* Move to the next character in haystack to continue search */
	}

	return (NULL); /* Substring not found */
}
