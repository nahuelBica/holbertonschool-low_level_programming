#include "main.h"
/**
 *_abs - print abs of a number
 *
 *@n: parameter that obtain a number
 *Return: n if is positive or zero, -n if is negative
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
