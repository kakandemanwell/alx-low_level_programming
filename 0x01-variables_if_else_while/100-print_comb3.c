#include <stdio.h>

/**
 * main - prints all two digit combinations
 *
 * Return: 0 Always
 */

int main(void)
{
	int n, p;

	for (n = 48; n <= 56; n++)
	{
		for (p = 49; p <= 57; p++)
		{
			if (p > n)
			{
				putchar(n);
				putchar(p);
				if (n != 56 || p != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
