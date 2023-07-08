#include "main.h"
/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: address of memory
 * @needle: address of memory
 *
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack > '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j)
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
