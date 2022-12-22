#include "main.h"

/**
 * reset_to_98 - resets the value of a poimter to 98
 *
 * @n: the integer pointer
 * Return: 0 Always
 */

void reset_to_98(int *n)
{
	int p;
	*n = &p;

	*n = 98;
}
