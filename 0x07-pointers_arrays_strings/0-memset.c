#include"main.h"
#include<stdio.h>

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: adress
 * @b: char to print
 * @n: the size of the memory to print
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
