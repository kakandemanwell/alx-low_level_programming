#include "main.h"

/**
 * print_rev - prints the reverse string of @s
 * @s: String pointer to reverse.
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	for (end--; end >= s; end--)
	{
		_putchar(*end);
	}
	_putchar('\n');
}
