#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - khkh
 * @s1: khk
 * @s2: khhk
 * @n: khhk
 * Return: khkh
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i, j;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		n = s2_len;
	concatenated = malloc(s1_len + n + 1);
	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';
	return (concatenated);
}
