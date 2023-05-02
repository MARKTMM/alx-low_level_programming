#include "lists.h"

/**
 * listint_len - Return the number of element in a linked list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes list.
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		no++;
		h = h->next;
	}

	return (no);
}
