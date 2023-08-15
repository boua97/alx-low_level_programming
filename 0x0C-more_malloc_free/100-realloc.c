#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: If new_size>old_size, the“added”memory should not be initialized
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 *	for all values of old_size and new_size
 * If new_size is equal to zero, and ptr is not NULL,
 *	then the call is equivalent to free(ptr). Return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *cl, *rel;
	unsigned int v;

	if (ptr != NULL)
		cl = ptr;
	else
		{ return (malloc(new_size)); }
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		{ free(ptr);
	return (0); }
		rel = malloc(new_size);
	if (rel == NULL)
		return (0);
	for (v = 0; v < (old_size || v < new_size); v++)
	{
		*(rel + v) = cl[v];
	}
	free(ptr);
return (rel);
}
