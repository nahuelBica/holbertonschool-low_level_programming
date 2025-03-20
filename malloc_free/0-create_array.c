#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array
 *@size: size of char
 *@c: char
 *Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int cont;
	char *ar;

	if (size == 0)
		return (0);

	ar = malloc(size * sizeof(char));
	if (!ar)
		return (0);
	for (cont = 0; cont < size; cont++)
		ar[cont] = c;
	return (ar);
}
