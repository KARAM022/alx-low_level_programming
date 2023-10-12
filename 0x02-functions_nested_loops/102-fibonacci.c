#include <stdio.h>

/**
 * main - Prints first 50 fonacci nbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, s;

	for (count = 0; count < 50; count++)
	{
		s = f1 + f2;
		printf("%lu", s);

		f1 = f2;
		f2 = s;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
