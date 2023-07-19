#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: name to print
 * @f: pointer of function used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (0);
	f(name);
}
