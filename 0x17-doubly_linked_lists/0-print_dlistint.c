#include "lists.h"
/**
 *print_dlistint - prints all elemenrs in alinked list
 *@h: pointer to the first element in the list
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
