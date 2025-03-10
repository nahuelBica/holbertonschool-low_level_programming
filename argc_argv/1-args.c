#include <stdio.h>
/**
 * main - prints the number of args in a function.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: always 0.
 *
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
