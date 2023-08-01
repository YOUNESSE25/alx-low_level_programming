#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: structur
 *
 * Return: nomber of node
 */
size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}
	return (numb);
}
