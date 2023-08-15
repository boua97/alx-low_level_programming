#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 */

void print_square(int size)
{
	int s, q;

	for (s = 1; s <= size; s++)
	{
		for (q = 1; q <= size; q++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
