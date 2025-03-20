#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicate string
 *@str: string
 *Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	unsigned int size = 0, cont;
	char *ar;

	if (!str)
		return (0);
	while (str[size])
		size++;

	ar = malloc((size + 1) * sizeof(char));
	if (!ar)
		return (0);
	for (cont = 0; cont < size; cont++)
		ar[cont] = str[cont];
	ar[cont + 1] = 0;
	return (ar);
}
