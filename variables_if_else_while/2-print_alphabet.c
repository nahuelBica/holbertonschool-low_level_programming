#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	char letra = 97;

	do {
		putchar(letra);
		letra++;
	} while (letra <= 122);
	putchar('\n');
	return (0);
}
