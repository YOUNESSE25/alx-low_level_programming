#include "search_algos.h"

/**
  * exponential_search -  searches for a value in a sorted array
  * of integers using the Exponential search algorithm
  * @array: pointer array to search
  * @size: number elements array
  * @value: value
  * Return: int or -1
  *
  * Description: Print a value
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t n, rg;

	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (n = 1; n < size && array[n] <= value; n = n * 2)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	}
	rg = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, rg);
	return (b_search(array, n / 2, rg, value));
}

/**
  * b_search - searches for a value in a sorted array
  * @array: A pointer of the array
  * @lf: starting index
  * @rg: ending index
  * @value: value
  *
  * Return: i or -1.
  *
  * Description: Prints subarray
  */
int b_search(int *array, size_t lf, size_t rg, int value)
{
	size_t n;

	if (array == NULL)
		return (-1);
	while (rg >= lf)
	{
		printf("Searching in array: ");
		for (n = lf; n < rg; n++)
			printf("%d, ", array[n]);
		printf("%d\n", array[n]);

		n = lf + (rg - lf) / 2;
		if (array[n] == value)
			return (n);
		if (array[n] > value)
			rg = n - 1;
		else
			lf = n + 1;
	}

	return (-1);
}
