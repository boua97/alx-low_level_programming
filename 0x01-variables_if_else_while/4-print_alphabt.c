#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet #e,q in lowercase, and then in uppercase.
 *
 * Return: 0=success
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'e' || alph == 'q')
			alph++;
		putchar(alph);
		alph++;
	}
	putchar('\n');
return (0);
}
