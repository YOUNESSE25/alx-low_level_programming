#include"lists.h"
/**
 * insert_nodeint_at_index - nserts a new node at a given position
 * @head: pointer first nude
 * @idx: position new node
 * @n: data
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int i;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp !=NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
