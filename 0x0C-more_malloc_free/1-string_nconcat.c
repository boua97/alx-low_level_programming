#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: If the function fails, it should return NULL
 *	If n is greater or equal to the length of s2 then use the entire string s2
 *	if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int si1 = 0, si2 = 0, v;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[si1] != '\0')
	{
		si1++;
	}

	while (s2[si2] != '\0')
	{
		si2++;
	}

	if (n > si2)
	n = si2;
	p = malloc((si1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (v = 0; v < si1; v++)
	{
		p[v] = s1[v];
	}

	for (; v < (si1 + n); v++)
	{
		p[v] = s2[v - si1];
	}
	p[v] = '\0';

return (p);
}
