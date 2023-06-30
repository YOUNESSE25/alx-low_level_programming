#include"main.h"
/**
 * leet -  encodes a string into 1337.
 *
 * @n: input
 *
 * Return: n
 */
char *leet(char *n)
{
	int i;
	int j;
	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
			}
		}
	}
	return (n);
}
