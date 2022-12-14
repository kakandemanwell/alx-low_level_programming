#include "main.h"

/**
 * _abs - prints the state of an integer n
 * @n: integer
 * Return: 0 always
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-n);
	}
}
