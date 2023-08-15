#include "main.h"

/**
 * print_triangle - function that prints a square, followed by a new line.
 *
 * @size: is the size of the triangle
 */

void print_triangle(int size)
{
	int s, q, v;

	for (s = 1; s <= size; s++)
	{
		for (v = size - s; v >= 1; v--)
			_putchar(' ');
		for (q = 1; q <= s; q++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
