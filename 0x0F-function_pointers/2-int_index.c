#include "function_pointers.h"
/**
 * int_index - hkhkkhk
 * @array: hkhkkhk
 * @size: hkhkkhk
 * @cmp: hkhkkhk
 * Return: hkhkkhk
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);


	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
