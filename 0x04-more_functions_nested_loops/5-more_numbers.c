#include "main.h"

/**
 * more_numbers - prints a sequence of numbers 0-14 ten times
 */

void more_numbers(void)
{
	int n;
	int i;

	for (n = 0; n <= 10; n++)
	{

		for (i = 0; i < 15; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
