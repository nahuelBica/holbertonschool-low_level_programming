#include <stdio.h>
/**
 * main - prints all args in a function.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: always 0.
 *
 */
int main(int argc, char **argv)
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}

	return (0);
}
