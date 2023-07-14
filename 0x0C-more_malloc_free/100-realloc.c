#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size
 * @new_size: new size
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t;
	char *old_t;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	t = malloc(new_size);
	if (!t)
		return (NULL);

	old_t = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			t[i] = old_t[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			t[i] = old_t[i];
	}
	free(ptr);
	return (t);
}
