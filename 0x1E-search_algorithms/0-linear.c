#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: array input
 * @size: size array
 * @value: value
 * Return: -1 or i
 */
int linear_search(int *array, size_t size, int value)
{
	int n;

	if (array == NULL)
		return (-1);
	for (n = 0; n < (int)size; n++)
	{
		printf("Value checked array[%u] = [%d]\n", n, array[n]);
		if (value == array[n])
			return (n);
	}
	return (-1);
}
