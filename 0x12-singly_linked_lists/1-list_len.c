#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @head: pointer to the list
 *
 * Return: number of element
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}

	return (count);
}
