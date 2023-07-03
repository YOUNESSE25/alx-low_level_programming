#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that locates a character in a string.
 *
 * @s: address of memory
 * @c: character
 *
 * Return: d
 */
char *_strchr(char *s, char c)
{
	int  i = 0;
	char *d;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			d = &s[i - 1];
	}
	return (d);
}
