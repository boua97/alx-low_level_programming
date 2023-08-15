#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @n: bytes of the memory area pointed to by @s
 * @s: with the constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
	s[v] = b;
	v++;
	}
	return (s);
}
