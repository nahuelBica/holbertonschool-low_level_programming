#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum 2 numbers.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: if 2 args (without program name) 0, otherwise 1.
 *
 */
int main(int argc, char **argv)
{
	int cont, icont, result = 0;

	for (cont = 1; cont <= argc; cont++)
	{
		if (argv[cont] == NULL)
		{
			printf("%d\n", result);
			return (0);
		}
		for (icont = 0; argv[cont][icont] != '\0'; icont++)
			if (argv[cont][icont] < '0' || argv[cont][icont] > '9')
			{
				printf("Error\n");
				return (1);
			}
		result += atoi(argv[cont]);
	}
	return (0);
}
