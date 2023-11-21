#include "lists.h"

/**
 * listint_len - khkhkhkh
 * @h: khkhkhkh
 *
 * Return: khkhkhkh
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	
	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
