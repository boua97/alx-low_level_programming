#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: input char
 *
 * Return: length of a string.
*/

int _strlen_recursion(char *s)
{
	int v = 0;

	if (*s > '\0')
	{
		v += _strlen_recursion(s + 1) + 1;
	}
	return (v);
}
