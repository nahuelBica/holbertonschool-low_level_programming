#include "main.h"
#include <stddef.h>
/**
 * *_strstr - search string in string
 *@haystack: string
 *@needle: string
 *Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int c = 0, i, find = 0;
	/*c = cont while, recorre el 1er str, i = cont for, recorre el 2do str*/

	while (haystack[c])
	{
		for (i = 0; needle[i] != 0; i++)
		{
			if (haystack[c + i] == needle[i])
				find = 1;
			else
				find = 0;
		}
		if (find)
			return (haystack + c);
		c++;
	}
	return (NULL);
}
