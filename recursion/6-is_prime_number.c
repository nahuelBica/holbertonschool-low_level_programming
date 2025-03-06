#include "main.h"
/**
 * _div_checker - check if number is divisible
 * @x: The number to find the divisible
 * @y: the current number to check
 * Return: The number of divisors of x
 *
*/
int _div_checker(int x, int y)
{
	if (x < y)
		return (0);
	if (x % y == 0)
		return (1 + _div_checker(x, y + 1));
	return (_div_checker(x, y + 1));
}
/**
 * is_prime_number - verify if number is prime
 * @n: the number
 * Return: 1 if is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	int res = _div_checker(n, 1);

	return (res == 2 ? 1 : 0);
}
