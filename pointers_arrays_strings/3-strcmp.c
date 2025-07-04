/**
 * _strcmp - compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return:
 *   An integer less than 0 if s1 is less than s2.
 *   0 if s1 is equal to s2.
 *   An integer greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
