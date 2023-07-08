#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  prints the minimum number of coins to make
 * change for an amount of money.
 *
 * @argc: size
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	int i;
	int r;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	r = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= c[i])
		{
			r++;
			n = n - c[i];
		}
	}
	printf("%d\n", r);
	return (0);
}
