#include"main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index of bit to set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = ~(1 << index);
	*n = *n & a;
	return (1);
}
