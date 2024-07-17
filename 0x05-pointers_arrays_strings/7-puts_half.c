#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string to print
 * Return: None.
 */

void puts_half(char *str)
{
	int longi = 0;
	int i, n;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		longi++;
	}

	if (longi % 2 == 0)
	{
		n = longi / 2;
	} else
	{
		n = (longi - 1) / 2;
	}

	for (i = n; i < longi; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
