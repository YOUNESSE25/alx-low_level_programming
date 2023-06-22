#include<stdio.h>
/**
 * main - Empty point
 *
 *Return: return 0
 */
int main(void)
{
	float f = 1;
	float k = 1;
	float l = 1;
	float i;

	for (i = 0; i < 98; i++)
	{
		printf("%f, ", f);
		l = k;
		k = f;
		f = k + l;
	}
	printf("%f\n", f);
	return (0);
}
