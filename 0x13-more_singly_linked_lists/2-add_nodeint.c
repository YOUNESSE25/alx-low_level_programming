#include"lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to head list
 * @n: data of first node
 *
 * Return: pointer of new first node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nextfirst;

	nextfirst = malloc(sizeof(listint_t));
	if (!nextfirst)
	{
		return (NULL);
	}
	nextfirst->n = n;
	nextfirst->next = *head;
	*head = nextfirst;
	return (nextfirst);
}
