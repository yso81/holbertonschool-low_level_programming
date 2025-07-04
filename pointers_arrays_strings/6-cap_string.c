/**
 * cap_string - capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Description: Words are separated by space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: A pointer to the resulting string s.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int new_word_flag;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	new_word_flag = 1; /* Set flag to 1 to capitalize the first word */

	while (s[i] != '\0')
	{
		/* If flag is set and character is a lowercase letter, capitalize it */
		if (new_word_flag && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}

		/*
		 * After checking, reset the flag. The next character is part
		 * of the current word unless we find a separator.
		 */
		new_word_flag = 0;

		/* Check if the current character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				/*
				 * If it is a separator, the next character
				 * should be capitalized. Set the flag.
				 */
				new_word_flag = 1;
				break; /* No need to check other separators */
			}
		}

		i++;
	}

	return (s);
}
