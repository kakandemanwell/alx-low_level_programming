#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a copy of an input parameter
 * @str: a string parameter
 * Return: returns a pointer to a newly allocated copy of str.
 */

char *_strdup(char *str)
{
	int i;
	char *copy;

	copy  = malloc((sizeof(char) * strlen(str)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (copy == NULL)
	{
		return (NULL);
	}
/*copying every caharacter in str iteratively.*/
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
