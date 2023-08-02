#include"lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * head: pointer list
 *
 * Return: address
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *speed = head;
	listint_t *slow = head;

	while (speed && slow && speed->next)
	{
		speed = speed->next->next;
		slow = slow->next;
		if (speed == slow)
		{
			slow = head;
			break;
		}
	}
	if (!speed || !slow || !speed->next)
		return (NULL);
	while (slow != speed)
	{
		speed = speed->next;
		slow = slow->next;
	}
	return (speed);
}
