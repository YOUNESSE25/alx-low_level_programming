#include"lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer furst node
 * @index: node to return
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
