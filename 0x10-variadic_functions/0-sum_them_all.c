#include<stdio.h>
#include<stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: int const
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
