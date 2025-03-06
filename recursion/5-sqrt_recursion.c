#include "main.h"
/**
 * _sqrt_checker - checker of square root
 * @x: The number to find the square root of
 * @y: the current number to check
 * Return: The natural square root, or -1 if no natural square root exists
 *
*/
int _sqrt_checker(int x, int y)
{

	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (_sqrt_checker(x, y + 1));
}

/**
 * _sqrt_recursion - return the natural square root
 * @n: the number
 * Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_checker(n, 0));
}
