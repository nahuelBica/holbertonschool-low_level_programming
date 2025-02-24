#include "main.h"
/**
 *_isupper - check if c is uppercase
 *
 * @c: parameter that obtain a character
 *Return: 1 if is upper, 0 otherwise
*/
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
		return (0);
}
