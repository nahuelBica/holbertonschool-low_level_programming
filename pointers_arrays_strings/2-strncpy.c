#include "main.h"
/**
 * *_strncpy - copy string
 *@dest: destination
 *@src: source
 *@n: max length of src
 *Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (x = i; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
