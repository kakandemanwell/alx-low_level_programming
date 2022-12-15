#include "main.h"

/**
 * jack_bauer - prints every minute between 00:00 and 23:59
 */

void jack_bauer(void)
{
	int i = 0, j = 0;

	while (i < 24)
	{

		while (j < 60)
		{

			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));

			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
