#include "main.h"

/**
 * _puts_recursion - prints a character followed by a new line.
 * @s: characters in a string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
