#include"main.h"
/**
 * pw - calcul base
 * @b: base
 * @p: power
 * Return: number
 */
long int pw(int b, int p)
{
	long int number;
	int i;

	number = 1;
	for (i = 1; i <= p; i++)
		number = number * b;
	return (number);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: int to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int j;
	char sin = 0;

	i = pw(2, sizeof(unsigned long int) * 8 - 1);
	while (i != 0)
	{
		j = n & i;
		if (j == i)
		{
			_putchar('1');
			sin = 1;
		}
		else if (sin == 1 || i == 1)
			_putchar('0');
	i = i >> 1;
	}
}
