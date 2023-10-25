#include "main.h"
/**
 * _memset - khkhkkh
 * @s: khkhkkh
 * @b: khkhkkh
 * @n: khkhkkh
 *
 * Return: khkhkkh
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
