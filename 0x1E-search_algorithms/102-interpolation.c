#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: array input
 * @size: size array
 * @value: value
 * Return: int or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lw, hg, p;
	double n;

	if (array == NULL)
		return (-1);

	lw = 0;
	hg = size - 1;

	while (size)
	{
		n = (double)(hg - lw) / (array[hg] - array[lw]) * (value - array[lw]);
		p = (size_t)(lw + n);
		printf("Value checked array[%d]", (int)p);
		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
			printf(" = [%d]\n", array[p]);
		if (array[p] == value)
			return ((int)p);
		if (array[p] < value)
			lw = p + 1;
		else
			hg = p - 1;
		if (lw == hg)
			break;
	}
	return (-1);
}
