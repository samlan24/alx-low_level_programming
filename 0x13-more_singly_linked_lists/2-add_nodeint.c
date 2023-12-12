#include "main.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to node
 * @n: content
 * Return: address of new node
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
