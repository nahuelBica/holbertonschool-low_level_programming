#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print all
 * @format: list of formats
*/
void print_all(const char * const format, ...)
{
	va_list ar;
	char *string;
	int find;
	unsigned int cont = 0;

	va_start(ar, format);
	while (format[cont])
	{
		find = 1;
		switch (format[cont])
		{
		case 'c':
			printf("%c", va_arg(ar, int));
			break;
		case 'i':
			printf("%d", va_arg(ar, int));
			break;
		case 'f':
			printf("%f", va_arg(ar, double));
			break;
		case 's':
			string = va_arg(ar, char*);
			if (string)
				printf("%s", string);
			break;
		default:
			find = 0;
			break;
		}
		if (format[cont + 1] && find)
			printf(", ");
		cont++;
	}
	printf("\n");
	va_end(ar);
}
