#include "lists.h"
/**
*dlistint_len - number of elements in a linked list
*@h: pointer to the first element
*Return: numbee of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
		}
	return (count);
}
