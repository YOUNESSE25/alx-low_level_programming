#include"main.h"
/**
 * print_number - function that prints an integer.
 *
 * @n: integer.
 */
void print_number(int n)
{
	unsigned int a;
	unsigned int l;

	if (n < 0)
	{
		_putchar(45);
		a = n * (-1);
	}
	else
	{
		a = n;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	l = a % 10 + 48;
	_putchar(l);
}
