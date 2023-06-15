#include "lists.h"

/**
 * sum_dlistint - Sums all data of dlistint_t list
 * @h: head of dlistint_t list
 *
 * Return: sum of all data.
 */
int sum_dlistint(dlistint_t *h)
{
	int sum = 0;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}

	return (sum);
}
