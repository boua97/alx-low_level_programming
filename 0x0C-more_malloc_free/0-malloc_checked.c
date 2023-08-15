#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: number of memory
 *Return: b
 */

void *malloc_checked(unsigned int b)
{
void *v;

v = malloc(b);
	if (!v)
	{
		exit(98);
	}

return (v);
}
