#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n:  is the number of times the character _
 */

void print_line(int n)
{
	int nl;

	for (nl = 0; nl < n; nl++)
		_putchar('_');
	_putchar('\n');

}
