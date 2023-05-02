#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list of integers.
 *
 * @head: A pointer to a pointer to the first element in the linked list.
 *
 * Return: The data inside the element that was deleted.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int no;

	if (head == NULL || *head == NULL)
		return (0);

	no = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (no);
}
