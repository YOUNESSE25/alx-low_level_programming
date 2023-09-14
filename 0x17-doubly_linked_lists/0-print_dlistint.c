#include<stdio.h>
#include "lists.h"
/**
 * print_dlistint - print dlistint list elements
 * @h: pointr debut list
 * Return: int or node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
