#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive. negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int nld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nld = n % 10;
	if (nld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n ,nld);
	}
	else if (nld == 0)
	{
		printf("Last digit of %d is %d and is 0\n",n ,nld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n ,nld);
	}
	return (0);
}