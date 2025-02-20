#include <stdio.h>

int espar(int n)
{
	if (n % 2 == 0)
		return (1);
	return (0);
}

int main(void)
{
	int entrada = 1;
	int contador = 0;
	int numero;
	do {
		if (entrada <= 0)
			printf("el numero debe ser positivo \n");
		printf("Ingrese un numero entero positivo\n");
		scanf("%d", &entrada);
	} while (entrada <= 0);

	for (int c = 1; c <= entrada; c++)
	{
		numero = espar(c);
		if (numero == 1)
		{
			contador += 1;
			if (c == entrada || c == (entrada - 1))
			{
			 	printf("%d\n", c);
			} else {
				printf("%d, ", c);
			}
		}
	}
	printf("existen %d numeros pares entre 1 y %d\n", contador, entrada);
}
