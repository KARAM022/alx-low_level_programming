#include <unistd.h>

/**
 *main - hhhh
 *Return: 1
 */

int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, a, 59);
	return (1);
}
