#include "main.h"
/**
 * _memcpy - khkhkhkh
 * @dest: khkhkhkh
 * @src: khkhkhkh
 * *@n: khkhkhkh
 *
 * Return: khkhkhkh
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
