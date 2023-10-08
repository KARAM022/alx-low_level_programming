#include <stdio.h>
/**
 * main - Determines hhh
 *
 * Return: 0
 */

int main(void)
{
	int fd = 0, sd;

	while (fd < 100)
	{
		sd = fd;
		while (sd < 100)
		{
			if (sd != fd)
			{
				putchar((fd / 10) + 48);
				putchar((fd % 10) + 48);
				putchar(' ');
				putchar((sd / 10) + 48);
				putchar((sd % 10) + 48);

				if (fd != 98 || sd != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
