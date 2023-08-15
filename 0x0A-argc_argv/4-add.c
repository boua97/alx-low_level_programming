#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0-succes, 1 if error
 */

int main(int argc, char *argv[])
{
	int v, w, s = 0;

	for (v = 1; v < argc; v++)
	{
		for (w = 0; argv[v][w] != '\0'; w++)
		{
			if (argv[v][w] < '0' || argv[v][w] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		s += atoi(argv[v]);
	}

	printf("%d\n", s);

	return (0);
}
