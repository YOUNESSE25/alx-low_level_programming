#include"lists.h"
/**
 * add_dnodeint_end - adds a node in end
 * @head: double pointer head list
 * @n: elemnent to add
 * Return: int or node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *t;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	t = *head;
	while (t->next != NULL)
		t = t->next;

	t->next = new;
	new->prev = t;
	return (new);
}
