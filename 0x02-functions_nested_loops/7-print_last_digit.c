#include "main.h"

/**
 * print_last_digit - prints the last didgit of a number
 * @n: number to print last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = -n;
	d = n % 10;
	if (d < 0)
		d = -d;
	_putchar(d + '0');
	return (d);
}
