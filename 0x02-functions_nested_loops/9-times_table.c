#include "main.h"

/**
 * times_table - prints the 9 multiplications in a table
 */

void times_table(void)
{
	int row;
	int column;
	int num;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			num = (row * column);

			if (column == 0)
			{
				_putchar('0' + num);
			}
			else if (num <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + num);
			}
			else if (num > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (num / 10));
				_putchar('0' + (num % 10));
			}
		}
		_putchar('\n');
	}
}
