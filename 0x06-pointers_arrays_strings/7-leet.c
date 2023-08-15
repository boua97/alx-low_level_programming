#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int v, w;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (w = 0; w < 10; w++)
		{
			if (s[v] == c[w])
			{
				s[v] = d[w];
			}
		}
	}

	return (s);
}
