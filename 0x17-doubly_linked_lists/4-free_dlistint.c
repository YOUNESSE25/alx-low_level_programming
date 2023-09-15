#include<stdlib.h>
#include"lists.h"
/**
 * free_dlistint - free list dlistint
 * @head: pointer head list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *suit;

	while (head != NULL)
	{
		suit = head->next;
		free(head);
		head = suit;
	}
}
