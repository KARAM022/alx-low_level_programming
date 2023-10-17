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
    char d[] = s;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	for (i = len; i >= 0; i--)
	{
		putchar(d[i]);
	}
	putchar('\n');
}
