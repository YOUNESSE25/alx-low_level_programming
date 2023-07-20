#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: separator
 * @n: number of integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
