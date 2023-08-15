#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @n: is the number of elements of the array
 * @a: input array
 *
 */


void reverse_array(int *a, int n)
{
	int t, v, w;

	for (t = 0, v = n - 1; t < v; t++, v--)
	{
		w = a[t];
		a[t] = a[v];
		a[v] = w;
	}
}
