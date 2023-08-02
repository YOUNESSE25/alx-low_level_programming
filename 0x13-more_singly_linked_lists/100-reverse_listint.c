#include"lists.h"
/**
 * reverse_listint - function that reverses a listint_t
 * @head: pointer to pointer of first node
 *
 * Return: pointer first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = new;
	}
	*head = p;
	return (*head);
}

