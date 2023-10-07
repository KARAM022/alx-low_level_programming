#include <stdio.h>
/**
 * main - Determines hhh
 *
 * Return: Always 0 (Success)
 */

int main() {
	int fd = 48;
	int sd;

	while (fd < 58)
	{
		sd = fd + 1;
		while (sd < 58) {
			putchar(fd);
			putchar(sd);
			if (fd != 57 || sd != 58) {
				putchar(',');
				putchar(' ');
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return 0;
}
