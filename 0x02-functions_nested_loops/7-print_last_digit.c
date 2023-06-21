#include"main.h"
/**
 * print_last_digit - Print the last digit
 *
 * @i: input number is an integer
 *
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		return (-l);
	}
	else
	{
		return (l);
	}
}
