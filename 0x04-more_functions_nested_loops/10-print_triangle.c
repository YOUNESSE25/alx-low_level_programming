#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i +  j > size)
					_putchar(35);
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	}
}
