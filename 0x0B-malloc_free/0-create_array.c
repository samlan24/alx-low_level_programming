#include "main.h"
#include <stdlib.h>

/**
 * create_array - return an array of chars
 * @size: size of the array
 * @c: char to initialize
 * Return: returns a pointer when successful
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	*(p + i) = '\0';

	return (p);
}
