#include "lists.h"

/**
 * add_dnodeint_end - adds new node end dlistint_t list
 * @h: pntr to head of dlistint_t list
 * @n: The integer for new node to contain
 *
 * Return: function fails - NULL
 *         Or - the address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
		return (new);
	}

	last = *h;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;

	return (new);
}
