#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *ar, v = 0, w = min;

	if (min > max)
		return (0);
	ar = malloc((max - min + 1) * sizeof(int));

	if (!ar)
		return (0);
	while (v <= max - min)
		ar[v++] = w++;
	return (ar);
}
