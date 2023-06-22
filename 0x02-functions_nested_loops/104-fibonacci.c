#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	signed long int f = 1;
	signed long int k = 1;
	signed long int l = 1;
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
