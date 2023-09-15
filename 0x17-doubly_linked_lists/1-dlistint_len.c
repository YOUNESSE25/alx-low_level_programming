#include "lists.h"
/**
 * dlistint_len - conte num node
 * @h: pointer begin list
 * Return: int or node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
