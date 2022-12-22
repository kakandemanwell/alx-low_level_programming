#include "main.h"

/**
 * *_strcpy - copies a string to a destination
 * @dest: destination of copy
 * @src: source of the string
 * Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
