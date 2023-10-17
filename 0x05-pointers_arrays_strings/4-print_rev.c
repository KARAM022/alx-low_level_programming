#include <stdio.h>
#include "main.h"

/**
 * print_rev - hh
 * @s: ff
 * Return: nothing
*/

void print_rev(char *s)
{

    int i,len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		putchar(s[i] + '0');
	}
	putchar('\n');
}
