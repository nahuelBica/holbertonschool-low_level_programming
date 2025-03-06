#include "main.h"
/**
 * _pow_recursion - return x rised to y
 *@x: number
 *@y: power
 *Return: x rised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
