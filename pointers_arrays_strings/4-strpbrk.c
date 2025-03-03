#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - search string in a string
 *@s: string
 *@accept: accepted
 *Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int c, find = 0;

	while (*s)
	{
		for (c = 0; accept[c] != 0 && !find; c++)
		{
			if (*s != accept[c])
				find = 0;
			else
				find = 1;
		}
		if (!find)
			s++;
		else
			return (s);
	}
	return (NULL);
}
