#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int letra = 97;

	do {
		_putchar (letra);
	} while (letra <= 122);
	_putchar ('\n');

}
