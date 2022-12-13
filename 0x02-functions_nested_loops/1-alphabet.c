#include "main.h"

/**
 * man - prints the alphabets in lower case
 * Return: 0 always as success
 * */

int main(void)

{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha ++;
	}
	_putchar("\n");
	return 0;
}
