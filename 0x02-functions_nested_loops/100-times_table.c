#include"main.h"
/**
 *print_times_table - Write a function that prints
 *the n times table, starting with 0.
 *
 *@n: Printing times
 *
 */
void print_times_table(int n)
{
	int i;
	int j;
	int t;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t);
					_putchar(',');
				}
				else if (t < 100 && t >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(t);
					_putchar(',');
				}
				else
				{
					_putchar(' ');
					_putchar(t);
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
