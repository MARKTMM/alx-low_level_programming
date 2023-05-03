#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the node where the loop starts, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle = head;
	listint_t *rabbit = head;

	if (!head)
		return (NULL);

	while (turtle && rabbit && rabbit->next)
	{
		rabbit = rabbit->next->next;
		turtle = turtle->next;

		if (rabbit == turtle)
		{
			turtle = head;

			while (turtle != rabbit)
			{
				turtle = turtle->next;
				rabbit = rabbit->next;
			}

			return (rabbit);
		}
	}

	return (NULL);
}
