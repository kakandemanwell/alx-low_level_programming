#include "main.h"

/**
 * print_last_digit - prints the last digitt in a number.
 * @n: number.
 * @digit: last digit in n.
 * Return: 0 at all times.
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	int digit = n % 10;

	_putchar(digit + digit);

	return (0);
}
