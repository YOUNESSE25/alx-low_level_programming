#include"lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer first element
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;


		if (!*head)
			return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
