#include "main.h"

/**
 * print_times_table - hhhh
 * @n: fff
 */
void print_times_table(int n)
{
	int i, j, k;
    int cont = n + 1;

	for (i = 0; i < cont; i++)
	{
		for (j = 0; j < cont; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
