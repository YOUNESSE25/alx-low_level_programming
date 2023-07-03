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
	int j;
	unsigned int c = 0;

	for (j = 0; accept[j]; j++)
	{
		for (i = 0; s[i] < 123 && s[i] > 96; i++)
		{
			if (s[i] > 122 && s[i] < 96)
				break;

			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
