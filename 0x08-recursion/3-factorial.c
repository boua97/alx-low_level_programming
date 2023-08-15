#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: input
 *
 * Return: n factorial if n >= 0, -1 to indicate an error.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
