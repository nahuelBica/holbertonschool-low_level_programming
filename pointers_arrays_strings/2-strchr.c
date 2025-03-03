#include "main.h"
#include <stddef.h>
/**
 * *_strchr - search char in a string
 *@s: string
 *@c: char
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
