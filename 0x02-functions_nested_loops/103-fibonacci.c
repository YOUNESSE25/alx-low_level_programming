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
	long s = 0;

	for (i = 0; i < 4000000; i++)
	{
		l = k;
		k = f;
		f = k + l;
		if (f % 2 == 0)
		{
			s = s + f;
		}
	}
	printf("%ld\n", s);
	return (0);
}
