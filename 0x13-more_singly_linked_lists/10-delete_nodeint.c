#include"lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer first node
 * @index: index of node to delete
 * Return: pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *new;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);
	return (1);
}
