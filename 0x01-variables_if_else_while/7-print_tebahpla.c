#include <stdio.h>

/**
 * main - prints the lower case alphabets in reverse using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
