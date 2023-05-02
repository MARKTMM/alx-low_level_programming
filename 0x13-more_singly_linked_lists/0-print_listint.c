#include "lists.h"

/**
 * print_listint - Prints the value of each node in a linked list of integers
 *                 and returns the number of nodes in the list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no++;
		h = h->next;
	}

	return (no);
}
