#include "main.h"
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char letra = 'a';
	int contador = 1;

	for (contador; contador <= 10; contador++)
	{
		do {
			_putchar(letra);
			letra++;
		} while (letra <= 'z');
		_putchar('\n');
	}
}
