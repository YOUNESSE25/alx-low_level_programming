#include"lists.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at position
 * @h: double pointer first list
 * @idx: index
 * @n: elemnt to add
 * Return: pointer or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw, *nt, *curr;
	unsigned int i;

	if (idx != 0)
	{
		curr = *h;
		for (i = 0; i < idx - 1 && curr != NULL; i++)
			curr = curr->next;
		if (curr == NULL)
			return (NULL);
	}
	if (h == NULL)
		return (NULL);

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	if (idx == 0)
	{
		nt = *h;
		*h = nw;
		nw->prev = NULL;
	}
	else
	{
		nw->prev = curr;
		nt = curr->next;
		curr->next = nw;
	}
	nw->next = nt;
	if (nw->next != NULL)
		nw->next->prev = nw;
	return (nw);
}
