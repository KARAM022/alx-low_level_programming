#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - hhh
*/

void print_alphabet_x10(void)
{
	char chara_z[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 27; i++)
		{
			_putchar(chara_z[i]);
		}
	}
}
