#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: size
 * @c: char
 *
 * return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(char) * size);
	for (i = 1; i <= size; i++)
	{
		t[i] = c;
	}
	return (t);
}
