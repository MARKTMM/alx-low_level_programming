#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node
 * @head: double pointer to the list
 * @str: put in the new node
 *
 * Return: address of the new elements, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t str_len;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(str_len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->str, str);
	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
