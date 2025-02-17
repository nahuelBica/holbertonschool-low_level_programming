#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	write(1, "_putchar", 8);
	write(1, "\n", 1);

	return (0);
}
