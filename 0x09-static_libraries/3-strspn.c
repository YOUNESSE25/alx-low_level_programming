#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: address of memory
 * @accept: prefix substring
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int c = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				c++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (c);
		}
		s++;
	}
	return (c);
}
