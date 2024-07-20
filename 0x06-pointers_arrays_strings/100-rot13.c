#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to encode.
 */
 
char *rot13(char *s)
{
	char *ptr = s;
	char rot_map[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_rep[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i;

	while (*ptr)
	{
		for (i = 0; i < 26; i++)
		{
			if (*ptr == rot_map[i])
			{
				*ptr = rot_rep[i];
				break;
			}
		}
		ptr++;
	}
	return (s);
}
