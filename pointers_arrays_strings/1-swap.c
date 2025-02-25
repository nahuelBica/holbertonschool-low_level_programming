#include "main.h"
/**
 * swap_int - swap the value of 2 int
 *@a: int 1
 *@b: int 2
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
