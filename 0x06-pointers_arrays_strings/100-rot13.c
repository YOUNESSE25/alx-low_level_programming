#include"main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13.
 * @s: pointer
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = arot[j];
				break;
			}
		}
	}
	return (s);
}
