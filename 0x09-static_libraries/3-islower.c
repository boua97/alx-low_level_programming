#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 *
 *@c: character
 *
 * Return: 1 if c is lowercase
 * Return 0 otherwise
 *
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
