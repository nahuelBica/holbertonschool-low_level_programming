#include "main.h"
/**
 * _atoi - print first number of string
 *@s: string
 *Return: number
 */
int _atoi(char *s)
{
	int n = 0, num = 0, sig = 0, check = 1, tot = 0;
	unsigned int mult = 0;

	while (s[n] != 0 && (s[n] < '0' || s[n] > '9'))
	{
		if (s[n] == '-')
			sig++;
		n++;
	}
	n = 0;
	while (check && s[n])
	{
		if (s[n] >= '0' && s[n] <= '9')
		{
			num = 1;
			while (s[n] >= '0' && s[n] <= '9')
			{
				mult = mult * 10 + (s[n] - '0');
				n++;
			}
			check = 0;
		} else
			n++;
	}
	sig = (sig % 2) == 0 ? 1 : -1;
	tot = sig * mult;
	return (num == 1 ? tot : num);
}
