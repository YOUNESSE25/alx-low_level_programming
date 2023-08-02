#include"lists.h"
/**
 * free_listint_safe - frees a listint_t list.
 * @h: header pointer
 * Return: num
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int hol;
	listint_t *new;

	while (*h != NULL)
	{
		hol = *h - (*h)->next;
		if (hol > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
