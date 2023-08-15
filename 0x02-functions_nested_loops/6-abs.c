#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @n: integer numbre
 *
 * Return: return always value of abs(n)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
