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

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;

	while (current->next != NULL)
		current = current->mext;

	new->prev = current;
	current->next = new;

	return (new);
}
