#include "main.h"
/**
 * _strlen - return the length of a string
 *@s: string
 *Return: length of string s
 */
int _strlen(char *s)
{
	int con, n = 0;

	while (*(s + n) != 0)
	{
		con++;
		n++;
	}
	return (n);
}
