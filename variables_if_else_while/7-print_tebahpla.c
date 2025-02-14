#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	char letra = 122;

	do {
		putchar(letra);
		letra--;
	} while (letra >= 97);
	putchar('\n');
	return (0);
}
