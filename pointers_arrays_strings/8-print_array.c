#include "main.h"
#include "stdio.h"
/**
 * print_array - print a array
 *@a: array
 *@n: length of a
 */
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		if (cont + 1 != n)
			printf("%d, ", a[cont]);
		else
			printf("%d\n", a[cont]);
	}
}
