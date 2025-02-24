#include "main.h"
/**
 * print_diagonal - print diagonal with n \
 *
 * @n: number of times \ is printed
 */
void print_diagonal(int n)
{
	int i, c;

	c = 0;
	while (n > 0)
	{
		for (i = 0; i < c; i++)
			_putchar (' ');
		_putchar('\\');
		if (n != 1)
			_putchar('\n');
		n--;
		c++;
	}
	_putchar('\n');
}
