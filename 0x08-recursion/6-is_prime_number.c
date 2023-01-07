#include "main.h"

/**
 * primer - identifies a prime number
 * @n: integer
 * @divider: a diviser to identify the prime number
 * Return: 1 if n is prime
 */

int primer(int n, int divider)
{
	if (n == divider)
		return (1);
	if (n % divider == 0)
		return (0);
	return (primer(n, divider + 1));
}
/**
 * is_prime_number - identifies a prime number
 * @n: integer
 * Return: 1 for pass, 0 otherwise
 */

int is_prime_number(int n)
{
	int divider = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (primer(n, divider));
}
