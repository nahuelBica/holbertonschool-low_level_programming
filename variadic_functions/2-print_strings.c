#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print strings
 * @separator: separator
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int cont;
	char *string;

	va_start(ar, n);
	for (cont = 0; cont < n; cont++)
	{
		string = va_arg(ar, char*);
		string ?  printf("%s", string) : printf("%p", NULL);
		if (separator && cont + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
