#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	const char *s = str;
	while (*s)
	{
		len++;
		s++;
	}
	dup_str = malloc(sizeof(char) * (len + 1));
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (s = str; *s != '\0'; s++)
	{
		*dup_str++ = *s;
	}
	*dup_str = '\0';
	dup_str -= len;

	new_node->str = dup_str;
	new_node->len = len;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
