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
	int ln, col;
	int **ar;

	if (width <= 0 || height <= 0)
		return (0);
	ar = malloc(sizeof(int *) * height);
	if (!ar)
		return (0);

	for (ln = 0; ln < height; ln++)
	{
		ar[ln] = malloc(width * sizeof(int));
		if (!ar[ln])
		{
			while (ln > 0)
			{
				free(ar[ln - 1]);
				ln--;
			}
			free(ar);
			return (0);
		}

		for (col = 0; col < width; col++)
		{
			ar[ln][col] = 0;
		}
	}

	return (ar);
}
