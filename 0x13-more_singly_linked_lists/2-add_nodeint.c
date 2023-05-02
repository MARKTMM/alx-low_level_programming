#include "lists.h"

/**
 * add_nodeint - Ads fresh node at the beginning of a linked list of integers.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh = malloc(sizeof(listint_t));

	if (fresh == NULL)
	{
		return (NULL);
	}

	fresh->n = n;
	fresh->next = (*head);
	(*head) = fresh;

	return (fresh);
}
