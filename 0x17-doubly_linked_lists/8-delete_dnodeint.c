#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t list
 * @h: pointer to list
 * @index: position of node to delete
 * Return: 1 if it succeeds, -1 if it fails
 **/
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *aux_node = *h;
	dlistint_t *node_to_delete = *h;
	unsigned int idx;
	unsigned int cont = 0;

	/* border case for empty list */
	if (!(*h))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*h = node_to_delete->next;
		free(node_to_delete);
		if (*h)
			(*h)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	/* general case */
	if (cont == idx && aux_node)
	{
		node_to_delete = aux_node->next;
		if (node_to_delete->next)
			node_to_delete->next->prev = aux_node;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
