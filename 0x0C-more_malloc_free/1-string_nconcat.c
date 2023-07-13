#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: char *
 * @s2: char *
 * @n: int
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n >= size2)
		t = malloc(sizeof(char) * (size1 + size2 + 1));
	else
		t = malloc(sizeof(char) * (size1 + n + 1));
	if (!t)
		return (NULL);
	while (i < size1)
	{
		t[i] = s1[i];
		i++;
	}
	while (n < size2 && i < (size1 + n))
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	while (n >= size2 && i < (size1 + size2))
	{
		t[i] = s2[j++];
		i++;
		j++;
	}
	t[i] = '\0';

	return (t);
}
