#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int len_t = 0;
	int i, j, p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len_t += _strlen(av[i]);

	len_t += (ac + 1);
/*accounts for the number of spaces and the null terminator*/

	concat = malloc(sizeof(char) * len_t);

	if (concat == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
			concat[p++] = av[i][j];
		concat[p++] = '\n';
	}
	return (concat);
}
