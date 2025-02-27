#include "main.h"
/**
 * *_strcpy - copy string
 *@dest: destination
 *@src: source
 *Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != 0)
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
