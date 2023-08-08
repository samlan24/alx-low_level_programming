#include "main.h"
#include <stdlib.h>

/**
 * _strdup - uses malloc to duplicate a string
 * @str: string to duplicate
 * Return: returns a pointer when successful
 */

char *_strdup(char *str)
{
	char *d;
	int i, e;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	d = malloc(i * sizeof(*d) + 1);
	if (d == NULL)
		return (NULL);

	for (e = 0; e < i; e++)
		d[e] = str[e];
	d[e] = '\0';

	return (d);
}
