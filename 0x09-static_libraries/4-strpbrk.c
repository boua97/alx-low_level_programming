#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int v, w;

	for (v = 0; *(s + v) != '\0'; v++)
	{
		for (w = 0; *(accept + w) != '\0'; w++)
		{
			if (*(s + v) == *(accept + w))
				return (s + v);
		}
	}
	return ('\0');
}
