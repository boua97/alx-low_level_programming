#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s: imput char
 *
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (*s != '\0')
	{
		_putchar(*s + 0);
		s--;

	}
	_putchar('\n');
}
