#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at index
 * @head: pointer's head
 * @index: index of the node
 * Return: null or node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == size)
	return (temp);
	size++;
	temp = temp->next;
	}
	return (NULL);
}
