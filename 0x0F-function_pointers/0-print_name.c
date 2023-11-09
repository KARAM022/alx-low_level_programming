#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - HKKHKH
 * @name: HKKHKH
 * @f: HKKHKH
 * Return: HKKHKH
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
