#include "main.h"

/**
 * str_checker - check if 2 strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @v: left index.
 * @w: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int str_checker(char *s1, char *s2, int v, int w)
{
	if (s1[v] == '\0' && s2[w] == '\0')
		return (1);
	if (s1[v] == s2[w])
		return (str_checker(s1, s2, v + 1, w + 1));
	if (s1[v] == '\0' && s2[w] == '*')
		return (str_checker(s1, s2, v, w + 1));
	if (s2[w] == '*')
		return (str_checker(s1, s2, v + 1, w) || str_checker(s1, s2, v, w + 1));
	return (0);
}
/**
 * wildcmp -  function that compares two strings
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
