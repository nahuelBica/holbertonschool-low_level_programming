#include "main.h"
#include <stddef.h>
/**
 * _strspn - eval string and stop in first char that not exist in accept
 *@s: string
 *@accept: accepted chars
 *Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int value = 0;
	int i = 0, check = 0, find, f;

	while (s[i] != 0 && !check)
	{
		find = 0;
		for (f = 0; accept[f] != 0 && !find; f++)
		{
			if (s[i] == accept[f])
			{
				value++;
				find = 1;
			}
		}
		if (!find)
			check = 1;
		i++;
	}
	return (value);
}
