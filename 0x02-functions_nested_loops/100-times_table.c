#include "main.h"

/**
 * print_times_table - Print a times table from 0 to n.
 * @n: The value up to which the times table should be printed.
 */
void print_times_table(int n)
{
    int i, j, k;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            k = i * j;
            if (j == 0)
            {
                _putchar('0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                if (k < 10)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                else if (k < 100)
                {
                    _putchar(' ');
                }
                _putchar((k / 100) + '0');
                _putchar((k / 10 % 10) + '0');
                _putchar((k % 10) + '0');
            }
        }
        _putchar('\n');
    }
}
