#include "main.h"

/**
 * print_sign - prints the sogn of a number
 *
 * @n: the number whose sign is to be checked
 * Return: 1, 0, -1 for positive, zero and negativ values.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
