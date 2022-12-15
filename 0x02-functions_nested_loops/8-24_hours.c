#include "main.h"

/**
 * jack_bauer - prints every minute between 00:00 and 23:59
 * @hour: an hour in time
 * @minute: a minute within the timee frame
 * Return: nothing
 */

void jack_bauer(void);
{
	int hour , minute;

	hour = 0;

	while(hour < 24)
	{
		minute = 0;

		while (minute < 60)
		{
			_putchar("%d:%d\n" , hour, minute);
			minute++
		}
		hour++
	}
}




	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			_putchar("%d:%d\n", hour, minute);
		}
	}
}
