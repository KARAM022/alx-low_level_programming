#include <stdio.h>
#include "main.h"

/**
 * print_sign - hhhh
 * @n: hhhh
 * Return: 1 or 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
