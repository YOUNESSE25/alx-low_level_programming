#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: array pointer
 * @size: size o array
 * @action: pointer fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
