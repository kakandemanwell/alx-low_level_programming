#include "main.h"

/**
 * print_line - print a line of n _ characters
 * @n: the number of _ characters in the line
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
		{

			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
