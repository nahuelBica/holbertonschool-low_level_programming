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
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
