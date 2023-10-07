#include <stdio.h>
/**
 * main - Determines hhh
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fd = 48;
	int sd;

	while (fd < 58)
	{
		sd = fd + 1;
		while (sd < 58)
		{
			putchar(fd);
			putchar(sd);
			if (fd != 56 || sd != 57)
			{
				putchar(',');
				putchar(' ');
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
