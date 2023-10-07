#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ld;
	int nld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld < 0)
	{
		nld = -ld;
	}
	else
	{
		nld = ld;
	}
	
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
	
	
	
	/* your code goes there */
	return (0);
}