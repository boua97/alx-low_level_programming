#include "main.h"

/**
 * _strstr - function that locates a substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
