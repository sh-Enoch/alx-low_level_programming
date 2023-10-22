#include "lists.h"
/**
* add_dnodeint_end - adds node at hte end of a list
* @head:reference pointer to the first list element
* @n: int value
* Return: list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *lastnode = NULL;

	lastnode = malloc(sizeof(dlistint_t));
	lastnode->next = NULL;
	lastnode->n = n;

	if (current == NULL)
	{
		*head = lastnode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = lastnode;
	}
	return (lastnode);
}
