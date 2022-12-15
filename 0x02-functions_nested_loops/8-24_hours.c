#include "main.h"

/**
 * jack_bauer - prints every minute between 00:00 and 23:59
 */

void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;

		while (j < 60)
		{
			j = 0;

			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			j++;
		}
		i++;
	}
}
