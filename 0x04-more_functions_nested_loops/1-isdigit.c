#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: integer in check
 * Return: 1 if correct and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
