#include "main.h"
/**
 * *cap_string - capitalize string
 *@s: string
 *Return: string s capitalized
 */
char *cap_string(char *s)
{
	int n = 0, i;
	const char *pool = ",;.!?\"(){}\n\t ";

	while (s[n] != 0)
	{
		if (s[n] <= 'z' && s[n] >= 'a')
		{
			for (i = 0; pool[i] != 0; i++)
				s[n] = s[n - 1] == pool[i] ? s[n] - 32 : s[n];
		}
		n++;
	}
	return (s);
}
