#include "main.h"

/**
 * print_times_table - prints the multiplications of n
 * @n: integer
 */

void print_times_table(int n)
{
        int row;
        int column;
        int num;

        for (row = 0; row <= n; row++)
        {
                for (column = 0; column <= n; column++)
                {
                        num = (row * column);

                        if (column == 0)
                        {
                                _putchar('0' + num);
                        }
                        else if (num <= n)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
                                _putchar('0' + num);
                        }
                        else if (num > n)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar('0' + (num / 10));
                                _putchar('0' + (num % 10));
                        }
                }
                _putchar('\n');
        }
}

