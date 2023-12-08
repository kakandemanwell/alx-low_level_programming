#include <stdio.h>

/**
 * main - prints all possible 3 digit combiantion
 *
 * Return: 0 Always.
 */

int main(void)
{
	int n, p, m;

	for (n = 48; n < 58; n++)
	{
		for (p = 49; p < 58; p++)
		{
			for (m = 50; m < 58; m++)
			{
				if (m > p && p > n)
				{
					putchar(n);
					putchar(p);
					putchar(m);
					if (n != 55 || p != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
