#include "main.h"

/**
 * _pow - khkhkhkhk
 * @base: khkhkhkhk
 * @power: khkhkhkhk
 *
 * Return: khkhkhkhk
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= power; a++)
		n *= base;
	return (n);
}

/**
 * print_binary - khkhkhk
 * @n: khkhkhk
 *
 * Return: khkhkhk
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
