/**
 * _strncpy - copies a string, works exactly like strncpy
 * @dest: The destination buffer to copy the string to.
 * @src: The source string to be copied.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*
	 * Copy characters from src to dest, up to n characters
	 * or until the end of src is reached.
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/*
	 * If the end of src was reached before n characters were copied,
	 * fill the remainder of dest with null terminators.
	 */
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
