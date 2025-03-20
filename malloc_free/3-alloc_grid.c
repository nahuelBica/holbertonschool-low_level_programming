#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - 2 dimensional array of ints
 *@width: width of array
 *@height: height of array
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int ln = 0, col = 0;
	int **ar;

	if (width <= 0 || height <= 0)
		return (0);
	ar = malloc(height * sizeof(int));
	if (!ar)
		return (0);

	while (ln < height)
	{
		ar[ln] = malloc(width * sizeof(int));
		if (ar[ln] == 0)
		{
			while (ln >= 0)
			{
				free(ar[ln]);
				ln--;
			}
			return (0);
		}
		while (col < width)
		{
			ar[ln][col] = 0;
			col++;
		}
		col = 0;
		ln++;
	}

	return (ar);
}
