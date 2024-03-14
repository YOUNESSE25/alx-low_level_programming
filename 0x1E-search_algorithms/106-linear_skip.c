#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip
 * list of integers
 *
 * @list: input
 * @value: value
 * Return: index
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *run;

	if (list == NULL)
		return (NULL);
	run = list;
	do {
		list = run;
		run = run->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)run->index, run->n);
	} while (run->express && run->n < value);
	if (run->express == NULL)
	{
		list = run;
		while (run->next)
			run = run->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)run->index);
	while (list != run->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
