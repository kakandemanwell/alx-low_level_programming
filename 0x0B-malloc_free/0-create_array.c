#include "main.h"
#include <stdlib.h>

/**
 * *create_array - returns an array of chars initialized with a specific char
 * @size: size of the array
 * @c: char
 * Return: a pointer or null if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *created_array;

	if (size == 0)
	{
		return (NULL);
	}

	created_array = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		created_array[i] = c;
	}
	return (created_array);

	if (created_array == NULL)
	{
		return (NULL);
	}
	free(created_array);
}
