#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0.
 */

int main(int argc, char const *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
		printf("%s\n", argv[v]);
	}
	return (0);
}
