#include "main.h"

/**
 * print_last_digit - prints the last digitt in a number.
 * @n: number.
 * Return: 0 at all times.
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10
	if (a < 0)
		a = -a;

	_putchar (a + '0');

	return (a);
}
