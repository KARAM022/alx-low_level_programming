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
	int td;

	while (fd < 58)
	{
		sd = fd + 1;
		while (sd < 58)
		{
			td = sd + 1;
			while (td < 58)
			{
				putchar(fd);
				putchar(sd);
				putchar(td);
				if (fd != 55 || sd != 56 || td != 57)
				{
					putchar(',');
					putchar(' ');
				}
				td++;
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
