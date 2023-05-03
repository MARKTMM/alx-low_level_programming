#include "lists.h"

/**
 * free_listint_safe - frees a linked list and sets pointer to NULL
 * @h: pointer to the first node in the linked list
 *
 * This function frees a linked list safely, avoiding infinite loops in case
 * loop in the list. It also sets the pointer to NULL.
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
