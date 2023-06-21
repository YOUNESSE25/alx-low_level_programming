#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	int f = 1;
	int k = 1;
	int l = 1;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", f);
		k = f;
		l = k;
		f = k + l;
	}
	return (0);
}

