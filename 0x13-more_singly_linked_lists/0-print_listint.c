#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - khkhhk
 * @h: khkhhk
 *
 * Return: khkhhk
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	
	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);
}
