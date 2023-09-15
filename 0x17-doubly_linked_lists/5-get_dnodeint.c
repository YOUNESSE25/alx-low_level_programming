#include"lists.h"
#include<stdlib.h>
/**
 * get_dnodeint_at_index -  the nth node of a dlistint_t linked list.
 * @head: pointer header list
 * @index:  index
 * Return: pointer or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	
	if (index == 0)
		return (head);
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
