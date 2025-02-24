#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	char numero = '0';

	do {
		_putchar(numero);
		numero++;
	} while (numero <= '9');
	_putchar('\n');
}
