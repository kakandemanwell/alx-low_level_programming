#include "main.h"

/**
 * _isupper - checks the is upper code
 * @c: the character in check.
 * Return: 0 if true, 1 otherwise
 */

int _isupper(int c)
{
	if (c  >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
