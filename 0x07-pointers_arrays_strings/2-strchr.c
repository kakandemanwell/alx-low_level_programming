#include "main.h"

/**
 * _strchr - returns a pointer of a defined character in a string
 * @s: pointer to a chracter in memory
 * @c: the character in a string to define
 * Return: returns the pointer s or null if fail
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		else
		{
		return (0);
		}
		s++;
	}
	return (0);
}
