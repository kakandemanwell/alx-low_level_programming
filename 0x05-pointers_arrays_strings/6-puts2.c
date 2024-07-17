#include "main.h"

/**
 * puts2 - prints every other character of a striing,
 * starting with the first character, followed by a new line.
 * @str: pointer to string to print
 * Return: None(void)
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
