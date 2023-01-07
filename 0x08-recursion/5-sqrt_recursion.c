#include "main.h"

/**
 * find_root - iterates through numbers to find the root of n
 * @n: is the number a root is to be found
 * Return: root of the number or -1 on fail.
 * @root: the square root of n
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of a naturalnumber
 * @n: the number/integer
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
