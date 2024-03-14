#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list
 * of integers using the Jump search algorithm
 * @array: array input
 * @size: size array
 * @value: value
 * Return: index
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, n, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	m = (size_t)sqrt((double)size);
	index = 0;
	n = 0;
	do {
		prev = list;
		n++;
		index = n * m;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
