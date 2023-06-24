#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * prime_factor -  that finds and prints
 * the largest prime factor of the number 612852475143
 *
 * Return: return 0
 */
int main(void)
{
	long int i;
	long int p;
	long int n = 612852475143;

		for (i = 3; i <= n; i++)
		{
			while (n % i == 0)
			{
				p = i;
				n = n / i;
			}
		}
	printf("%ld", p);
	printf("\n");
	return (0);
}
