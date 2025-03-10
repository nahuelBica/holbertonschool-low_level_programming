#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul 2 numbers.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: if 2 args (without program name) 0, otherwise 1.
 *
 */
int main(int argc, char **argv)
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
