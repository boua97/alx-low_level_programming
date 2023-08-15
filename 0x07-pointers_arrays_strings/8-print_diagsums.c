#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int v, s1 = 0, s2 = 0;

	for (v = 0; v < (size * size); v++)
	{
		if (v % (size + 1) == 0)
			s1 += *(a + v);
		if (v % (size - 1) == 0 && v != 0 && v < size * size - 1)
			s2 += *(a + v);
	}
	printf("%d, %d\n", s1, s2);
}
