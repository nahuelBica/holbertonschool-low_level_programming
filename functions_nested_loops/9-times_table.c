#include "main.h"
/**
 *times_table - prints the 9 times table
*/
void times_table(void)
{
	char a, b, resultado;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			resultado = a * b;
			if (resultado <= 9)
			{
				if (resultado > 0 || (a == 0 && b != 0))
					_putchar(' ');
			} else
			{
				_putchar((resultado / 10) + '0');
			}
			_putchar((resultado % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
