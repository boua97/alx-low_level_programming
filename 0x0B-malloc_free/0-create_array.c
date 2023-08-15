#include "main.h"

/**
 * *create_array - creates an array of chars.
 *
 * @size: size of the array
 * @c: input specific char.
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(size);

	if (size == 0 || ch == 0)
		return (0);

	while (size--)
		ch[size] = c;
	return (ch);
}
