#include <stdio.h>
#include "main.h"

/**
 * _puts - hh
 * @str: jjj
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
