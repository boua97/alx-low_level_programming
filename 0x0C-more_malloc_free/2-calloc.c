#include "main.h"

/**
 *_calloc -function that allocates memory for an array, using malloc.
 *@nmemb: number of element in the array
 *@size: bytes for each position in array
 *Return: If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pp;
	unsigned int v;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pp = malloc(nmemb * size);
	if (pp == NULL)
		return (NULL);

	for (v = 0; v < nmemb * size; v++)
		pp[v] = 0;

	return (pp);
}
