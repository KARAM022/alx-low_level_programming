#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - hkkh
 * @min: khkh
 * @max: khkhk
 * Return: gkkg
*/

int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);
	for (int i = 0; min <= max; min++, i++)
		result[i] = min;
	return (result);
}
