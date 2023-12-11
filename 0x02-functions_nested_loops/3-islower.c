#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character in check.
 * Return: 1 if c is a lowercase character, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
