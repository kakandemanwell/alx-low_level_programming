#include "main.h"

/**
 * print_square - prints a # square
 * @size: size of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int height;
		int width;

		for (height = 1; height <= size; height++)
		{
			for (width = 1; width <= size; width++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
