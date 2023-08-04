#include"main.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 or 0
 */
int get_endianness(void)
{
	int i = 1;
	char *c;

	c = (char *)&i;
	return (*c);
}
