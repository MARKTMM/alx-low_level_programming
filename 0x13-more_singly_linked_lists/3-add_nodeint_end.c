#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list of integers.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *temp;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
	{
		return (NULL);
	}

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = fresh;

	return (fresh);
}
