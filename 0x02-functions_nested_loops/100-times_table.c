#include"main.h"
/**
 *print_times_table - Write a function that prints the n times table
 *
 *@n: Printing times
 */
void print_times_table(int n)
{
	int i, j, t;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{t = i * j;
				if (t < 10)
				{
					if (j != 0)
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(t + 48);
					}
					else
					{_putchar(t + 48);
					}
				}
				else if (t < 100 && t >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((t / 10) + 48);
					_putchar((t % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((t / 100) + 48);
					_putchar((t % 100) / 10 + 48);
					_putchar((t % 10) + 48);
				}}
			_putchar('\n');
		}}}
