#include"lists.h"
/**
 * add_dnodeint - add new node ferst place
 * @head: double pointer to the node
 * @n: element to add
 * Return: pointer or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	if (head == NULL)
		return (NULL);
	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->prev = NULL;
	a->next = *head;
	*head = a;
	if (a->next != NULL)
		(a->next)->prev = a;
	return (a);
}
