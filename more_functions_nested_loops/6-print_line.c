#include "main.h"
/**
 * print_line - print line with n _
 * @n: number of _
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
