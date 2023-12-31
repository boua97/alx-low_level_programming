#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @v: left index.
 * @w: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int pal_checker(char *s, int v, int w)
{
	if (s[v] == s[w])
		if (v > w / 2)
			return (1);
		else
			return (pal_checker(s, v + 1, w - 1));
	else
		return (0);
}
/**
 * is_palindrome - function check if string is a palindrome.
 * @s: base address for string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
