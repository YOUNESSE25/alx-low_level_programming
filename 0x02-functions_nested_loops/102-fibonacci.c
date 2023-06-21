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
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", f);
		l = k;
		k = f;
		f = k + l;
	}
	return (0);
}

