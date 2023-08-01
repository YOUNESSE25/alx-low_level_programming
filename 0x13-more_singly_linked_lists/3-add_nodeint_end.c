#include"lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer first element
 * @n: data to insert
 *
 * Return: pointer or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextlast;
	listint_t *go = *head;

	nextlast = malloc(sizeof(listint_t));
	if (!nextlast)
	{
		return (NULL);
	}
	nextlast->n = n;
	nextlast->next = NULL;
	if (*head == NULL)
	{
		*head = nextlast;
		return (nextlast);
	}
	while (go->next)
	{
		go = go->next;
	}
	go->next = nextlast;
	return (nextlast);
}
