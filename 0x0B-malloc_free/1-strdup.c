#include<stdlib.h>
#include"main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer char
 * Return: NULL or string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	t = malloc(sizeof(char) * (i + 1));
	if (t == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		t[i] = str[i];

	return (t);
}
