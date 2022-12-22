#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int r = *a;

	*a = *b;
	*b = r;
}
