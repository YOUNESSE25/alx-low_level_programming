#include"main.h"

int recursion_fonc(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (recursion_fonc(n, 0));
}
/**
 * recursion_fonc - where is the square
 *
 * @n: int
 * @i: int
 *
 * Return: int
 */

int recursion_fonc(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (recursion_fonc(n, i + 1));
}
