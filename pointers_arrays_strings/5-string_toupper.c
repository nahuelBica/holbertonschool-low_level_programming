#include "main.h"
/**
 * _*string_toupper - change to upper
 *@s: string
 *Return: s
 */
char *string_toupper(char *s)
{
	int n = 0;

	while (s[n] != 0)
	{
		if (s[n] <= 'z' && s[n] >= 'a')
			s[n] -= 32;
		n++;
	}
	return (s);
}
