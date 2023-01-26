#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a number of string argumnets
 * @separator: character seperating the strings
 * @n: number of string argumnents passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	char *xter;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		xter = va_arg(args, char *);

		if (xter == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", xter);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
