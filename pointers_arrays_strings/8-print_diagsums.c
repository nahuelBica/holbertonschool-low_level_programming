#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of diagonals of a square matrix
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int sumalp = 0, sumbet = 0, row;

	for (row = 0 ; row < size; row++)
	{
		sumalp += a[row * size + row];
		sumbet += a[row * size + (size - row - 1)];
	}
	printf("%d, %d\n", sumalp, sumbet);
}
