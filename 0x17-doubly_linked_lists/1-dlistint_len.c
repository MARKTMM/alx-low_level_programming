#include "lists.h"

/**
 * dlistint_len - returns number of elements
 *
 * @head: list head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int count;

	count = 0;

	if (head == NULL)
		return (count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
