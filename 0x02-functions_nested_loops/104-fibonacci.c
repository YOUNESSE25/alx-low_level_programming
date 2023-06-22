#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	long long f = 1;
	long long k = 1;
	long long l = 1;
	long long i;

	for (i = 0; i < 98; i++)
	{
		printf("%lld, ", f);
		l = k;
		k = f;
		f = k + l;
	}
	printf("%lld\n", f);
	return (0);
}
