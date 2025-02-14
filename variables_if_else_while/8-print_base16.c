#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	char numero = 48;

	do {
		putchar(numero);
		numero++;
		if (numero == 58)
			numero = 97;
	} while (numero <= 102);
	putchar('\n');
	return (0);
}
