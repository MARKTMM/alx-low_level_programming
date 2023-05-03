#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 * @head: pointer to the first node in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Declare variables */
	listint_t *current_node = *head;
	listint_t *previous_node = NULL;
	unsigned int current_index = 0;

	/* If the list is empty, return failure */
	if (*head == NULL)
		return (-1);

	/* If the first node is to be deleted, update head and free the node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	/* Traverse the list to find the node before the node to be deleted */
	while (current_node != NULL && current_index < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		current_index++;
	}

	/* If the index is invalid or the node to be deleted is not found, return  */
	if (current_node == NULL)
		return (-1);

	/* Update the pointers and free the node */
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}

