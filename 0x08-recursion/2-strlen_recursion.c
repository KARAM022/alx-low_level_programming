#include "main.h"
/**
 * _strlen_recursion - hkhkkh
 * @s: hkhkkh
 *
 * Return: hkhkkh
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
