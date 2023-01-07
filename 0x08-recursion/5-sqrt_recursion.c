#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a natural number
 * @n: is the number a root is to be found
 * Return: root of the number or -1 on fail.
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	if (root * root == n)
	{
		return (root);
	}

	if (root * root > n)
		return (-1);
	root++;
	return (_sqrt_recursion(n));
}
