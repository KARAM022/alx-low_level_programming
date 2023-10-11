#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - hhh
*/
void print_alphabet(void)
{
	char chara_z[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	
	for (i = 0; i < 28; i++)
	{
		_putchar(chara_z[i]);
	}
}
