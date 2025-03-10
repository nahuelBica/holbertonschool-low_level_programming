#include <stdio.h>
#include <stdlib.h>
/**
 * main - minor number of coins.
 *
 * @argv: args.
 * @argc: num of args.
 *
 * Return: 1 argc != 2, 0 otherwise
 *
 */
int main(int argc, char **argv)
{
	int number = 0, cont, result = 0, numberbase[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (cont = 0; cont < 5 && number > 0; cont++)
	{
		if (number >= numberbase[cont])
		{
			result += number / numberbase[cont];
			number = number % numberbase[cont];
		}
	}

	printf("%d\n", result);
	return (0);
}
