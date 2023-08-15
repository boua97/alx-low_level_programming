#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @n: function copies
 * @src: bytes from memory area
 * @dest: to memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		dest[v] = src[v];
		v++;
	}

	return (dest);
}
