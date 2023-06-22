#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	unsigned long f = 1;
	unsigned long k = 1;
	unsigned long l = 1;
	int i;

	for (i = 0; i < 97; i++)
	{
		printf(f + 48);
		printf(" ,");
		l = k;
		k = f;
		f = k + l;
	}
	printf(f + 48);
	printf("\n");
	return (0);
}
