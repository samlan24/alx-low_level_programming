#include "main.h"

/**
 * _strlen - returns the string's length
 * @s: string to work on
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
