#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	char numero = '0';

	do {
		if (numero != 2 && numero != 4)
			_putchar(numero);
		numero++;
	} while (numero <= '9');
	_putchar('\n');
}
