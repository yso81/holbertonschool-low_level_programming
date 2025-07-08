/**
 * _strspn - Gets the lemgth of a prefix substring.
 * @s: The strimg to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s whic consist only of
 * bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j;
	int found_match;

	for (i = 0; s[i] != '\0'; i++)
	{
		found_match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break;
			}
		}
		if (found_match == 0)
		{
			/*
			 * If the inner loop finished without finding a match,
			 * the character s[i] is not in the accept string.
			 * The prefix span is broken, so we return the current count.
			 */
			return (bytes);
		}
		else
		{
			/*
			 * The character was found in accept, we increment our byte count
			 * and continue to the next character in s.
			 */
			bytes++;
		}
	}
	return (bytes);
}
