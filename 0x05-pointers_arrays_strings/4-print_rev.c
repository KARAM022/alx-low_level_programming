#include <stdio.h>
#include "main.h"

/**
 * print_rev - hh
 * @s: ff
 * Return: nothing
*/

void print_rev(char *s)
{

    int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	putchar('\n');
}
