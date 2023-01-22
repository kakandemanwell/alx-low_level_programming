#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the parameters of a function.
 * @n: number of the passed parameters
 * Return: he sum, 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)

		unsigned int p = va_arg(args, int);

		sum += p;

	va_end(args);

	return (sum);
}
