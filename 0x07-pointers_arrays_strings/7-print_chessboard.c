#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: input.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int v, w = 0;

	for (v = 0; v < 64; v++)
	{
		if (v % 8 == 0 && v != 0)
		{
			w = v;
			_putchar('\n');
		}
		_putchar(a[v / 8][v - w]);
	}
	_putchar('\n');
}
