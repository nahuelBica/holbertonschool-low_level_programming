#include "main.h"
/**
 * print_rev - print a reversed string
 *@s: string
 */
void print_rev(char *s)
{
	int n = 0, cont = 0;


	while (*(s + n) != 0)
	{
		cont++;
		n++;
	}
	while (cont > 0)
	{
		cont--;
		_putchar(*(s + cont));
	}
	_putchar('\n');
}
