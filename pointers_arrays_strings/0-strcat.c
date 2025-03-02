#include "main.h"
/**
 * *_strcat - cat string src after dest
 *@dest: destination
 *@src: source
 *Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, i = 0;

	while (dest[n] != 0)
	{
		n++;
	}
	while (src[i] != 0)
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	n++;
	dest[n] = '\0';
	return (dest);
}
