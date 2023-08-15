#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: argc.
 * @argv: argv.
 *
 * Return: always 0.
 *
 */

int main(int argc, char const *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
