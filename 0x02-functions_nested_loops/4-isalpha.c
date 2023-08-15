#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character.
 *
 *@c: character
 *
 * Return: 1 if c is alphabetic character
 * Return 0 otherwise
 *
*/

int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
