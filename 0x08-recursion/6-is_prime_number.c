#include"main.h"
int prime_fonc(int n, int i);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: int
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_fonc(n, n - 1));
}

/**
 * prime_fonc - where is the primer number
 *
 * @n: int
 * @i: int
 *
 * Return: 0 or 1
 */

int prime_fonc(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_fonc(n, i - 1));
}
