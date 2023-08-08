#include "main.h"
#include <stdlib.h>

/**
 * _strdup - uses malloc to duplicate a string
 * @str: string to duplicate
 * Return: returns a pointer when successful
 */

char *_strdup(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);

	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	char *duplicated = (char *)malloc(length + 1);

	if (duplicated == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		duplicated[i] = str[i];
	}

	return (duplicated);
}
