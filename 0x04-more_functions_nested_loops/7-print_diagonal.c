#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n:  is the number of times the character ' '
 */

void print_diagonal(int n)
{
	int nl, s;

	if (n > 0)
		for (nl = 1; nl <= n; nl++)
		{
			for (s = 1; s < nl ; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	else
		_putchar('\n');
}
