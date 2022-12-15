#include "main.h"

/**
 * print_last_digit - prints the last digitt in a number.
 * @n: number.
 * Return: last digit of n
 */

int print_last_digit(int n)
{

	if (n < 0)
		n = -n;

	_putchar ('0' + (n % 10));

	return (n % 10);
}
