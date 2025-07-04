/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: The string to be modified.
 *
 * Return: A pointer to the resulting string s.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		/* Check if the character is a lowercase letter */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/*
			 * Convert to uppercase by subtracting the ASCII difference
			 * between lowercase and uppercase letters (e.g., 'a' - 'A').
			 */
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
