#include <stdio.h>

/**
 *main - prints the alphabets minus the characters e & q
 *
 *Return: 0 always
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'e' && c != 'q')
			putchar("%c", c);
	putchar("\n");
	return (0);
}
