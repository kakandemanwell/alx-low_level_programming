#include "main.h"

/**
 * jack_bauer - prints every minute between 00:00 and 23:59
 * @i:  hour in time
 * @j: a minute within the timee frame
 * Return: nothing
 */

void jack_bauer(void);
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			_putchar("%d:%d\n", i, j);
			j++
		}
		i++
	}
}
