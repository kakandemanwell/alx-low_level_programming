#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square
 * @a: the matrix of integers
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int diagonal1_sum = 0;
	int diagonal2_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagonal1_sum += a[i * size + i];
		diagonal2_sum += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", diagonal1_sum, diagonal2_sum);
}
