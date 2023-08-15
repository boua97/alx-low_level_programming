#include "main.h"

/**
 * _s - size of a string
 * @st: input char
 * Return: size of a string
 */

int _s(char *st)
{
	int L = 0;

	while (*st != '\0')
	{
		st++;
		L++;
	}
	return (L);
}

/**
* str_concat - function that concatenates two strings.
* @s1: string
* @s2: string
* Return: concatenates two strings.
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int L1, L2;
	char *co, *t;

	if (!s1)
		s1 = "\0";
	else
		L1 = _s(s1);

	if (s2 == NULL)
		s2 = "";
	else
		L2 = _s(s2);

	co = malloc(L1 + L2 + 1);
	if (!co)
		return (0);

	t = co;
	while (*s1)
		*t++ = *s1++;

	while ((*t++ = *s2++))
		;

	return (co);
}
