#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0=success
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
