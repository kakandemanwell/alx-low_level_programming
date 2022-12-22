#include "main.h"

/**
 * rev_string - returns a reversed string.
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c;
	int i = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c = i - 1;
	for (i = 0; i < c; i++)
	{
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
		i++;
		c--;
	}
}
