#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: 0=success
 */

int main(void)
{
	char alph = '0';

	while (alph <= '9')
	{
		putchar(alph);
		alph++;
	}
	alph = 'a';
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
return (0);
}
