#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet ten times
 */
void print_alphabet_x10(void)
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
