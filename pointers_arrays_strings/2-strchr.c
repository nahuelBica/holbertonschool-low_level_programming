#include "main.h"
/**
 * *_strchr - search char in a string
 *@s: string
 *@c: char
 *Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0, check = 0;
	char *o = 0;

	while (s[i] != 0 && !check)
	{
		if (s[i] == c)
		{
			o = &s[i];
			check = 1;
		}
		i++;
	}
	return (check == 1 ? o : 0);
}
