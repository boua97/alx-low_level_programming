#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0=success
 */
int main(void)
{
	long int n;
	long int m;
	long int j;

	n = 612852475143;
	m = -1;

	while (n % 2 == 0)
	{
		m = 2;
		n /= 2;
	}

	for (j = 3; j <= sqrt(n); j = j + 2)
	{
		while (n % j == 0)
		{
			m = j;
			n = n / j;
		}
	}

	if (n > 2)
		m = n;

	printf("%ld\n", m);

	return (0);
}

