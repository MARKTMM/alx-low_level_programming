#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of dlistint_t linked list
 * @h: pointer to list
 * @index: nth node
 * Return: nth node, if node doesn't exist, returns NULL
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	dlistint_t *node = h;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}
