#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - khkhk
 * @b: hkh
 * Return: khkhk
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
