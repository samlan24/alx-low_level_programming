#include "lists.h"

/**
 * list_len - elements in a link
 * @h: the pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
