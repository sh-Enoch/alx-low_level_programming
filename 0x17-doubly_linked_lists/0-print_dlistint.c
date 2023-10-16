#include "lists.h"
/**
*print_dlistint - prints all elemenrs in alinked list
*@dlistint_t *h: pointer to the first element in the list
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h);
{
    dlistint_t * current = head;
    int count = 0;

    while (current != NULL)
    {
        count++;
	current = current->next;
    }

    return count;
}
