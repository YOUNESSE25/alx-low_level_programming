#include"main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking data
 * @index: index
 * Return: the val in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d;
	unsigned long int rst;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	rst = n & d;
	if (rst == d)
		return (1);
	return (0);
}
