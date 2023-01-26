#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to it with a seperator
 * @separator: pointer to a seperator
 * @n: number of arguments/numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int xter;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		xter = va_arg(args, int);
		printf("%d", xter);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
