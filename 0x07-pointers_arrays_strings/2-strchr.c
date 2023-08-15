#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 *
 * @c: occurrence of the character
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int v = 0;

	while (*s)
	{
		if (*s == c)
		{
			return (s + v);
		}
		s++;
		v++;
	}

	return ('\0');
}
