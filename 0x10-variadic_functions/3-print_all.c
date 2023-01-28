#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type list of input argument passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *string;
	char abv = format[i];

	va_start(args, format);

	while (abv)
	{
		if (abv == 'c')
			printf("%c", (char)va_arg(args, int));
		else if (abv == 'i')
			printf("%d", va_arg(args, int));
		else if (abv == 'f')
			printf("%f", va_arg(args, double));
		else if (abv == 's')
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("(nil)");
			else
			{
				printf("%s", string);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
