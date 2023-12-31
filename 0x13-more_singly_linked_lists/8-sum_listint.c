#include"lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
