#include <main.h>
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char letra = 'a';

	do {
		_putchar(letra);
		letra++;
	} while (letra <= 'z');
	_putchar('\n');
}
