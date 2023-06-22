#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	unsigned long long f = 1;
	unsigned long long k = 1;
	unsigned long long l = 1;
	unsigned long long i;

	for (i = 0; i < 98; i++)
	{
		printf("%lu, ", f);
		l = k;
		k = f;
		f = k + l;
	}
	printf("%lu\n", f);
	return (0);
}
