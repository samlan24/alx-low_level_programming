#include "main.h"
#include <stdlib.h>

/**
 * str_concat - uses malloc to concate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
