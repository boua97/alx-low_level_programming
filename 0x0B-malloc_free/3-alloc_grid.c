#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
int **t, w, v;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < height; w++)
	{
		t[w] = malloc(sizeof(int) * width);

		if (t[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(t[w]);
			}
			free(t);
			return (NULL);
		}

		for (v = 0; v <= width; v++)
		{
			t[w][v] = 0;
		}
	}
	return (t);

}
