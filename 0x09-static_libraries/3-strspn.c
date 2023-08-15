#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int v, w, bool;

	for (v = 0; *(s + v) != '\0'; v++)
	{
		bool = 1;
		for (w = 0; *(accept + w) != '\0'; w++)
		{
			if (*(s + v) == *(accept + w))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (v);
}
