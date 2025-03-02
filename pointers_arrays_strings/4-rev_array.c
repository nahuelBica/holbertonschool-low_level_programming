#include "main.h"
/**
 * reverse_array - reverse a array
 *@a: array
 *@n: size of array
 */
void reverse_array(int *a, int n)
{
	int aux, cont = 0, i = n - 1;

	while (cont < n / 2)
	{
		aux = a[cont];
		a[cont] = a[i];
		a[i] = aux;
		i--;
		cont++;
	}
}
