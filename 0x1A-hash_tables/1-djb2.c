#include "hash_tables.h"
/**
 * hash_djb2 - fun generates random number
 *
 * @str: string
 * Return: hashnumber
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int a;
	unsigned long int h;

	h = 5381;
	while ((a = *str++))
	{
		h = ((h << 5) + h) + a;
	}
	return (h);
}
