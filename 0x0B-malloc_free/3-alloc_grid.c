#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to athe array else null
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(sizeof(int) * width);

		if (array[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(array[b]);
			free(array);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			array[a][b] = 0;
		}
	}
	return (array);
}
