#include<stdio.h>

/**
 ** main - Entry point
 *
 * fizz_buzz -  prints the numbers from 1 to 100
 * multiples of three print Fizz
 *  multiples of five print Buzz
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
