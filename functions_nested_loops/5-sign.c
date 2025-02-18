#include "main.h"
/**
 *print_sign - check if c is lowercase
 *
 * @n: parameter that obtain a number
 *Return: 1 if is positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
	int resultado = 0;
	if (n < 0)
	{
		_putchar('-');
		resultado = -1;
	}
	if (n > 0)
	{
		_putchar('+');
		resultado = +1;	
	} else
	{
		_putchar('0');
	}
	return (resultado);
}
