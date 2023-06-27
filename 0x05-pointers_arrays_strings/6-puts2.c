#include "main.h"
/**
 * puts2 - prints every other character of a string
 * , starting with the first character,
 *
 * @str: char
 */
void puts2(char *str)
{
	int l = 0;
	int z = 0;
	char *p = str;
	int r;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	z = l - 1;
	for (r = 0; r <= z; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}}
	_putchar('\n');
}
