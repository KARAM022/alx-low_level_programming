#include <stdio.h>

/**
 * main - Determines if a number is positive. negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c = c - 1;
	}
	putchar('\n');
	return (0);
}
