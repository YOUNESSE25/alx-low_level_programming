#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	long f = 1;
	long k = 1;
	long l = 1;
	long i;

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
