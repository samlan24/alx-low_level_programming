#include "lists.h"

/**
 * add_dnodeint_end - adds anew node at the end of the list
 * @head: list's head
 * @n: value of the node
 * Return: returns the node's address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	current = *head;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = current;

	return (new);
}
