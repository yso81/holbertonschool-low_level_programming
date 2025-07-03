#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: This function parses a string, skipping any non-digit
 * characters at the beginning. It accounts for any '+' and '-' signs
 * preceding the number to determine its sign. The conversion stops
 * when the first non-digit character is encountered after the number has
 * started.
 *
 * Return: The converted integer. If no valid number is found, returns 0.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int result;
	int digit_found;

	i = 0;
	sign = 1;
	result = 0;
	digit_found = 0;

	while (s[i] != '\0')
	{
		/* Handle signs before any digits are found */
		if (s[i] == '-')
		{
			sign *= -1;
		}

		/* If a character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit_found = 1;
			/*
			 * Build the number.
			 * (s[i] - '0') converts the char '5' to the int 5.
			 * result * 10 shifts the existing number to the left.
			 */
			result = (result * 10) + (s[i] - '0');
		}
		else if (digit_found == 1)
		{
			/*
			 * If we have already found digits and encounter a
			 * non-digit, the number has ended.
			 */
			break;
		}
		i++;
	}

	/* Apply the calculated sign to the final result */
	return (result * sign);
}
