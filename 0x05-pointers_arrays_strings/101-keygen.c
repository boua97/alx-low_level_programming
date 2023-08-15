#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * main - program that generates random.
 *
 * Return: always 0
 */

int main(void)
{
	int s;
	char ch;

	srand(time(NULL));
	while (s <= 2645)
	{
		ch = rand() % 128;
		s = s + ch;
		putchar(ch);
	}
	putchar(2772 - s);
	return (0);
}
