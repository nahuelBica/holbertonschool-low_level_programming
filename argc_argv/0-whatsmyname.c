#include <stdio.h>
/**
 * main - prints program name.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: always 0.
 *
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
