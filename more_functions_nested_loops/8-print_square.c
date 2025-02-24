#include "main.h"
/**
 * print_square - print square with size n
 *
 * @size: size of square
 */
void print_square(int size)
{
	int aux = size;
	int i;

	while (size > 0)
	{
		for (i = aux; i > 0; i--)
			_putchar ('#');
		if (size != 1)
			_putchar('\n');
		size--;
	}
	_putchar('\n');
}
