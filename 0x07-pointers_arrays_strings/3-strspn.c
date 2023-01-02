#include "main.h"

/**
 * _strspn - returns number of bytes in s with bytes from accept only.
 * @s: the inital character segment
 * @accept: the charcters in s to count
 * Return: number of charcters in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0' && *a != *s)
		{
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		n++;
		s++;
	}
	return (n);
}
