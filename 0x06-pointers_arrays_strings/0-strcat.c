#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: 1 imput
 * @src: 2 imput
 *
 * Return: pointer to the resulting string dest
 */



char *_strcat(char *dest, char *src)
{
	int v, w = 0;

	for (v = 0; dest[v]; v++)
		;
	while (src[w])
	{
		dest[v++] = src[w];
		w++;
	}
	return (dest);
}
