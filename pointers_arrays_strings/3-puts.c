#include "main.h"
/**
 * _puts - print a string
 *@str: string
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != 0)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
