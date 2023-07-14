#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min range
 * @max: max range
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *t;
	int i;
	int s;

	if (min > max)
		return (NULL)
	s = max - min + 1;
	t = malloc(sizeof(int) * s);
	if (t == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		t[i] = min++;

	return (t);
}
