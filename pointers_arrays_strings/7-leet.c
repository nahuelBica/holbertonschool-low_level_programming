#include "main.h"
/**
 * *leet - encode string to 1337
 *@s: string
 *Return: string s encoded
 */
char *leet(char *s)
{
	int n = 0, i;
	const char *pool = "43071", *base = "aeotl";


	while (s[n] != 0)
	{
		for (i = 0; base[i] != 0; i++)
		{
			if (s[n] == base[i] || s[n] == base[i] - 32)
			{
				s[n] = pool[i];
			}
		}
		n++;
	}
	return (s);
}
