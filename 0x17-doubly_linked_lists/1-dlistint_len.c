#include "lists.h"
/**
 * dlistint_len - prints number of elements of dlistint_t list
 *@h: head of the list
 *Return: return the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
