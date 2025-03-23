#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: separator
 *@n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int cont;

	va_start(ar, n);
	for (cont = 0; cont < n; cont++)
	{
		printf("%d", va_arg(ar, int));
		if (separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
