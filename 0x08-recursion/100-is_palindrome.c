#include "main.h"


int size_string(char *s);
int test(char *s, int i, int l);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (test(s, 0, size_string(s)));
}
/**
 * size_string - size
 * @s: str
 * Return: 0 or 1
 */
int size_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + size_string(s + 1));
}
/**
 * test - where is palindrome
 *
 * @s: str
 * @i: int
 * @l: int
 * Return: 0 or 1
 */
int test(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (test(s, i + 1, l - 1));
}
