#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - print numbers since n to 98
 * @n: number
*/
void print_to_98(int n)
{
	do {
		if (n >= 98)
		{
			printf("%d\n", 98);
		} else
		{
			printf("%d, ", n);
		}
		n++;
	} while (n <= 98);
}
