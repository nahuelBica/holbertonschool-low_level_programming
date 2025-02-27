#include "main.h"
/**
 * puts_half - print a  half of string
 *@str: string
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != 0)
	{
		n++;
	}
	if (n % 2 == 1)
		n = (n + 1) / 2;
	else
		n = n / 2;

	while (str[n] != 0)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
