#include <stdio.h>
/**
 * print_alphabet - print the alphabet
 */
void print_alphabet(void)
{
	char letra = 97;

	do {
		_putchar (letra);
	} while (letra <= 122);
		_putchar ('\n');
}
