#include "main.h"
/**
 *_islower - check if c is lowercase
 *
 * @c: parameter that obtain a character
 *Return: 1 if is lower, 0 otherwise
*/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
		return (0);
}
