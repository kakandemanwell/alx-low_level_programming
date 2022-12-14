#include "main.h"

/**
 * print_last_digit - prints the last digitt in a number.
 * @n: number.
 * Return: 0 at all times.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	_putchar (n % 10);
	_putchar ("\n");
	return (n % 10);
}
