#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: first input
 * @y: seconde input
 *
 * Return: x^y, If y is lower than 0, the function should return -1
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0 || (y == 0 && x == 0))
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
