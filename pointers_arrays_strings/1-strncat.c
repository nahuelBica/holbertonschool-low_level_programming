#include "main.h"
/**
 * *_strncat - cat n values of string src after dest
 *@dest: destination
 *@src: source
 *@n: max length of src
 *Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, i = 0;

	while (dest[x] != 0)
	{
		x++;
	}
	while (i < n && src[i] != 0)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	x++;
	dest[x] = '\0';
	return (dest);
}
