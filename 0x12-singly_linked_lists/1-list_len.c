#include "lists.h"
#include <stdlib.h>

/**
 * list_len - elements in a link
 * @h: the pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
