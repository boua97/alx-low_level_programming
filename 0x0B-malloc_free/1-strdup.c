#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string
 * Return: NULL if str = NULL or insufficient memory was available
 *		On success, the _strdup function returns a pointer
 */

char *_strdup(char *str)
{
	char *st;
	int v = 0, w;

	if (!str)
		return (NULL);

	while (*(str + v))
		v++;
	v++;
	st = malloc(sizeof(char) * v);

	if (!st)
	{
		return (NULL);
	}

	for (w = 0; w <= v; w++)
	{
		st[w] = str[w];
	}
	return (st);
}
