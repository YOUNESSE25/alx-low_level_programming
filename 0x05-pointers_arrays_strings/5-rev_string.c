#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: string
 */
void rev_string(char *s)
{
	char revers = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		revers = s[i];
		s[i] = s[c];
		s[c] = revers;
	}
}
