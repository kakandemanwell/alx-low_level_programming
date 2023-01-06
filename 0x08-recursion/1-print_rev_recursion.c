#include "main.h"

/**
 * _print_rev_recursion - prints a sttring in reverse
 * @s: the string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	--s;
	_print_rev_recursion(s);
}
