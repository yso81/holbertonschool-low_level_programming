/**
 * _strlen - Returns the length of a string.
 * @s: The string to measure.
 *
 * Return: The integer length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
