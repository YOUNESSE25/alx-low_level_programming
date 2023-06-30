#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: array
 * @n: elements of array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a(n) = j;
	}
}
