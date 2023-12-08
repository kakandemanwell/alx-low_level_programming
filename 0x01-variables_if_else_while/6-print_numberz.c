#include <stdio.h>

/**
 * main - prints all single didgit numbers of base 10 from 0
 * uses a custom print function putchar.
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
