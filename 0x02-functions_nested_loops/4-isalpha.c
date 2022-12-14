#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: is a character to check for
 *
 * Return: returns 1 if succes 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
