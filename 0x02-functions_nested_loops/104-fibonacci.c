#include<stdio.h>
#include"main.h"
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
		_putchar(f + 48);
		_putchar(' ');
		_putchar(',');
		l = k;
		k = f;
		f = k + l;
	}
	_putchar(f + 48);
	printf("\n");
	return (0);
}
