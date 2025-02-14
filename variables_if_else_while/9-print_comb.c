#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	int numero = 48;

	do {
		putchar(numero);
		putchar(',');
		putchar(' ');
		numero++;
	} while (numero <= 57);
	putchar('\n');
	return (0);
}
