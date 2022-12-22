#include "main.h"

/**
 * rev_string - returns a reversed string.
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[1];
		s[1] = s[c];
		s[c] = rev;
	}
	_putchar('\n');
}
