#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenate 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, cont, grl = 0;
	char *ar;

	if (s1)
		while (s1[size1])
			size1++;
	if (s2)
		while (s2[size2])
			size2++;
	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (!ar)
		return (0);

	for (cont = 0; cont < size1; cont++)
	{
		ar[grl] = s1[cont];
		grl++;
	}
	for (cont = 0; cont < size2; cont++)
	{
		ar[grl] = s2[cont];
		grl++;
	}
	ar[grl] = 0;
	return (ar);
}
