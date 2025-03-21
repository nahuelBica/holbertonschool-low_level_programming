#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all numbers
 *@n: numbers
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int cont;
	va_list ar;

	if (n == 0)
		return (0);

	va_start(ar, n);
	for (cont = 0; cont < n; cont++)
		sum += va_arg(ar, int);
	va_end(ar);
	return (sum);
}
