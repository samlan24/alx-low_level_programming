#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of a list
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
