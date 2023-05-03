#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	int diff;
	listint_t *temp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = (int)(*head) - (int)(*head)->next;
		if (diff > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}

	*head = NULL;

	return (count);
}
