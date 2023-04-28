#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning of a alinked list
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 * Return: address to new element on success, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
