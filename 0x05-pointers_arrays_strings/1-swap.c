#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: one of the values to swap
 * @b: the second value to swap
 *
 * Return: Always None.
 */

void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
