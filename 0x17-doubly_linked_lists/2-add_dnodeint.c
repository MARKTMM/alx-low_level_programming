#include "lists.h"

/**
 * add_dnodeint - adds new node beginning dlistint_t list
 * @h: pointer to first element of list
 * @n: int to set in new node
 * Return: address of new element, or NULL if failed
 **/
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;
	if (*h)
		(*h)->prev = new;
	*h = new;

	return (new);
}
