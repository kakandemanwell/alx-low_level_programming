#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a statement with write
 * Return: returns 1 always upon success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
