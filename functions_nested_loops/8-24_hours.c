#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 * Description: This function prints the time from 00:00 to 23:59,
 * one minute at a time, followed by a new line.
 *
 * Return: void (The function does not return a value).
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			/* Print the first digit of the hour */
			_putchar((hour / 10) + '0');
			/* Print the second digit of the hour */
			_putchar((hour % 10) + '0');

			_putchar(':');

			/* Print the first digit of the minute */
			_putchar((minute / 10) + '0');
			/* Print the second digit of the minute */
			_putchar((minute % 10) + '0');

			_putchar('\n');
		}
	}
}
