#include "lists.h"
/**
 * dlistint_len - returns the numbers of nodes
 * @h: the head of the list
 * Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count)
}
