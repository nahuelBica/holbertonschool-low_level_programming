#include "main.h"
/**
 *print_sign - check if number is positive or negative
 *
 * @n: parameter that obtain a number
 *Return: 1 if is positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
