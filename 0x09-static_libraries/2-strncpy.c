#include "main.h"

/**
 * *_strncpy - function that copies a string
 * function should work exactly like strncpy
 *
 * @dest:first character input
 * @src: seconde character input
 * @n: int input
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int v;

	for (v = 0; v < n && src[v] != '\0'; v++)
		dest[v] = src[v];
	for (; v < n; v++)
		dest[v] = '\0';
	return (dest);
}
