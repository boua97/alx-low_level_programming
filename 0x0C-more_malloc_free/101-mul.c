#include "main.h"

/**
 * main - program that multiplies two positive numbers.
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int v, w;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (v = 1; v < argc; v++)
	{
		for (w = 0; argv[v][w] != '\0'; w++)
		{
			if (argv[v][w] > 57 || argv[v][w] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
