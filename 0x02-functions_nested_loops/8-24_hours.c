#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 * Return: Nothing
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			printf("%02d:%02d\n", a, b);
		}
	}
}
