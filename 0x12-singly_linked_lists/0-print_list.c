#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the element
 * @head: pointer to the head
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", head->len, head->str);
		}

		head = head->next;
		count++;
	}

	return (count);
}
