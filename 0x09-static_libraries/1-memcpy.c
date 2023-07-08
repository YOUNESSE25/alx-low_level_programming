#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: address of memory
 * @src: address of memory
 * @n: size of the memory
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
