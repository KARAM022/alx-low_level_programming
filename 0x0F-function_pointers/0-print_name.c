#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - khkhkh
 * @name: khkhkh
 * @f: khkhkh
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
	{
		return (void);
	}

}
