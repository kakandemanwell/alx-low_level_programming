#include "main.h"

/**
 * main - prints the alphabets in lower case
 *
 * Return: 0 always as success
 */

int alphabet()

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter ++;
	}
	_putchar("\n");
}
