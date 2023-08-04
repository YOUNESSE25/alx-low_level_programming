#include"main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: num1
 * @m: num2
 *
 * Return: num of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned long int rst = 1;
	unsigned int i, j = 0;

	dif = n ^ m;
	for (i = 0; i < ((sizeof(unsigned long int) * 8)); i++)
	{
		if (rst == (dif & rst))
			j++;
		rst = rst << 1;
	}
	return (j);
}
