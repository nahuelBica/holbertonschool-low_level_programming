#include "main.h"
/**
 *print_last_digit - print last digit of a number
 *
 *@n: parameter that obtain a number
 *Return: last digit of number
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	return (last_digit);
}
