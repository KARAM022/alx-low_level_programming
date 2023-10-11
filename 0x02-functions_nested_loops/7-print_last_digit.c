#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - hhh
 * @n: hh
 * @b: hh
 * Return: Void
*/

int print_last_digit(int n)
{
    int b;
    if (n < 0)
    {
        b = -1 * (n % 10);
    }
    else
    {
        b = n % 10;
    }
	_putchar(b + '0');
	return (b);
}
