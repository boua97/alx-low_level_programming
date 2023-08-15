#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,in lowercase
 *
*/

void print_alphabet_x10(void)
{
	int n, l;

	for (l = 1; l <= 10 ; l++)
	{

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
	}
}
