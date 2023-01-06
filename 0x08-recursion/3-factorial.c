#include "main.h"

/**
 * factorial - prints the factorial of a number n
 * @n: the number
 * Return: factorial of a numbet
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
