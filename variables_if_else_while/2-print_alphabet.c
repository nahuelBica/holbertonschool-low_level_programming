#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	char letra = 97;

	while (letra <= 122)
	{
		putchar(letra);
		putchar('\n');
		letra++;
	}
	return (0);
}
