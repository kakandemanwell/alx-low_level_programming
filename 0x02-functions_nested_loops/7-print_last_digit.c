#include "main.h"

/**
 * print_last_digit - prints the last digitt in a number
 * @n: number
 * Return: digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n % 10);
}
