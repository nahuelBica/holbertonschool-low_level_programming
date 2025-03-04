#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * *_strstr - search string in string
 * @haystack: string
 * @needle: string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int lenHay = 0, lenNeed = 0, cont = 0, aux, check = 1;

	printf("Antes del 1er while");
	while (haystack[lenHay + 1] != 0)
		lenHay++;
	printf("Antes del 2do while");
	while (needle[lenNeed + 1] != 0)
		lenNeed++;

	printf("Antes del tercer while lenNeed %d", lenNeed);
	while (lenHay > lenNeed)
	{
		printf("Antes del for lenNeed %d", lenNeed);
		for (aux = 0; needle[aux] != 0 && check; aux++)
		{		
			printf("Antes del if aux %d, lenNeed %d", aux, lenNeed);
			if (haystack[aux] != needle[aux])
				check = 0;
			printf("despues del if aux %d, lenNeed %d", aux, lenNeed);
		}
			printf("aux %d, lenNeed %d", aux, lenNeed);
		if (aux == lenNeed)
		{
			printf("desde aux == lenNeed");
			return (haystack + cont);
		}
		cont++;
		lenHay--;
	}
	return (NULL);
}
