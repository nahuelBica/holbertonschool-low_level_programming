#include "main.h"
#include <stdio.h>
/**
 * *_memset - fills memory with constant byte
 *@s: memory area
 *@b: byte
 *@n:numbers of bytes to replace
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned long int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
