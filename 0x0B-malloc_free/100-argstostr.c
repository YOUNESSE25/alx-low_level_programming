#include<stdlib.h>
#include"main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: int **
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l = l + ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[r] = av[i][j];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
