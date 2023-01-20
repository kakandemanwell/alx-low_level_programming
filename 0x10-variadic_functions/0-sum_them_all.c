#include "main.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the parameters of a function.
 * @n: number of the passed parameters
 * Return: he sum, 0 otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list param;

	va_start(params, int);
	int i;
	int sum = 0;

	int p = v_arg(param, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += p;
	va_end(params);

	return (sum);
}
