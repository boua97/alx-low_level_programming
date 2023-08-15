#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * function should work exactly like strcmp
 *
 * @s1: 1 input char
 * @s2: 2 input char
 *
 * Return: deference
 *
 */

int _strcmp(char *s1, char *s2)
{
	int d = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			d = (int)(*s1 - *s2);
			break;
		}
		s1++;
		s2++;
	}
	return (d);
}
