#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	long double f = 1;
	long double k = 1;
	long double l = 1;
	long double i;

	for (i = 0; i < 98; i++)
	{
		printf("%ld, ", f);
		l = k;
		k = f;
		f = k + l;
	}
	printf("%ld\n", f);
	return (0);
}
