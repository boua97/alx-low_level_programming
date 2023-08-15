#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 *
 * @dest:first character input
 * @src: seconde character input
 * @n: int input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int v, w, i;

	for (v = 0; dest[v]; v++)
		;
	for (w = 0; src[w]; w++)
		;
	if (n < w)
		w = n;
	for (i = 0; w > i; i++)
	{
		dest[v++] = src[i];
	}
	dest[v] = '\0';
	return (dest);
}
