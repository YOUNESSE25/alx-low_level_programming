#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 *
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0;
	int r;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (r = l; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
