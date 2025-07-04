/**
 * leet - encodes a string into 1337.
 * @s: The string to be encoded.
 *
 * Description: Replaces specific letters with numbers:
 * a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1.
 *
 * Return: A pointer to the resulting string s.
 */
char *leet(char *s)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";

	/* Outer loop: iterates through each character of the input string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Inner loop: iterates through the letters to be replaced */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/*
			 * The only allowed 'if' statement.
			 * Checks if the current character from the string
			 * matches a letter that needs to be replaced.
			 */
			if (s[i] == letters[j])
			{
				/*
				 * If a match is found, replace the character
				 * with the corresponding leet character from
				 * the parallel array.
				 */
				s[i] = leet_chars[j];
			}
		}
	}

	return (s);
}
