#include "main.h"
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *st;
	int co = 0, v = 0, w = 0, u = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (v < ac)
	{
		w = 0;
		while (av[v][w] != '\0')
		{
			co++;
			w++;
		}
		v++;
	}
	co = co + ac + 1;
	st = malloc(sizeof(char) * co);
	if (st == NULL)
	{
		return (NULL);
	}
	for (v = 0; v < ac; v++)
	{
		for (w = 0; av[v][w] != '\0'; w++)
		{
			st[u] = av[v][w];
			u++;
		}
		st[u] = '\n';
		u++;
	}
	return (st);
}
