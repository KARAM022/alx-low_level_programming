#include <stdio.h>
#include <stdlib.h>

/**
 * main - khkhkh
 * @argc: khhkh
 * @argv: kkfkf
 * Return: 0
*/

int main(int argc, char **argv)
{
	int s;

	if (argc == 3)
	{
		s = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d", s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
