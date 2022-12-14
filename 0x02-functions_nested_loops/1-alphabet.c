#include "main.h"

/**
 * main - prints the alphabets in lower case
 *
 * Return: 0 always as success
 */

void main()

{
	char *letter = 'a';

	while (letter <= 'z')
	{
		_putchar ("%s\n",letter);
		letter++;
	}
}
