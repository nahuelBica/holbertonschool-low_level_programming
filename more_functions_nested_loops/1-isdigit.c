#include "main.h"
/**
 *_isdigit - check if c is uppercase
 *
 * @c: parameter that obtain a character
 *Return: 1 if is digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
		return (0);
}
