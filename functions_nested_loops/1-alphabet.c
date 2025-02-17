#include <stdio.h>
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	int letra = 97;

	do {
		_putchar (letra);
	} while (letra <= 122);
	_putchar ('\n');

}
