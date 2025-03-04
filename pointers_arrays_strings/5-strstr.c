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
	int c, s = 0, check;

	while (needle[s] != 0)
		s++;

	while (haystack)
	{
		check = 1;
		for (c = 0; needle[c] != 0 && check; c++)
		{
			if (haystack[c] != needle[c])
				check = 0;
		}
		if (c != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
