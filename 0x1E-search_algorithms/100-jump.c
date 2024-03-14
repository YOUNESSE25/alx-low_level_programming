#include <math.h>
#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: array input
 * @size: size array
 * @value: value
 * Return: i or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int n, m, i, pr;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	n = 0;
	pr = 0;
	i = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		n++;
		pr = i;
		i = n * m;
	} while (i < (int)size && array[i] < value);
	printf("Value found between indexes [%d] and [%d]\n", pr, i);
	for (; pr <= i && pr < (int)size; pr++)
	{
		printf("Value checked array[%d] = [%d]\n", pr, array[pr]);
		if (array[pr] == value)
			return (pr);
	}
	return (-1);
}
