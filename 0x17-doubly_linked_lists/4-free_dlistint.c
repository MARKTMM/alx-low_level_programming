#include "lists.h"

/**
 * free_dlistint - dlistint_t list is freed
 *
 * @h: head of list
 * Return: 0
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *tmp;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;

	while ((tmp = h) != NULL)
	{
		h = h->next;
		free(tmp);
	}
}
