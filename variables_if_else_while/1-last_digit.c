#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - entry point
 * Return: if 0 is success
 */
int main(void)
{
	int lastd, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	} else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
