#include "main.h"

/**
 * _strspn - returns number of bytes in s with bytes from accept only.
 * @s: the inital character segment
 * @accept: the charcters in s to count
 * Return: number of charcters in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int n = i + 1;

	while (s[i] != '\0')
	{
		if (*accept == *s)
			i++;
	}
	n++;
	return (n);
}
