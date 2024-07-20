#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: final word/string
 * @src: string to add to the dest.
 * @n: number of bytes of src to be concatenated to dest.
 * Return: retirns the dest/final string
 */

char *_strncat(char *dest, char *src, int n)
{
        int i = 0;
        int j = 0;


        while (dest[i] != '\0')
        {
                i++;
        }

        while (j < n && src[j] != '\0')
	{
                dest[i] = src[j];
                i++;
		j++;
        }

        dest[i] = '\0';

        return dest;
}

