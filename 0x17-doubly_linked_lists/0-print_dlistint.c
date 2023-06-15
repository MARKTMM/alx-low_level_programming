#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t nodes = 0;

	while (head)
	{
		nodes++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (nodes);
}
