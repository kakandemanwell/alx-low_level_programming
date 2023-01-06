#include "main.h"

/**
 * _pow_recursion - prints the vlue of x to the power y
 * @x: the number to raise to a power y
 * @y: the power to which x is to be raised
 * Return: powered number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
