#include "main.h"
#include <stdlib.h>

/**
 * _strdup - uses malloc to duplicate a string
 * @str: string to duplicate
 * Return: returns a pointer when successful
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	char *d = (char *)malloc(length + 1);

	if (d == NULL)
		return (NULL);

	for (int i = 0; i <= length; i++)
	{
		d[i] = str[i];
	}

	return (d);
}
