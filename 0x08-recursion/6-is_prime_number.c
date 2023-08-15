#include "main.h"

/**
 * check - checks to see if number is prime
 * @v: input
 * @w: input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int check(int v, int w)
{
	if (w < 2 || w % v == 0)
		return (0);
	else if (v > w / 2)
		return (1);
	else
		return (check(v + 1, w));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
