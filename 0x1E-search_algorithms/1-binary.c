#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers
  * using the Binary search algorithm
  * @array: array input
  * @size: size array
  * @value: value
  * Return: -1 or n
  *
  * Description: prints the change
  */
int binary_search(int *array, size_t size, int value)
{
	size_t l, r, n;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (n = l; n < r; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);
		n = l + (r - l) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			r = n - 1;
		else
			l = n + 1;
	}
	return (-1);
}
