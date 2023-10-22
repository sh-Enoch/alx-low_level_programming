#include "lists.h"
/**
* add_dnodeint - creates a new node and adds infront of the list
* @head: pointer that points to a pointer head
* @n: data
* Return: Address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
