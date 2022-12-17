#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number of \ characters in he diagonal
 */

void print_diagonal(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
