#include "main.h"

/**
 * *leet - encodes a string into 1337
 * Return: An encoded string.
 */

char *leet(char *s)
{
	char *ptr  = s;
	char leet_map[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";
	int i;

	while (*ptr)
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == leet_map[i])
			{
				*ptr = leet_replace[i];
				break;
			}
		}
		ptr++;
	}
	return (s);
}
