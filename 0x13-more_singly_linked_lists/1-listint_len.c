#include "lists.h"
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: pointer to the node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);

