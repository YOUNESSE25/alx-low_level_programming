#include"lists.h"
#include<stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node index
 * @head: dabel pointer header
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
		{
			curr->next->prev = NULL;
		}
		free(curr);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (curr->next == NULL)
			return (-1);
		curr = curr->next;
	}
	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
