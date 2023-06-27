#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: char
 */
void puts_half(char *str)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}
	j = l / 2;
	if ((l % 2) == 1)
	{
		j = (l + 1) / 2;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
