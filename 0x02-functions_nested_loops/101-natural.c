#include<stdio.h>
/**
 * natural - Nature made the natural numbers; All else is the work of women
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int s = 0;
	int t = 0;
	int k = 0;

	for (i = 0; i < 1024; i++)
	{
		k = i % 5;
		t = i % 3;
		if (k == 0 || t == 0)
		{
			s = s + i;
		}
	}
	printf(" the sum of all the multiples of 3 or 5 below 1024 is %d,", s);
	return (0);
}
