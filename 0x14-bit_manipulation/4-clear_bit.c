#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - khkhkhkkh
 * @n: khkhkhkkh
 * @index: khkhkhkkh
 * Return: khkhkhkkh
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
