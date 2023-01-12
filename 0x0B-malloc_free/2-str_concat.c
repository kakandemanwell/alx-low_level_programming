#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return:  concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concat;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	concat = malloc(sizeof(char) * (i + j + 1));
	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; (j = 0); i++, j++)
	{
		concat[i] = s1[i];
		concat[j] += s2[j];
	}
	return (concat);
}
