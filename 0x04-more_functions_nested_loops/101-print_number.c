#include"main.h"
/**
 * print_number - function that prints an integer.
 *
 * @n: integer.
 */
void print_number(int n)
{
	int a;
	int w;
	int m;
	int l;

	if (n < 0)
	{
		_putchar(45);
		n = n * (-1);
	}
	l = n / 1000;
	m = (n % 1000) / 100;
	a = (n % 100) / 10;
	w = n % 10;
	if (l > 0)
		_putchar(l + 48);
	if (m > 0)
		_putchar(m + 48);
	else if (m == 0 && l != 0)
		_putchar(48);
	if (a > 0)
		_putchar(a + 48);
	else if (a == 0 && (l + m) != 0)
		_putchar(48);
	if (w >= 0)
		_putchar(w + 48);
	else
		_putchar(48);
}
