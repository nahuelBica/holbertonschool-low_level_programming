#include "main.h"
/**
 * *_memcpy - copy memory area in dest
 *@dest: dest
 *@src: src
 *@n:numbers of bytes to replace
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
