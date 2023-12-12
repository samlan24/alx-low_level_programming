#include "lists.h"
/**
 * print_listint - prints all elements in a list
 * @h: pointer to the node
 * Return: returns all elements in a list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count)
}
