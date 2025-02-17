#include "main.h"
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char letra;
	int contador = 1;

	while (contador < 10)
	{
		letra = 'a';
		do {
			_putchar(letra);
			letra++;
		} while (letra <= 'z');
		_putchar('\n');
		contador++;
	}
}
