#include <stdlib.h>
#include "lists.h"

/**
 * list_len - khkhkhkh
 * @h: khkhkhkh
 *
 * Return: khkhkhkh
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
